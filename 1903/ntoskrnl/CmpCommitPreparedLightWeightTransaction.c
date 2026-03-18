/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x1406E2138
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  int v7; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v8; // [rsp+38h] [rbp-70h] BYREF
  __int64 v9; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-60h] BYREF
  int *v11; // [rsp+68h] [rbp-40h]
  int v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+74h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-30h] BYREF

  if ( a1 )
  {
    v2 = 0;
    if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
      TlgWrite(&stru_140425BC0, &unk_14038BB36, 0LL, 0LL, 2u, &pData);
    v9 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v8, 0);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v9, 1LL, a2);
      ++v2;
    }
    if ( stru_140425BC0.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_140425BC0, 1uLL) )
      {
        v13 = 0;
        v11 = &v7;
        v7 = v2;
        v12 = 4;
        TlgWrite(&stru_140425BC0, &unk_14038BAF3, 0LL, 0LL, 3u, &v10);
      }
    }
  }
}
