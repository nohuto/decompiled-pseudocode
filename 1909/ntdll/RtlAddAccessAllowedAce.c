/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1800127B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(int a1, int a2, int a3, __int64 a4)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, a4, 0);
}
