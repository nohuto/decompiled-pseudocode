/*
 * XREFs of PopPrepareIoctl @ 0x140752670
 * Callers:
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140752570 (PopFanWorker.c)
 *     PopBatteryInitialize @ 0x14086E310 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14086E4AC (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14086E53C (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14086E6BC (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x14086EB10 (PopBatteryWaitTag.c)
 * Callees:
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
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
