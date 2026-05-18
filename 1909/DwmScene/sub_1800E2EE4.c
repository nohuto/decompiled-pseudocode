/*
 * XREFs of sub_1800E2EE4 @ 0x1800E2EE4
 * Callers:
 *     sub_180078B68 @ 0x180078B68 (sub_180078B68.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2EE4(__int64 a1)
{
  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  *(_DWORD *)(a1 + 48) = 0;
  return a1;
}
