/*
 * XREFs of sub_18007D710 @ 0x18007D710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18007D710(_QWORD *a1)
{
  sub_180031B40(a1[18], 0xFFFFFFFF);
  a1[32] = 0LL;
  sub_18003741C(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x40000, (__int64)a1);
}
