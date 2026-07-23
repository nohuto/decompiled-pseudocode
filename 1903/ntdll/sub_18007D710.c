/*
 * XREFs of sub_18007D710 @ 0x18007D710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall sub_18007D710(_QWORD *BaseAddress)
{
  sub_180031B40(BaseAddress[18], 0xFFFFFFFF);
  BaseAddress[32] = 0LL;
  sub_18003741C(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x40000, BaseAddress);
}
