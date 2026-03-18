/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x14029A5AC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A40 (KeAddProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDA90 (KeCopyAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x1406E2790 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
