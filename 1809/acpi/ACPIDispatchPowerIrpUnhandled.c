/*
 * XREFs of ACPIDispatchPowerIrpUnhandled @ 0x1C00511C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpUnhandled(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  Status = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
