/*
 * XREFs of CmpTransMgrFreeVolatileData @ 0x140631678
 * Callers:
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E1F44 (CmpCleanupLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1406EEA7C (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x1408328AC (CmpRmUnDoPhase.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveSecurityCellList @ 0x14012F9D0 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpRebuildKcbCache @ 0x1406315E0 (CmpRebuildKcbCache.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmpRundownUnitOfWork @ 0x1406319AC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140631C1C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063ABE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140656728 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083CE40 (CmpFreeUnitOfWork.c)
 */

void __fastcall CmpTransMgrFreeVolatileData(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  ULONG_PTR v7; // rdi
  int v8; // eax
  ULONG_PTR v9; // rbx
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r8
  int v16; // eax
  ULONG_PTR v17; // rdx
  ULONG_PTR v18; // rcx
  _QWORD *v19[2]; // [rsp+20h] [rbp-10h] BYREF
  int v20; // [rsp+60h] [rbp+30h] BYREF
  int v21; // [rsp+64h] [rbp+34h]

  v19[0] = 0LL;
  v19[1] = 0LL;
  CmpInitializeDelayDerefContext(v19);
  while ( *(_QWORD *)(a1 + 16) != a1 + 16 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( !*(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL) )
      goto LABEL_9;
    CmpLockRegistryExclusive(v5, v4, v6);
    v8 = *(_DWORD *)(v7 + 68);
    if ( !v8 )
    {
      v11 = *(unsigned int *)(v7 + 88);
      if ( (unsigned int)(v11 - 1) <= 0xFFFFFFFD )
        CmpFreeKeyByCell(*(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL), v11, 0);
      goto LABEL_8;
    }
    if ( v8 > 3 )
    {
      if ( v8 > 5 )
      {
        if ( v8 != 9 )
        {
          if ( v8 != 12 )
            goto LABEL_8;
          v17 = *(unsigned int *)(v7 + 96);
          if ( (unsigned int)(v17 - 1) > 0xFFFFFFFD )
            goto LABEL_8;
          v18 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL);
LABEL_32:
          HvFreeCell(v18, v17);
          goto LABEL_8;
        }
        v20 = -1;
        v12 = *(_DWORD *)(v7 + 96);
        v21 = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL);
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, v12, &v20);
        if ( v14 )
        {
          LOBYTE(v15) = 1;
          if ( !(unsigned __int8)HvMarkCellDirty(v13, v12, v15) )
            goto LABEL_36;
          v16 = *(_DWORD *)(v14 + 12);
          if ( v16 != 1 )
          {
            *(_DWORD *)(v14 + 12) = v16 - 1;
LABEL_36:
            (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v20);
            goto LABEL_8;
          }
          (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v20);
          CmpRemoveSecurityCellList(v13, v12);
          v17 = v12;
          v18 = v13;
          goto LABEL_32;
        }
      }
      else
      {
        CmpFreeValue(*(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL), *(unsigned int *)(v7 + 92));
      }
    }
LABEL_8:
    CmpUnlockRegistry();
LABEL_9:
    CmpLockRegistry();
    v9 = *(_QWORD *)(v7 + 48);
    CmpLockHashEntryExclusiveByKcb(v9);
    CmpLockKcbExclusive(v9);
    if ( *(_QWORD *)(v9 + 288) == a1 )
    {
      v10 = *(unsigned int *)(v9 + 284);
      if ( (_DWORD)v10 != -1 )
      {
        HvFreeCell(*(_QWORD *)(v9 + 32), v10);
        *(_DWORD *)(v9 + 280) = 0;
        *(_DWORD *)(v9 + 284) = -1;
      }
      *(_QWORD *)(v9 + 288) = 0LL;
    }
    if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v9 + 240), a1) )
    {
      if ( a2 == 8 )
      {
        CmpFlushNotifiesOnKeyBodyList(v9, 8LL, v19);
        *(_WORD *)(v9 + 8) |= 0x20u;
        CmpMarkKeyUnbacked(v9, v19);
        if ( (*(_DWORD *)(v9 + 8) & 0x20000) == 0 )
          CmpDiscardKcb(v9);
      }
      *(_QWORD *)(v9 + 240) = 0LL;
    }
    if ( *(_DWORD *)(v9 + 40) != -1 )
    {
      if ( *(_QWORD *)(v9 + 32) )
        CmpRebuildKcbCache(v9, (__int64)v19);
    }
    CmpReferenceKeyControlBlockUnsafe(v9);
    CmpRundownUnitOfWork(v7);
    CmpFreeUnitOfWork(v7);
    CmpUnlockKcb(v9);
    CmpUnlockHashEntryByKcb(v9);
    CmpDereferenceKeyControlBlock(v9);
    CmpDrainDelayDerefContext(v19);
    CmpUnlockRegistry();
  }
}
