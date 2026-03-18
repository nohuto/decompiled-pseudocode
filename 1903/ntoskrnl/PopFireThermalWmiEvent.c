/*
 * XREFs of PopFireThermalWmiEvent @ 0x1402F7E3C
 * Callers:
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmFireWmiEvent @ 0x140301388 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PopFireThermalWmiEvent(unsigned __int8 a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[0] = a1;
  v4[1] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  PpmFireWmiEvent(&KeGetCurrentPrcb()->PowerState.WmiDispatchPtr, &PPM_THERMAL_POLICY_CHANGE_GUID, 16LL, v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
