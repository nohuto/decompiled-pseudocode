/*
 * XREFs of CmSnapshotRMTxArray @ 0x1406BABA4
 * Callers:
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140636B74 (CmListGetNextElement.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x1408310DC (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x140831534 (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2)
{
  _QWORD **v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  char *NextElement; // rax
  char *v7; // rax
  __int64 result; // rax
  bool v9; // zf
  unsigned int v10; // eax
  _QWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = (_QWORD **)(a1 + 16);
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v5 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v3, &v11, 0);
        if ( !NextElement )
          break;
        v9 = (*((_DWORD *)NextElement + 12) & 8) == 0;
        v10 = v5 + 1;
        if ( !v9 )
          v10 = v5;
        v5 = v10;
      }
      if ( v5 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      result = CmpReserveRollbackPacketSpace(a2, v5);
      if ( (int)result < 0 )
        return result;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v7 = CmListGetNextElement(v3, &v11, 0);
      if ( !v7 )
        break;
      if ( (*((_DWORD *)v7 + 12) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket(a2, *((_QWORD *)v7 + 9));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
