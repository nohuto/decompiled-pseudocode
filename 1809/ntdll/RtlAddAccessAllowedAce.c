/*
 * XREFs of RtlAddAccessAllowedAce @ 0x180042830
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(char *a1, unsigned int a2, int a3, __int64 a4)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, a4, 0);
}
