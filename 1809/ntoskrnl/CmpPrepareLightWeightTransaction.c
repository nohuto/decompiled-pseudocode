/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x14069491C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406949F8 (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v4; // r8
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp-30h] BYREF

  if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 1uLL) )
    TlgWrite(&stru_140400AA0, &unk_14036D064, 0LL, 0LL, 2u, &pData);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v7 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v7, 0LL);
      if ( !NextElement )
        break;
      v5 = CmpProcessLightWeightUOW(NextElement, 0LL, v4);
      if ( v5 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1);
        goto LABEL_8;
      }
    }
  }
  v5 = 0;
LABEL_8:
  if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 1uLL) )
    TlgWrite(&stru_140400AA0, &unk_14036D033, 0LL, 0LL, 2u, &v9);
  return (unsigned int)v5;
}
