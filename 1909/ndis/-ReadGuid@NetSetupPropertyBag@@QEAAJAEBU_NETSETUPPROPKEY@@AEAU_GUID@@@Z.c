/*
 * XREFs of ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C0101A70
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0023C4C (ndisIfReadNetworkGuidFromKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     netsetupIsImpliedProperty @ 0x1C0100F0C (netsetupIsImpliedProperty.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0100F54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x1C012438C (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadGuid(void ***this, const struct _NETSETUPPROPKEY *a2, struct _GUID *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( netsetupIsImpliedProperty((__int64)a2) )
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
