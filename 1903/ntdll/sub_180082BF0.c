/*
 * XREFs of sub_180082BF0 @ 0x180082BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_180082BF0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 - 9;
  sub_180031B40(a1[18], 0xFFFFFFFF);
  v2[7] = 0LL;
  sub_18003741C(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x80000, v2);
}
