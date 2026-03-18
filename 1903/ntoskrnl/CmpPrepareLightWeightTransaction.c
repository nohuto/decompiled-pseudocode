/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x1406E2234
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
 *     CmpCleanupLightWeightPrepare @ 0x1406E20D8 (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x1406E2310 (CmpProcessLightWeightUOW.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  _QWORD *v10; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR v12; // [rsp+58h] [rbp-40h] BYREF

  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
    TlgWrite(&stru_140425BC0, &unk_14038BAC2, 0LL, 0LL, 2u, &pData);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v10 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD **)(a1 + 16), &v10, 0);
      if ( !NextElement )
        break;
      v8 = CmpProcessLightWeightUOW(NextElement, 0LL, v6, a2);
      if ( v8 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1, v7, a2);
        goto LABEL_8;
      }
    }
  }
  v8 = 0;
LABEL_8:
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
    TlgWrite(&stru_140425BC0, &unk_14038BA91, 0LL, 0LL, 2u, &v12);
  return (unsigned int)v8;
}
