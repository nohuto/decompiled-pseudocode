/*
 * XREFs of CmpTransMgrPrepare @ 0x14063302C
 * Callers:
 *     CmKtmNotification @ 0x1406999A0 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x1408328AC (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     CmpTransMgrSyncHive @ 0x1406ED340 (CmpTransMgrSyncHive.c)
 *     CmpIsHiveBoundToTrans @ 0x1406ED9F8 (CmpIsHiveBoundToTrans.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bp
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v14; // rsi
  int v15; // edi
  ULONG_PTR v16; // rsi
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct _EX_RUNDOWN_REF *v19; // rcx
  volatile signed __int64 *v20; // rdi
  char v21; // r15
  __int64 v22; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v23[48]; // [rsp+28h] [rbp-70h] BYREF

  memset(v23, 0, sizeof(v23));
  *a4 = 0;
  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess((__int64)v23);
  CmpLockRegistry();
  v22 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v22, 0LL);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4192LL) == a1 )
      ++*a3;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v11 )
  {
    v18 = v11 + 204;
    if ( ExAcquireRundownProtection_0(v11 + 204) )
    {
      CmpUnlockRegistry();
      v15 = CmpTransMgrSyncHive(v11);
      v19 = v18;
LABEL_22:
      ExReleaseRundownProtection_0(v19);
      goto LABEL_18;
    }
    v15 = 0;
    goto LABEL_17;
  }
  for ( i = 0LL; ; i = v14 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v14 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( *(_QWORD *)(NextActiveHive + 4192) == a1
      && (*(_DWORD *)(NextActiveHive + 160) & 2) == 0
      && (unsigned __int8)CmpIsHiveBoundToTrans(NextActiveHive, a2) )
    {
      CmpUnlockRegistry();
      v15 = CmpTransMgrSyncHive(v14);
      if ( v15 < 0 )
      {
        v19 = v14 + 204;
        goto LABEL_22;
      }
      CmpLockRegistry();
    }
  }
  v16 = qword_140424FF0;
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140424FF0 + 64) + 144LL) & 1) != 0 )
    goto LABEL_16;
  v20 = (volatile signed __int64 *)(qword_140424FF0 + 72);
  ExAcquirePushLockExclusiveEx(qword_140424FF0 + 72, 0LL);
  ExAcquirePushLockExclusiveEx(v16 + 80, 0LL);
  v21 = HvpMarkDirty(v16, 0, 0x20u, 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 80));
  KeAbPostRelease(v16 + 80);
  if ( v21 )
  {
    *(_DWORD *)(*(_QWORD *)(v16 + 64) + 144LL) |= 1u;
    if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 72));
    KeAbPostRelease(v16 + 72);
    CmpUnlockRegistry();
    v9 = 0;
    if ( (int)CmpFlushHive(v16) < 0 )
    {
      v15 = -1073741670;
      goto LABEL_18;
    }
LABEL_16:
    v15 = 0;
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 72));
  KeAbPostRelease(v16 + 72);
  v15 = -1073741670;
LABEL_17:
  CmpUnlockRegistry();
LABEL_18:
  KiUnstackDetachProcess((struct _KTHREAD *)v23, 0);
  return (unsigned int)v15;
}
