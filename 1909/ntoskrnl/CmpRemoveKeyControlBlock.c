/*
 * XREFs of CmpRemoveKeyControlBlock @ 0x14082AC34
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 * Callees:
 *     CmpRemoveKeyHash @ 0x14063D96C (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpRemoveKeyControlBlock(__int64 a1)
{
  return CmpRemoveKeyHash(*(_QWORD *)(a1 + 32), (_DWORD *)(a1 + 16));
}
