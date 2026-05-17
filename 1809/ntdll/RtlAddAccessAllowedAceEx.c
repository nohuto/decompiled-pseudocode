/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x18007E8F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAceEx(char *a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, a5, 0);
}
