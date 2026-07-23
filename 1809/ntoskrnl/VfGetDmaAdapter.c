/*
 * XREFs of VfGetDmaAdapter @ 0x14092C140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IoGetDmaAdapter @ 0x140756AF0 (IoGetDmaAdapter.c)
 *     VF_ASSERT_IRQL @ 0x14092A6A0 (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x14092A96C (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x14092CA28 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x14092EF30 (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x14092F59C (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  _LIST_ENTRY *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( !ViVerifyDma || ViDMADisabledNoRebootNeeded == 1 || (unsigned int)VfIsPCIBus() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (MmVerifierData & 0x20000) == 0 )
    VF_ASSERT_IRQL(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v6 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v6 )
        break;
      ViReleaseDmaAdapter((__int64)v6);
    }
  }
  if ( *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  ((__int64 (__fastcall *)(struct _KTHREAD *))off_1403FF650)(KeGetCurrentThread());
  v7 = (_QWORD *)((__int64 (__fastcall *)(PDEVICE_OBJECT, struct _DEVICE_DESCRIPTION *, PULONG))pXdvIoGetDmaAdapter)(
                   PhysicalDeviceObject,
                   DeviceDescription,
                   NumberOfMapRegisters);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v10 = ViHookDmaAdapter(v7);
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD *))(v8[1] + 8LL))(v8);
    return 0LL;
  }
  *(_QWORD *)(v10 + 24) = PhysicalDeviceObject;
  *(_QWORD *)(v10 + 40) = retaddr;
  return (struct _DMA_ADAPTER *)v8;
}
