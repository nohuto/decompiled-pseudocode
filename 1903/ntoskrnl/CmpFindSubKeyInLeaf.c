/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x140838094
 * Callers:
 *     CmpRemoveSubKeyFromList @ 0x1406D69DC (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406536C0 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(__int64 a1, __int64 a2, unsigned __int16 *a3, _DWORD *a4)
{
  unsigned int v5[6]; // [rsp+30h] [rbp-18h] BYREF

  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, (int *)v5);
  return v5[0];
}
