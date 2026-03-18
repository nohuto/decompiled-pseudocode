/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x14082B534
 * Callers:
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14063A8DC (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
