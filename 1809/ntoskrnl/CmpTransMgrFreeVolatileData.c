/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x1405AA000
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x140694BFC (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpRmUnDoPhase @ 0x1407FA5A0 (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x140138058 (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpRebuildKcbCache @ 0x1405A9F78 (CmpRebuildKcbCache.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14071FC9C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407200FC (CmpInvalidateSubtree.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407FB184 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407FB4A8 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(ULONG_PTR BugCheckParameter2, int a2)
{
  _QWORD *v3; // r15
  ULONG_PTR v5; // rdi
  int v6; // eax
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // rcx
  unsigned int v9; // ebp
  ULONG_PTR v10; // rbx
  __int64 v11; // r14
  int v12; // eax
  ULONG_PTR v13; // rbx
  ULONG_PTR v14; // rdx
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v3 = (_QWORD *)(BugCheckParameter2 + 16);
  while ( (_QWORD *)*v3 != v3 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) )
      goto LABEL_22;
    CmpLockRegistryExclusive();
    v6 = *(_DWORD *)(v5 + 68);
    if ( !v6 )
    {
      if ( (unsigned int)(*(_DWORD *)(v5 + 88) - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL));
      goto LABEL_21;
    }
    if ( v6 > 3 )
    {
      if ( v6 <= 5 )
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL), *(unsigned int *)(v5 + 92));
        goto LABEL_21;
      }
      if ( v6 == 9 )
      {
        v15 = -1;
        v9 = *(_DWORD *)(v5 + 96);
        v16 = 0;
        v10 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
        v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v10 + 8))(v10, v9, &v15);
        if ( !v11 )
          goto LABEL_21;
        if ( !(unsigned __int8)HvpMarkCellDirty(v10, v9) )
          goto LABEL_17;
        v12 = *(_DWORD *)(v11 + 12);
        if ( v12 != 1 )
        {
          *(_DWORD *)(v11 + 12) = v12 - 1;
LABEL_17:
          (*(void (__fastcall **)(ULONG_PTR, int *))(v10 + 16))(v10, &v15);
          goto LABEL_21;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(v10 + 16))(v10, &v15);
        CmpRemoveSecurityCellList(v10, v9);
        v7 = v9;
        v8 = v10;
      }
      else
      {
        if ( v6 != 12 )
          goto LABEL_21;
        v7 = *(unsigned int *)(v5 + 96);
        if ( (unsigned int)(v7 - 1) > 0xFFFFFFFD )
          goto LABEL_21;
        v8 = *(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL);
      }
      HvFreeCell(v8, v7);
    }
LABEL_21:
    CmpUnlockRegistry();
LABEL_22:
    CmpLockRegistryExclusive();
    v13 = *(_QWORD *)(v5 + 48);
    if ( *(_QWORD *)(v13 + 280) == BugCheckParameter2 )
    {
      v14 = *(unsigned int *)(v13 + 276);
      if ( (_DWORD)v14 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v13 + 24), v14);
        *(_DWORD *)(v13 + 272) = 0;
        *(_DWORD *)(v13 + 276) = -1;
      }
      *(_QWORD *)(v13 + 280) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v13 + 232), BugCheckParameter2) && !*(_DWORD *)(v5 + 68) )
    {
      if ( a2 == 8 )
      {
        if ( (int)CmpPrepareToInvalidateAllHigherLayerKcbs(v13, 6LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10000uLL);
        if ( (int)CmpPrepareForSubtreeInvalidation(v13, 4LL, 0LL) < 0 )
          KeBugCheckEx(0x51u, 0x33uLL, BugCheckParameter2, v13, 0x10100uLL);
        CmpInvalidateAllHigherLayerKcbs(v13, 8LL, 6LL);
        CmpInvalidateSubtree(v13, 8LL, 4LL, 0LL);
        CmpFlushNotifiesOnKeyBodyList(v13, 8LL);
        *(_WORD *)(v13 + 4) |= 0x20u;
        CmpMarkKeyUnbacked(v13);
        if ( (*(_DWORD *)(v13 + 4) & 0x20000) == 0 )
          CmpDiscardKcb(v13);
      }
      *(_QWORD *)(v13 + 232) = 0LL;
    }
    if ( *(_DWORD *)(v13 + 32) != -1 )
    {
      if ( *(_QWORD *)(v13 + 24) )
        CmpRebuildKcbCache(v13);
    }
    CmpRundownUnitOfWork(v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
    CmpUnlockRegistry();
  }
}
