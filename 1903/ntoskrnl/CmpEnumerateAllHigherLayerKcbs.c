/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1406F7FA0
 * Callers:
 *     CmpCleanupDiscardReplaceContext @ 0x140638A70 (CmpCleanupDiscardReplaceContext.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406F7F50 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140832EBC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140833260 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408334DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140833600 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlock @ 0x14069B5DC (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C6B20 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(ULONG_PTR, __int64),
        unsigned int (__fastcall *a3)(ULONG_PTR, __int64, __int64),
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _UNKNOWN **result; // rax
  _QWORD *v8; // rdi
  bool v9; // bp
  unsigned int (__fastcall *v11)(ULONG_PTR, __int64, __int64); // r9
  _QWORD *v13; // rbx
  char v14; // r10
  ULONG_PTR v15; // rsi
  _QWORD *v16; // r15
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = *(_QWORD **)(a1 + 192);
  v9 = 0;
  v11 = a3;
  if ( v8 )
  {
    v13 = (_QWORD *)v8[4];
    result = (_UNKNOWN **)(v8 + 4);
    v14 = 0;
    if ( v13 != v8 + 4 )
    {
      while ( v13 == v8 + 4 )
      {
        v13 = v8;
        v14 = 1;
        v8 = (_QWORD *)v8[3];
LABEL_19:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 192) + 32LL);
        if ( v13 == result )
          return result;
      }
      v15 = v13[2];
      v16 = v13;
      if ( v14 )
      {
        v13 = (_QWORD *)*v13;
        if ( !v9 )
          v9 = v11(v15, a4, a5) == 1;
        if ( a6 )
          CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
        else
          CmpUnlockKcb(v15);
        if ( v9 )
        {
          v13 = v8;
          v14 = 1;
          v8 = (_QWORD *)v8[3];
          goto LABEL_18;
        }
      }
      else
      {
        if ( a6 )
        {
          CmpReferenceKeyControlBlock(v13[2]);
        }
        else if ( a7 )
        {
          CmpLockKcbExclusive(v13[2]);
        }
        else
        {
          ExAcquirePushLockSharedEx(v15 + 48, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 56));
        }
        if ( a2(v15, a5) == 1 )
        {
          v13 = (_QWORD *)v13[4];
          v8 = v16;
        }
        else
        {
          v13 = (_QWORD *)*v13;
          if ( a6 )
            CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
          else
            CmpUnlockKcb(v15);
        }
      }
      v14 = 0;
LABEL_18:
      v11 = a3;
      goto LABEL_19;
    }
  }
  return result;
}
