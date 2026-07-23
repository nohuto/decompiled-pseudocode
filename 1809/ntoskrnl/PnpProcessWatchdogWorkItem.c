/*
 * XREFs of PnpProcessWatchdogWorkItem @ 0x140289D7C
 * Callers:
 *     PnpDelayedRemoveWorkerWatchdogWorkItem @ 0x140289C20 (PnpDelayedRemoveWorkerWatchdogWorkItem.c)
 *     PnpDeviceCompletionQueueWatchdogWorkItem @ 0x140289C60 (PnpDeviceCompletionQueueWatchdogWorkItem.c)
 *     PnpEventWorkerWatchdogWorkItem @ 0x140289D40 (PnpEventWorkerWatchdogWorkItem.c)
 * Callees:
 *     PnpRecordBlackbox @ 0x140005BB0 (PnpRecordBlackbox.c)
 *     PnpWatchdogInitializeTimer @ 0x140005C9C (PnpWatchdogInitializeTimer.c)
 *     PnpQueryWatchdogTimeout @ 0x140005D00 (PnpQueryWatchdogTimeout.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x140289E44 (PnpQueryWatchdogBugcheckEnabled.c)
 *     PnpWatchdogBugcheck @ 0x140289F20 (PnpWatchdogBugcheck.c)
 */

LONG __fastcall PnpProcessWatchdogWorkItem(__int64 a1, __int64 a2)
{
  struct _KEVENT *v4; // rcx
  int v5; // r8d
  __int64 v6; // r10

  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( *(_BYTE *)(a1 + 137) )
    {
      if ( (unsigned __int8)PnpQueryWatchdogBugcheckEnabled() )
        PnpWatchdogBugcheck(a1);
    }
    else
    {
      PnpRecordBlackbox(*(_QWORD *)(a1 + 208), *(_DWORD *)(a1 + 200));
      if ( (unsigned int)PnpQueryWatchdogTimeout(0) )
      {
        v5 = *(_DWORD *)(a1 + 200);
        *(_BYTE *)(a1 + 137) = 1;
        PnpWatchdogInitializeTimer(a1, a2, v5, a1);
        return KiSetTimerEx(a1 + 8, -10000000 * v6, 0, 0, a1 + 72);
      }
    }
    v4 = (struct _KEVENT *)(a1 + 144);
    *(_BYTE *)(a1 + 136) = 0;
  }
  else
  {
    v4 = (struct _KEVENT *)(a1 + 144);
  }
  return KeSetEvent(v4, 0, 0);
}
