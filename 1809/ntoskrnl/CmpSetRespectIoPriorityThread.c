/*
 * XREFs of CmpSetRespectIoPriorityThread @ 0x140012FC4
 * Callers:
 *     CmpDoFileWrite @ 0x1405B4A60 (CmpDoFileWrite.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpSetRespectIoPriorityThread(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1748) & 0x80) != 0;
  *(_DWORD *)(a1 + 1748) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1748) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
