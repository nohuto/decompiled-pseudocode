/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x18005ABC4
 * Callers:
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

LOGICAL __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax

  v1 = *(void **)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
