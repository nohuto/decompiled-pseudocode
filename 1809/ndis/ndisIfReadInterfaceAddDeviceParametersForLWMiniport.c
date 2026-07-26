/*
 * XREFs of ndisIfReadInterfaceAddDeviceParametersForLWMiniport @ 0x1C00E33D0
 * Callers:
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 * Callees:
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00C5000 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C00C71E4 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParametersForLWMiniport(__int64 a1)
{
  int v2; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF
  void **p_Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = ndisIfOpenInterfaceRegistryKey((unsigned int *)a1, (KRegKey *)&Handle, 1u, 1);
  if ( v2 >= 0 )
  {
    p_Handle = &Handle;
    if ( (int)NetSetupPropertyBag::ReadString(
                (NetSetupPropertyBag *)&p_Handle,
                (const struct _NETSETUPPROPKEY *)&unk_1C008E218,
                (void **)(a1 + 88)) >= 0
      && (int)NetSetupPropertyBag::ReadBoolean(
                &p_Handle,
                (const struct _NETSETUPPROPKEY *)&unk_1C008E1F0,
                (bool *)(a1 + 73)) >= 0 )
    {
      v2 = 0;
    }
    else
    {
      v2 = -1073741491;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v2;
}
