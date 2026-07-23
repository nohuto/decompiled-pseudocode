/*
 * XREFs of ViFilterDriverEntry @ 0x1409444F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViFilterDriverEntry(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_EXTENSION DriverExtension; // rax

  DriverExtension = a1->DriverExtension;
  VfFilterDriverObject = a1;
  DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)ViFilterAddDevice;
  memset64(a1->MajorFunction, (unsigned __int64)ViFilterDispatchGeneric, 0x1CuLL);
  a1->MajorFunction[27] = (PDRIVER_DISPATCH)ViFilterDispatchPnp;
  a1->MajorFunction[22] = (PDRIVER_DISPATCH)ViFilterDispatchPower;
  return 0LL;
}
