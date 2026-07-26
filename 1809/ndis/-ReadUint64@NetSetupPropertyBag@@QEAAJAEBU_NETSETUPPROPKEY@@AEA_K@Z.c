/*
 * XREFs of ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C00C4C74
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C00C5470 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C00C7CB4 (ndisIfReadInterfaceAddDeviceParameters.c)
 * Callees:
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x1C00C4CF8 (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C00C6ECC (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C00C7680 (netsetupIsImpliedProperty.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint64(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        unsigned __int64 *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0LL;
      v6 = 0;
    }
  }
  else if ( !v5 )
  {
    v8[0] = 0LL;
    v8[1] = 0LL;
    v6 = KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___(&Handle, v8, a3);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
