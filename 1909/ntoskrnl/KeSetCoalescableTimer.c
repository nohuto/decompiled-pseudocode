/*
 * XREFs of KeSetCoalescableTimer @ 0x1400E29F0
 * Callers:
 *     CmpArmLazyWriter @ 0x140007920 (CmpArmLazyWriter.c)
 *     PopFxArmResidentTimer @ 0x1400DFEFC (PopFxArmResidentTimer.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400E27F4 (PopFxScheduleDeviceIdleTimer.c)
 *     EtwpRequestFlushTimer @ 0x1400E28C0 (EtwpRequestFlushTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E294C (CcRescheduleLazyWriteScan.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1400E3DE4 (PopFxEnableWorkOrderWatchdog.c)
 *     ExpTimerResume @ 0x1400EB694 (ExpTimerResume.c)
 *     ExpTimerDpcRoutine @ 0x1401015F0 (ExpTimerDpcRoutine.c)
 *     CmpCompleteLazyWrite @ 0x140136A08 (CmpCompleteLazyWrite.c)
 *     CcBcbProfiler @ 0x1401AA360 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1402933F4 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x1402F8A88 (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x14033B664 (ExpTimerAdjust.c)
 *     KiInitializeProcessor @ 0x14059FC40 (KiInitializeProcessor.c)
 *     sub_1405B0010 @ 0x1405B0010 (sub_1405B0010.c)
 *     PiDrvDbUnloadNode @ 0x140677938 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406E7ED4 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x14076BAB0 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x14085A90C (IopErrorLogQueueRequest.c)
 *     AnFwDisplayFade @ 0x14098EBD8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1409912FC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140991714 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1409940B4 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x1409D0324 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140A21D1C (PopInitializeSystemIdleDetection.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v8 = 10000LL * TolerableDelay;
    if ( v8 > 0xFC0000 )
    {
      v9 = v8 - 16515072;
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
      LODWORD(v8) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v8 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
