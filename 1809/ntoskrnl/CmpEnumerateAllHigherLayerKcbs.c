/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88
 * Callers:
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140582804 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1405AB51C (CmpCleanupDiscardReplaceContext.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FAC0C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1407FB030 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1407FB184 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FB39C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x1407FB4A8 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140804978 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 */

PVOID __fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(ULONG_PTR, __int64),
        unsigned int (__fastcall *a3)(ULONG_PTR, __int64),
        __int64 a4,
        char a5,
        char a6)
{
  unsigned int (__fastcall *v8)(ULONG_PTR, __int64); // r9
  _QWORD *v9; // rdi
  bool v10; // bp
  _QWORD *v11; // rbx
  char v12; // r8
  ULONG_PTR v13; // rsi
  _QWORD *v14; // r15
  PVOID v16[7]; // [rsp+20h] [rbp-38h] BYREF

  CmpInitializeThreadInfo(v16);
  v9 = *(_QWORD **)(a1 + 184);
  v10 = 0;
  if ( v9 )
  {
    v11 = (_QWORD *)v9[4];
    v12 = 0;
    if ( v11 != v9 + 4 )
    {
      while ( v11 == v9 + 4 )
      {
        v11 = v9;
        v12 = 1;
        v9 = (_QWORD *)v9[3];
LABEL_17:
        if ( v11 == (_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL) )
          return CmCleanupThreadInfo(v16);
      }
      v13 = v11[2];
      v14 = v11;
      if ( v12 )
      {
        v11 = (_QWORD *)*v11;
        if ( !v10 )
          v10 = v8(v13, a4) == 1;
        if ( a5 )
          CmpDereferenceKeyControlBlockWithLock(v13);
        else
          CmpUnlockKcb(v13);
        if ( v10 )
        {
          v11 = v9;
          v9 = (_QWORD *)v9[3];
          v12 = 1;
          goto LABEL_16;
        }
      }
      else
      {
        if ( a5 )
        {
          CmpReferenceKeyControlBlock(v11[2]);
        }
        else if ( a6 )
        {
          CmpLockKcbExclusive(v11[2]);
        }
        else
        {
          ExAcquirePushLockSharedEx(v13 + 40, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 48));
        }
        if ( a2(v13, a4) == 1 )
        {
          v11 = (_QWORD *)v11[4];
          v9 = v14;
        }
        else
        {
          v11 = (_QWORD *)*v11;
          if ( a5 )
            CmpDereferenceKeyControlBlockWithLock(v13);
          else
            CmpUnlockKcb(v13);
        }
      }
      v12 = 0;
LABEL_16:
      v8 = a3;
      goto LABEL_17;
    }
  }
  return CmCleanupThreadInfo(v16);
}
