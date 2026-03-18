/*
 * XREFs of IopPoHandleIrp @ 0x140174AB8
 * Callers:
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopfCallDriver @ 0x140180764 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140174B00 (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
