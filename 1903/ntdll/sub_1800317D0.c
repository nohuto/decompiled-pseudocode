/*
 * XREFs of sub_1800317D0 @ 0x1800317D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031A74 @ 0x180031A74 (sub_180031A74.c)
 */

__int64 __fastcall sub_1800317D0(__int64 a1)
{
  sub_180031A74();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_180166080 + 0x100000), a1);
}
