/*
 * XREFs of sub_180037220 @ 0x180037220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 */

__int64 __fastcall sub_180037220(__int64 a1)
{
  sub_18003741C(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_180166080 + 0x200000), a1);
}
