/*
 * XREFs of WheapReportBootError @ 0x14031FCDC
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14017D41C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     WheapAllocErrorRecord @ 0x140320278 (WheapAllocErrorRecord.c)
 *     WheapGetErrorSource @ 0x140320644 (WheapGetErrorSource.c)
 *     WheapWorkQueueAddItem @ 0x140321374 (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rbp
  __int64 ErrorSource; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v8; // [rsp+40h] [rbp+8h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(unsigned int *)(a1 + 24));
  v4 = ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  v8 = 0;
  v5 = WheapAllocErrorRecord(ErrorSource, &v8);
  v6 = v5;
  if ( !v5 )
    return 0;
  (*((void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))&unk_1404DD180 + 6 * *(int *)(v4 + 40)))(
    v4 + 89,
    a1,
    v5 + 40,
    (unsigned int)(v8 - 40),
    *(_QWORD *)(v4 + 56));
  WheapWorkQueueAddItem(WheaInfo[2], v6);
  return 1;
}
