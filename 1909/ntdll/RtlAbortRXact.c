/*
 * XREFs of RtlAbortRXact @ 0x18007F080
 * Callers:
 *     RtlApplyRXactNoFlush @ 0x18007F050 (RtlApplyRXactNoFlush.c)
 *     RtlApplyRXact @ 0x180089C80 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008AAC0 (RtlInitializeRXact.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlAbortRXact(__int64 a1)
{
  void *v1; // r8
  __int64 result; // rax

  v1 = *(void **)(a1 + 24);
  if ( !v1 )
    return 3221225756LL;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  *(_QWORD *)(a1 + 24) = 0LL;
  result = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
