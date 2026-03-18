/*
 * XREFs of KeGetAffinitizedInterruptsInfo @ 0x1402B170C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     ExSystemExceptionFilter @ 0x140749ED0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeGetAffinitizedInterruptsInfo(_WORD *a1)
{
  KeCopyAffinityEx((__int64)a1, (unsigned __int16 *)KiIntSteerAffinitizedInterrupts);
  KeAddProcessorAffinityEx(a1, KiClockTimerOwner);
  return 0LL;
}
