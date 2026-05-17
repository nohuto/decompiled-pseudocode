/*
 * XREFs of RtlAddAccessDeniedAce @ 0x18008BF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAce(char *a1, unsigned int a2, int a3, __int64 a4)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, a4, 1);
}
