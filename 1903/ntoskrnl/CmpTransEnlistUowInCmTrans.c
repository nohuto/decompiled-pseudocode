/*
 * XREFs of CmpTransEnlistUowInCmTrans @ 0x14012E568
 * Callers:
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x140630518 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140719204 (CmpUndoDeleteKeyForTrans.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     LOCK_TRANSACTION_LIST @ 0x14062C2DC (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14062C308 (UNLOCK_TRANSACTION_LIST.c)
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
