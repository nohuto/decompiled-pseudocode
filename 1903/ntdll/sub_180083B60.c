/*
 * XREFs of sub_180083B60 @ 0x180083B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 */

LOGICAL __fastcall sub_180083B60(_QWORD *a1)
{
  sub_180031B40(a1[18], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  sub_18003741C(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 3407872, a1 - 9);
}
