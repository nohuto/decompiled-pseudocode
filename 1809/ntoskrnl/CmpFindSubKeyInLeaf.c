/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x1407FFE88
 * Callers:
 *     CmpRemoveSubKeyFromList @ 0x1405AF780 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(__int64 a1, __int16 *a2, unsigned __int16 *a3, unsigned __int16 *a4, _DWORD *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, a5, (int *)v6);
  return v6[0];
}
