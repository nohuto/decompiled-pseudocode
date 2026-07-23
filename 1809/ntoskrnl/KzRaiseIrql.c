/*
 * XREFs of KzRaiseIrql @ 0x1400BC750
 * Callers:
 *     KiVirtualizationException @ 0x1401CD500 (KiVirtualizationException.c)
 * Callees:
 *     <none>
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL CurrentIrql; // r8
  KIRQL result; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || NewIrql < 2u )
    return CurrentIrql;
  result = CurrentIrql;
  if ( CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  return result;
}
