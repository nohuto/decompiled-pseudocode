/*
 * XREFs of CmpCommitLightWeightTransaction @ 0x1406E33B4
 * Callers:
 *     NtCommitRegistryTransaction @ 0x1406E32D0 (NtCommitRegistryTransaction.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpAbortLightWeightTransaction @ 0x1406E3518 (CmpAbortLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406E35C4 (CmpCleanupLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406E3758 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406E37B8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E38B4 (CmpPrepareLightWeightTransaction.c)
 */

__int64 __fastcall CmpCommitLightWeightTransaction(__int64 a1)
{
  char v2; // bp
  signed __int32 v3; // eax
  signed __int32 v4; // r15d
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v13[0] = 0LL;
  v2 = 0;
  v13[1] = 0LL;
  CmpInitializeDelayDerefContext(v13);
  v4 = v3 + 1;
  v6 = v3;
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v3 + 1, v3);
  if ( v6 == v5 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      v2 = v4;
      CmpLockRegistryExclusive();
    }
    v9 = CmpPrepareLightWeightTransaction(v7, v13);
    if ( v9 < 0 )
    {
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, v4) )
      {
        CmpAbortLightWeightTransaction(a1);
      }
      else
      {
        _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
        _InterlockedOr(v12, 0);
        if ( *(_QWORD *)(a1 + 8) )
          ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      }
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 2, v4) == 4 )
    {
      CmpCleanupLightWeightPrepare(v7, v8, v13);
      _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 4);
      _InterlockedOr(v12, 0);
      if ( *(_QWORD *)(a1 + 8) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 8), 0LL);
      v9 = -1072103421;
    }
    else
    {
      CmpCommitPreparedLightWeightTransaction(v7, v13);
      if ( v2 )
      {
        CmpCleanupLightWeightPrepare(v7, v10, v13);
        CmpDrainDelayDerefContext(v13);
        CmpUnlockRegistry();
        v2 = 0;
        CmpCleanupLightWeightTransaction(v7, 4LL);
      }
      v9 = 0;
    }
    if ( v2 )
    {
      CmpDrainDelayDerefContext(v13);
      CmpUnlockRegistry();
    }
  }
  else
  {
    v9 = -1072103421;
    if ( v5 == 3 )
      return (unsigned int)-1072103403;
  }
  return (unsigned int)v9;
}
