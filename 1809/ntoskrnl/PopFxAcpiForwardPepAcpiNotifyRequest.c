/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1402E83E0
 * Callers:
 *     PopFxProcessWork @ 0x1400FE390 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2B00 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PopFxBugCheck @ 0x1402D74C0 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1402D80D4 (PopFxFindAndReferenceAcpiDevice.c)
 */

LONG __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  result = PopFxFindAndReferenceAcpiDevice((__int64 *)BugCheckParameter2);
  if ( result >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    memset(v5, 0, 0x20uLL);
    LODWORD(v5[0]) = 0;
    v5[1] = qword_14040E588;
    v5[3] = a2;
    ((void (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 260), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 264), 0, 0);
  }
  return result;
}
