/*
 * XREFs of sub_1800E2DD4 @ 0x1800E2DD4
 * Callers:
 *     sub_180078A58 @ 0x180078A58 (sub_180078A58.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2DD4(__int64 a1)
{
  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
