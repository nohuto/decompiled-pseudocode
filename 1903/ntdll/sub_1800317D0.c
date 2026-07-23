/*
 * XREFs of sub_1800317D0 @ 0x1800317D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031A74 @ 0x180031A74 (sub_180031A74.c)
 */

LOGICAL __fastcall sub_1800317D0(void *a1)
{
  sub_180031A74();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x100000, a1);
}
