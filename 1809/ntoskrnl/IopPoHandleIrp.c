/*
 * XREFs of IopPoHandleIrp @ 0x140171C4C
 * Callers:
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopfCallDriver @ 0x1401732F4 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140171C94 (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  unsigned int v3; // [rsp+38h] [rbp+10h]

  if ( (unsigned __int8)PoHandleIrp(a1) )
    return v3;
  else
    return ((__int64 (__fastcall *)(PDEVICE_OBJECT, IRP *))a1->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[a1->Tail.Overlay.CurrentStackLocation->MajorFunction])(
             a1->Tail.Overlay.CurrentStackLocation->DeviceObject,
             a1);
}
