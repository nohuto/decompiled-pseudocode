/*
 * XREFs of PnprWakeProcessors @ 0x1405AABBC
 * Callers:
 *     PnprEndMirroring @ 0x1405A9550 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1405A9630 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     KeResumeClockTimerSafe @ 0x1402A5144 (KeResumeClockTimerSafe.c)
 *     KeRestoreMtrrBroadcast @ 0x14059FE78 (KeRestoreMtrrBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x1405A95CC (PnprGetMillisecondCounter.c)
 */

__int64 PnprWakeProcessors()
{
  int MillisecondCounter; // eax
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 result; // rax

  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(PnprContext + 20976))(*(_QWORD *)(PnprContext + 20880), 0LL);
    MillisecondCounter = PnprGetMillisecondCounter(0);
    v1 = PnprContext;
    *(_DWORD *)(PnprContext + 21020) = MillisecondCounter;
    *(_DWORD *)(v1 + 200) = 6;
  }
  KeRestoreMtrrBroadcast();
  ((void (__fastcall *)(_QWORD, _QWORD))off_1404243F0[0])(0LL, 0LL);
  KeResumeClockTimerSafe();
  ((void (__fastcall *)(__int64, _QWORD))off_1404243C8[0])(2LL, *(_QWORD *)(PnprContext + 20872));
  v2 = PnprGetMillisecondCounter(0);
  v3 = PnprContext;
  *(_QWORD *)(PnprContext + 20992) = 10000 * (v2 - *(_QWORD *)(PnprContext + 20992));
  *(_DWORD *)(v3 + 200) = 7;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 188));
  result = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    return off_140424420[0]();
  return result;
}
