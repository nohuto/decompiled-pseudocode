/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x140694830
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140694704 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  int v5; // [rsp+30h] [rbp-78h] BYREF
  __int64 v6; // [rsp+38h] [rbp-70h] BYREF
  __int64 v7; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-60h] BYREF
  int *v9; // [rsp+68h] [rbp-40h]
  int v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+74h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-30h] BYREF

  if ( a1 )
  {
    v1 = 0;
    if ( stru_140400AA0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140400AA0, 1uLL) )
      TlgWrite(&stru_140400AA0, &unk_14036D0D8, 0LL, 0LL, 2u, &pData);
    v7 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v6 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v6, 0LL);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v7, 1LL);
      ++v1;
    }
    if ( stru_140400AA0.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_140400AA0, 1uLL) )
      {
        v11 = 0;
        v9 = &v5;
        v5 = v1;
        v10 = 4;
        TlgWrite(&stru_140400AA0, &unk_14036D095, 0LL, 0LL, 3u, &v8);
      }
    }
  }
}
