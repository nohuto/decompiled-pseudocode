/*
 * XREFs of ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C0107EE8
 * Callers:
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C0101424 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ndisIfReadInterfaceAddDeviceParameters @ 0x1C01070B8 (ndisIfReadInterfaceAddDeviceParameters.c)
 * Callees:
 *     netsetupIsImpliedProperty @ 0x1C0100F0C (netsetupIsImpliedProperty.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0100F54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___ @ 0x1C0107F6C (KRegKey--QueryValueBlob__lambda_195928ecaabee91b0db244d6e7f18b31___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadUint64(
        void ***this,
        const struct _NETSETUPPROPKEY *a2,
        unsigned __int64 *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( netsetupIsImpliedProperty((__int64)a2) )
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
