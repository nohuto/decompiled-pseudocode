/*
 * XREFs of KeQueryBootTimeValues @ 0x14012AC04
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     EtwpInitialize @ 0x140A15AEC (EtwpInitialize.c)
 *     PipHardwareConfigInit @ 0x140A1C474 (PipHardwareConfigInit.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryBootTimeValues(_QWORD *a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  *a1 = MEMORY[0xFFFFF78000000014];
  *a2 = KeBootTime;
  *a3 = KeBootTimeBias;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
