/*
 * XREFs of RtlAbortRXact @ 0x180082D40
 * Callers:
 *     RtlApplyRXactNoFlush @ 0x180082D10 (RtlApplyRXactNoFlush.c)
 *     RtlApplyRXact @ 0x18008C520 (RtlApplyRXact.c)
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlAbortRXact(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    return 3221225756LL;
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  *(_QWORD *)(a1 + 24) = 0LL;
  result = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
