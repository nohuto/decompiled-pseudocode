/*
 * XREFs of CmpTransMgrPrepare @ 0x1406FE07C
 * Callers:
 *     CmKtmNotification @ 0x140695470 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x1407FA5A0 (CmpRmUnDoPhase.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpGetNextActiveHive @ 0x1405B2474 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmListGetNextElement @ 0x140695A80 (CmListGetNextElement.c)
 *     CmpTransMgrSyncHive @ 0x1406FE3B4 (CmpTransMgrSyncHive.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bp
  char *NextElement; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  __int64 *i; // rax
  struct _EX_RUNDOWN_REF *v13; // rsi
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // edi
  ULONG_PTR v17; // rsi
  struct _EX_RUNDOWN_REF *v19; // rbx
  struct _EX_RUNDOWN_REF *v20; // rcx
  volatile signed __int64 *v21; // rdi
  char v22; // r15
  _QWORD *v23; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v24[48]; // [rsp+28h] [rbp-70h] BYREF

  memset(v24, 0, sizeof(v24));
  *a4 = 0;
  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v24);
  CmpLockRegistry();
  v23 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(a2 + 16), &v23, 0);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NextElement + 6) + 24LL) + 4192LL) == a1 )
      ++*a3;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v11 )
  {
    v19 = v11 + 204;
    if ( ExAcquireRundownProtection_0(v11 + 204) )
    {
      CmpUnlockRegistry();
      v16 = CmpTransMgrSyncHive((ULONG_PTR)v11);
      v20 = v19;
LABEL_26:
      ExReleaseRundownProtection_0(v20);
      goto LABEL_22;
    }
    v16 = 0;
    goto LABEL_21;
  }
  for ( i = CmpGetNextActiveHive(0LL); ; i = CmpGetNextActiveHive(v13) )
  {
    v13 = (struct _EX_RUNDOWN_REF *)i;
    if ( !i )
      break;
    if ( i[524] == a1 && (i[20] & 2) == 0 )
    {
      v14 = *(_DWORD *)(a2 + 112);
      if ( v14 )
      {
        v15 = 0LL;
        while ( i != *(__int64 **)(a2 + 8 * v15 + 120) )
        {
          v15 = (unsigned int)(v15 + 1);
          if ( (unsigned int)v15 >= v14 )
            goto LABEL_10;
        }
      }
      CmpUnlockRegistry();
      v16 = CmpTransMgrSyncHive((ULONG_PTR)v13);
      if ( v16 < 0 )
      {
        v20 = v13 + 204;
        goto LABEL_26;
      }
      CmpLockRegistry();
    }
LABEL_10:
    ;
  }
  v17 = qword_1403FFFF0;
  if ( (*(_DWORD *)(*(_QWORD *)(qword_1403FFFF0 + 64) + 144LL) & 1) != 0 )
    goto LABEL_20;
  v21 = (volatile signed __int64 *)(qword_1403FFFF0 + 72);
  ExAcquirePushLockExclusiveEx(qword_1403FFFF0 + 72, 0LL);
  ExAcquirePushLockExclusiveEx(v17 + 80, 0LL);
  v22 = HvpMarkDirty(v17, 0, 32, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 80));
  KeAbPostRelease(v17 + 80);
  if ( v22 )
  {
    *(_DWORD *)(*(_QWORD *)(v17 + 64) + 144LL) |= 1u;
    if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 72));
    KeAbPostRelease(v17 + 72);
    CmpUnlockRegistry();
    v9 = 0;
    if ( (int)CmpFlushHive(v17, 0) < 0 )
    {
      v16 = -1073741670;
      goto LABEL_22;
    }
LABEL_20:
    v16 = 0;
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 72));
  KeAbPostRelease(v17 + 72);
  v16 = -1073741670;
LABEL_21:
  CmpUnlockRegistry();
LABEL_22:
  KiUnstackDetachProcess((__int64)v24, 0LL);
  return (unsigned int)v16;
}
