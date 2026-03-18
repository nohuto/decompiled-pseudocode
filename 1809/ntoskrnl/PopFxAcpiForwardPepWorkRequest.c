/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x1402E8380
 * Callers:
 *     PopFxProcessWork @ 0x1400FE370 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE2F0 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PopFxBugCheck @ 0x1402D73C0 (PopFxBugCheck.c)
 */

LONG __fastcall PopFxAcpiForwardPepWorkRequest(struct _IO_REMOVE_LOCK *BugCheckParameter2, int *a2)
{
  LONG result; // eax
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !BugCheckParameter2[2].Common.RemoveEvent.Header.WaitListHead.Flink )
    PopFxBugCheck(0x668uLL, (ULONG_PTR)BugCheckParameter2, *a2, 0LL);
  result = IoAcquireRemoveLockEx(BugCheckParameter2 + 8, (PVOID)0x77466F50, &File, 1u, 0x20u);
  if ( result >= 0 )
  {
    memset(v5, 0, 0x20uLL);
    LODWORD(v5[0]) = 0;
    v5[1] = qword_14040E588;
    v5[3] = a2;
    ((void (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v5);
    result = _InterlockedExchangeAdd(&BugCheckParameter2[8].Common.IoCount, 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent(&BugCheckParameter2[8].Common.RemoveEvent, 0, 0);
  }
  return result;
}
