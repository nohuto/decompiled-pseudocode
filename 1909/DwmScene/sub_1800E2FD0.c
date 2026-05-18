/*
 * XREFs of sub_1800E2FD0 @ 0x1800E2FD0
 * Callers:
 *     sub_1800C6E80 @ 0x1800C6E80 (sub_1800C6E80.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800E2FD0(__int64 a1)
{
  bool result; // al

  while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 48), 0) )
    ;
  result = *(_DWORD *)(a1 + 40) == 0;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}
