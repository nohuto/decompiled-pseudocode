/*
 * XREFs of CmpTransMgrCommit @ 0x140636410
 * Callers:
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 *     CmpRmUnDoPhase @ 0x140831EFC (CmpRmUnDoPhase.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x140636B74 (CmListGetNextElement.c)
 *     CmpTransMgrCommitUoW @ 0x140636C6C (CmpTransMgrCommitUoW.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     CmpTransMgrSyncHive @ 0x1406EE840 (CmpTransMgrSyncHive.c)
 *     CmpIsHiveBoundToTrans @ 0x1406EED68 (CmpIsHiveBoundToTrans.c)
 */

__int64 __fastcall CmpTransMgrCommit(__int64 a1, __int64 a2, int *a3)
{
  int v6; // esi
  char v7; // cl
  __int64 NextElement; // rax
  __int64 v9; // rbx
  __int64 i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-69h] BYREF
  __int64 v15; // [rsp+38h] [rbp-61h] BYREF
  __int64 v16; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v17[48]; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+78h] [rbp-21h] BYREF
  int *v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A4h] [rbp+Bh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp+Fh] BYREF

  v15 = 0LL;
  v6 = 0;
  memset(v17, 0, sizeof(v17));
  *a3 = 0;
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
    TlgWrite(&stru_140425BC0, &unk_14038C22D, 0LL, 0LL, 2u, &pData);
  v7 = dword_140509848;
  if ( dword_140509848 )
  {
    ++dword_140509848;
    if ( (v7 & 3) != 0 )
      return 3221225626LL;
  }
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
    return 0LL;
  v16 = MEMORY[0xFFFFF78000000014];
  CmpAttachToRegistryProcess((__int64)v17);
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v15, 0LL);
    v9 = NextElement;
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4192LL) == a1
      && (*(_DWORD *)(NextElement + 64) & 1) == 0 )
    {
      ++*a3;
      if ( v6 >= 0 )
      {
        v6 = CmpTransMgrCommitUoW(NextElement, &v16);
        if ( v6 >= 0 )
          *(_DWORD *)(v9 + 64) |= 1u;
      }
    }
  }
  if ( v6 >= 0 )
  {
    CmpLockRegistry();
    for ( i = CmpGetNextActiveHive(0LL); i; i = CmpGetNextActiveHive(i) )
    {
      if ( *(_QWORD *)(i + 4192) == a1
        && (*(_DWORD *)(i + 160) & 2) == 0
        && (unsigned __int8)CmpIsHiveBoundToTrans(i, a2) == 1 )
      {
        CmpUnlockRegistry();
        if ( (int)CmpTransMgrSyncHive(i) < 0 )
          v6 = -1073741670;
        CmpLockRegistry();
      }
    }
    CmpUnlockRegistry();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a2 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
  if ( stru_140425BC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425BC0, 1uLL) )
  {
    v13 = *a3;
    v21 = 0;
    v14 = v13;
    v19 = &v14;
    v20 = 4;
    TlgWrite(&stru_140425BC0, &unk_14038C200, 0LL, 0LL, 3u, &v18);
  }
  return (unsigned int)v6;
}
