/*
 * XREFs of WheapReportBootError @ 0x14033FA98
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14019D948 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapGetErrorSourceFunction @ 0x14018B0C8 (WheapGetErrorSourceFunction.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     WheapAllocErrorRecord @ 0x140340154 (WheapAllocErrorRecord.c)
 *     WheapGetErrorSource @ 0x14034069C (WheapGetErrorSource.c)
 *     WheapWorkQueueAddItem @ 0x1403426E0 (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rsi
  __int64 ErrorSource; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  void (__fastcall *ErrorSourceFunction)(__int64, __int64, __int64, _QWORD, _QWORD); // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(unsigned int *)(a1 + 24));
  v4 = ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  v8 = 0;
  v5 = WheapAllocErrorRecord(ErrorSource, &v8);
  if ( !v5 )
    return 0;
  ErrorSourceFunction = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD))WheapGetErrorSourceFunction(
                                                                                          v4,
                                                                                          2,
                                                                                          0);
  if ( ErrorSourceFunction )
  {
    ErrorSourceFunction(v4 + 96, a1, v5 + 40, (unsigned int)(v8 - 40), *(_QWORD *)(v4 + 56));
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  }
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
