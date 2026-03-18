/*
 * XREFs of PnpProcessWatchdogWorkItem @ 0x14029FD18
 * Callers:
 *     PnpWatchdogWorkItem @ 0x1402A01D0 (PnpWatchdogWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PnpWatchdogInitializeTimer @ 0x14009B0B4 (PnpWatchdogInitializeTimer.c)
 *     PnpQueryWatchdogTimeout @ 0x14009B11C (PnpQueryWatchdogTimeout.c)
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     PnpRecordBlackbox @ 0x1400B3978 (PnpRecordBlackbox.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FDD0 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x1402A0050 (PnpWatchdogBugcheck.c)
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
