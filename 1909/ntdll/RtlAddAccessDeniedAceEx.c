/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x1800852C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAceEx(char *a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, a5, 1);
}
