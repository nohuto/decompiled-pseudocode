/*
 * XREFs of CmpRunDownCmRM @ 0x14069B940
 * Callers:
 *     CmShutdownCmRM @ 0x14069B8F8 (CmShutdownCmRM.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     LOCK_TRANSACTION_LIST @ 0x14062C2DC (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14062C308 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpDelayFreeCmRm @ 0x14069BA64 (CmpDelayFreeCmRm.c)
 *     UNLOCK_CM_RM_LIST @ 0x14069BAF0 (UNLOCK_CM_RM_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x14069BB1C (LOCK_CM_RM_LIST.c)
 */

void __fastcall CmpRunDownCmRM(__int64 a1, char a2)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 **v14; // rax
  __int64 **v15; // rax
  _QWORD **v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-8h]

  if ( a1 && !*(_DWORD *)(a1 + 64) )
  {
    v17 = (__int64 *)&v16;
    v16 = &v16;
    LOCK_TRANSACTION_LIST();
    v4 = (__int64 *)CmpLazyCommitListHead;
    while ( v4 != &CmpLazyCommitListHead )
    {
      v12 = v4;
      v13 = v4;
      v4 = (__int64 *)*v4;
      if ( v12[4] == a1 )
      {
        if ( (__int64 *)v4[1] != v12 )
          goto LABEL_26;
        v14 = (__int64 **)v12[1];
        if ( *v14 != v13 )
          goto LABEL_26;
        *v14 = v4;
        v4[1] = (__int64)v14;
        v15 = (__int64 **)v17;
        if ( (_QWORD ***)*v17 != &v16 )
          goto LABEL_26;
        v13[1] = (__int64)v17;
        *v13 = (__int64)&v16;
        *v15 = v13;
        v17 = v13;
      }
    }
    UNLOCK_TRANSACTION_LIST();
    while ( 1 )
    {
      v5 = v16;
      if ( v16[1] != &v16 )
        goto LABEL_26;
      v6 = (__int64)*v16;
      if ( (_QWORD **)(*v16)[1] != v16 )
        goto LABEL_26;
      v16 = (_QWORD **)*v16;
      *(_QWORD *)(v6 + 8) = &v16;
      if ( v5 == &v16 )
        break;
      CmpCleanupTransactionState(a1, v5 - 4, 4, 0);
    }
    LOCK_CM_RM_LIST();
    *(_DWORD *)(a1 + 104) |= 8u;
    v7 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *(_QWORD **)(a1 + 8), *v8 != a1) )
LABEL_26:
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 4192) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    UNLOCK_CM_RM_LIST();
    v10 = *(void **)(a1 + 56);
    if ( v10 )
    {
      ObDereferenceObjectDeferDelete(v10);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v11 = *(void **)(a1 + 40);
    if ( v11 )
    {
      ObDereferenceObjectDeferDelete(v11);
      *(_QWORD *)(a1 + 40) = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
