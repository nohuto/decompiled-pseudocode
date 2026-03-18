/*
 * XREFs of KeEnterKernelDebugger @ 0x1402A8790
 * Callers:
 *     <none>
 * Callees:
 *     KiBugCheckDebugBreak @ 0x1402A8B00 (KiBugCheckDebugBreak.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 */

__int64 KeEnterKernelDebugger()
{
  unsigned __int8 CurrentIrql; // cl

  _InterlockedExchange(&KiHardwareTrigger, 1);
  _disable();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger && !_InterlockedExchange(&dword_14050E8F8, 1) )
    KdInitSystem(0LL, 0LL);
  return KiBugCheckDebugBreak(5u);
}
