/*
 * XREFs of PopPrepareIoctl @ 0x14077C428
 * Callers:
 *     PopFanWorker @ 0x14077BEF0 (PopFanWorker.c)
 *     PopThermalWorker @ 0x14077BFF0 (PopThermalWorker.c)
 *     PopBatteryInitialize @ 0x1408A9470 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408A95FC (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408A9684 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408A9808 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x1408A9C60 (PopBatteryWaitTag.c)
 * Callees:
 *     IoReuseIrp @ 0x140091F90 (IoReuseIrp.c)
 */

__int64 __fastcall PopPrepareIoctl(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
