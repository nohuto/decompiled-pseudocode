/*
 * XREFs of ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C00C6F40
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C00EAAB0 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     GetPkeyName @ 0x1C00C75B4 (GetPkeyName.c)
 *     netsetupIsImpliedProperty @ 0x1C00C7680 (netsetupIsImpliedProperty.c)
 *     KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___ @ 0x1C00C76C8 (KRegKey--QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint32(void ***this, const struct _NETSETUPPROPKEY *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v10[3]; // [rsp+28h] [rbp-A0h] BYREF
  wchar_t v11[48]; // [rsp+40h] [rbp-88h] BYREF

  Handle = 0LL;
  GetPkeyName(a2, v11);
  v6 = KRegKey::Open((KRegKey *)&Handle, 1u, v11, **this);
  v7 = v6;
  if ( v6 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0;
      v7 = 0;
    }
  }
  else if ( !v6 )
  {
    v10[0] = 0LL;
    v10[1] = 0LL;
    v7 = KRegKey::QueryValueBlob__lambda_3d3ed660da3e95067e62aa13ddce3517___(&Handle, v10, a3);
  }
  if ( Handle )
    ZwClose(Handle);
  return v7;
}
