/*
 * XREFs of PnpProcessWatchdogWorkItem @ 0x14029FA78
 * Callers:
 *     PnpWatchdogWorkItem @ 0x14029FF30 (PnpWatchdogWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     PnpWatchdogInitializeTimer @ 0x1400EF0C4 (PnpWatchdogInitializeTimer.c)
 *     PnpQueryWatchdogTimeout @ 0x1400EF12C (PnpQueryWatchdogTimeout.c)
 *     PnpRecordBlackbox @ 0x1400EFD20 (PnpRecordBlackbox.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FB30 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x14029FDB0 (PnpWatchdogBugcheck.c)
 */

LONG __fastcall PnpProcessWatchdogWorkItem(__int64 a1)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // r10

  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      if ( (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() )
        PnpWatchdogBugcheck(a1);
    }
    else
    {
      PnpRecordBlackbox(*(_QWORD *)(a1 + 264), *(_DWORD *)(a1 + 200));
      if ( (unsigned int)PnpQueryWatchdogTimeout(0) )
      {
        v4 = *(_DWORD *)(a1 + 200);
        *(_BYTE *)(a1 + 137) = 1;
        PnpWatchdogInitializeTimer(a1, v3, v4, a1);
        return KiSetTimerEx(a1 + 8, -10000000 * v5, 0, 0, a1 + 72);
      }
    }
    v2 = (struct _KEVENT *)(a1 + 144);
    *(_BYTE *)(a1 + 136) = 0;
  }
  else
  {
    v2 = (struct _KEVENT *)(a1 + 144);
  }
  return KeSetEvent(v2, 0, 0);
}
