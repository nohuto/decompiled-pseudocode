/*
 * XREFs of KeSetCoalescableTimer @ 0x14001CDE0
 * Callers:
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     CmpArmLazyWriter @ 0x14008CC94 (CmpArmLazyWriter.c)
 *     CcRescheduleLazyWriteScan @ 0x1400D784C (CcRescheduleLazyWriteScan.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400FE014 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x140100420 (PopFxArmResidentTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x14010085C (PopFxEnableWorkOrderWatchdog.c)
 *     ExpTimerResume @ 0x14013187C (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x1401349DC (CmpCompleteLazyWrite.c)
 *     ExpTimerDpcRoutine @ 0x140136230 (ExpTimerDpcRoutine.c)
 *     CcBcbProfiler @ 0x14019F460 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x14027EECC (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x1402DCA04 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x14031CB80 (ExpTimerAdjust.c)
 *     KiInitializeProcessor @ 0x14057402C (KiInitializeProcessor.c)
 *     sub_140581010 @ 0x140581010 (sub_140581010.c)
 *     PiDrvDbUnloadNode @ 0x1406AAEF8 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406C5430 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x140822334 (IopErrorLogQueueRequest.c)
 *     AnFwDisplayFade @ 0x14094FBA8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14095229C (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409526AC (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x140954F94 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v7) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v7 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
