/*
 * XREFs of ExSetTimer @ 0x1401147D0
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x14001F300 (RtlpHpScheduleCompaction.c)
 *     EnableFlushTimer @ 0x140113A7C (EnableFlushTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x1406BD600 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408FD174 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408FD480 (SendCaptureStateNotificationsWorker.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     ExpTimerSetParametersAreValid @ 0x1400BAAD4 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x1400BC1F0 (KeSetTimer2.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x140114854 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
