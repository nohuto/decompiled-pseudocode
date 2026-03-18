/*
 * XREFs of CmpTransEnlistUowInCmTrans @ 0x14012EEB8
 * Callers:
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14071AFF4 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     LOCK_TRANSACTION_LIST @ 0x14063012C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140630158 (UNLOCK_TRANSACTION_LIST.c)
 */

__int64 __fastcall CmpTransEnlistUowInCmTrans(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  LOCK_TRANSACTION_LIST();
  if ( (*(_DWORD *)(a2 + 48) & 7) != 0 )
  {
    UNLOCK_TRANSACTION_LIST();
    return 3222863874LL;
  }
  else
  {
    v4 = *(_QWORD **)(a2 + 24);
    if ( *v4 != a2 + 16 )
      __fastfail(3u);
    *a1 = a2 + 16;
    a1[1] = v4;
    *v4 = a1;
    *(_QWORD *)(a2 + 24) = a1;
    UNLOCK_TRANSACTION_LIST();
    result = 0LL;
    a1[7] = a2;
  }
  return result;
}
