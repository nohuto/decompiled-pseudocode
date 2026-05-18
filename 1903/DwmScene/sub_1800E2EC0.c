/*
 * XREFs of sub_1800E2EC0 @ 0x1800E2EC0
 * Callers:
 *     sub_1800C6D70 @ 0x1800C6D70 (sub_1800C6D70.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E2EC0(__int64 a1)
{
  bool result; // al

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  result = *(_DWORD *)(a1 + 40) == 0;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
