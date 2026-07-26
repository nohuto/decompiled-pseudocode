/*
 * XREFs of ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C00C4F7C
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C001C9E8 (ndisIfReadNetworkGuidFromKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C00C6ECC (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C00C7680 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x1C0104038 (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadGuid(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        struct _GUID *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      v9 = 0uLL;
      v6 = 0;
      *a3 = 0uLL;
    }
  }
  else if ( !v5 )
  {
    v9 = 0uLL;
    v6 = KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___(&Handle, &v9, a3);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
