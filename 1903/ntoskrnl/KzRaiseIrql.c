/*
 * XREFs of KzRaiseIrql @ 0x1400ED050
 * Callers:
 *     KiVirtualizationException @ 0x1401D3400 (KiVirtualizationException.c)
 * Callees:
 *     <none>
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL result; // al

  result = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && NewIrql >= 2u && result < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  return result;
}
