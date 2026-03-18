/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140304498
 * Callers:
 *     PopFxProcessWork @ 0x1400E0D10 (PopFxProcessWork.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1402F30D4 (PopFxFindAndReferenceAcpiDevice.c)
 */

LONG __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  LONG result; // eax
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 0x20uLL);
  result = PopFxFindAndReferenceAcpiDevice((__int64 *)BugCheckParameter2);
  if ( result >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    v5[1] = qword_140436C48;
    HIDWORD(v5[0]) = 0;
    v5[2] = 0LL;
    v5[3] = a2;
    ((void (__fastcall *)(_QWORD *))PopFxPlatformInterface)(v5);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 268), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(BugCheckParameter2 + 272), 0, 0);
  }
  return result;
}
