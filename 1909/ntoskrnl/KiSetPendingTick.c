/*
 * XREFs of KiSetPendingTick @ 0x140112644
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140033DF0 (KeResumeClockTimerFromIdle.c)
 *     KiRestoreClockTickRate @ 0x140111F6C (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x140111FD0 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x1401124A4 (KiSetClockTickRate.c)
 *     KeInitializeClock @ 0x1409FCFBC (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiSetPendingTick(char a1)
{
  char v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 result; // al
  __int64 v4; // rcx

  v1 = a1 & 1;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = v1 | CurrentPrcb->PendingTickFlags & 0xFE;
    CurrentPrcb->PendingTickFlags = result;
  }
  else
  {
    v4 = KiProcessorBlock[KiClockTimerOwner];
    result = v1 | *(_BYTE *)(v4 + 34) & 0xFE;
    *(_BYTE *)(v4 + 34) = result;
  }
  return result;
}
