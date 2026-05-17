/*
 * XREFs of sub_180082BF0 @ 0x180082BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180082BF0(_QWORD *a1)
{
  __int64 v2; // rdi

  v2 = (__int64)(a1 - 9);
  sub_180031B40(a1[18], 0xFFFFFFFF);
  *(_QWORD *)(v2 + 56) = 0LL;
  sub_18003741C(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x80000, v2);
}
