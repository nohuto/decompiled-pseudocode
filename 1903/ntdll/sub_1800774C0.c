/*
 * XREFs of sub_1800774C0 @ 0x1800774C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_1800774C0(_QWORD *a1)
{
  sub_18003741C(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x200000, (__int64)a1);
}
