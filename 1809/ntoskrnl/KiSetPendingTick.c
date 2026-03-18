/*
 * XREFs of KiSetPendingTick @ 0x1400FCF54
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x140060910 (KeResumeClockTimerFromIdle.c)
 *     KePrepareClockTimerForIdle @ 0x1400FC850 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x1400FCDB4 (KiSetClockTickRate.c)
 *     KiRestoreClockTickRate @ 0x1400FCFB8 (KiRestoreClockTickRate.c)
 *     KeInitializeClock @ 0x1409D8C58 (KeInitializeClock.c)
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
