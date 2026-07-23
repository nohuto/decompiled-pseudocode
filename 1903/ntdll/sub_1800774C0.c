/*
 * XREFs of sub_1800774C0 @ 0x1800774C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_1800774C0(_QWORD *BaseAddress)
{
  sub_18003741C(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x200000, BaseAddress);
}
