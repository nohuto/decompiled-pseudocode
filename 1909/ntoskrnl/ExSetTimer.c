/*
 * XREFs of ExSetTimer @ 0x140114060
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x14001F6F0 (RtlpHpScheduleCompaction.c)
 *     EnableFlushTimer @ 0x14011330C (EnableFlushTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x1406BCD90 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FCB54 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FCE40 (SendCaptureStateNotificationsWorker.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     ExpTimerSetParametersAreValid @ 0x14009A944 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1401140E4 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v11[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v11[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v11, 0LL);
  }
  if ( a4 && !ExpTimerSetParametersAreValid(a4) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
