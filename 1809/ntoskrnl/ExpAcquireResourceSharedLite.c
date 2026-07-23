/*
 * XREFs of ExpAcquireResourceSharedLite @ 0x140050960
 * Callers:
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6D60 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400A6F90 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400B9F90 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14010B1F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x1400B6D00 (PsGetBaseIoPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x1400CEAA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x1401082F0 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x140108440 (ExpFindCurrentThread.c)
 *     ExpExpandResourceOwnerTable @ 0x140108584 (ExpExpandResourceOwnerTable.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     ExpGetThreadResourceHint @ 0x140114410 (ExpGetThreadResourceHint.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PerfLogExecutiveResourceAcquire @ 0x140313670 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140313B38 (PerfLogExecutiveResourceWait.c)
 */

__int64 __fastcall ExpAcquireResourceSharedLite(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // si
  unsigned int SpareByte0; // r15d
  int v7; // eax
  unsigned __int8 v8; // di
  int ThreadResourceHint; // eax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edi
  int v16; // eax
  __int64 v17; // rax
  int BaseIoPriorityThread; // eax
  int v19; // edx
  struct _KTHREAD *v20; // r8
  int v21; // ecx
  int v22; // edx
  __int64 v23; // r8
  _QWORD *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v26[7]; // [rsp+48h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x638Cu);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &LockHandle);
  SpareByte0 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a1 + 64) )
      {
        v7 = *(_DWORD *)(a1 + 56) & 7;
        *(_WORD *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 64) = 1;
        *(_DWORD *)(a1 + 56) = v7 | 8;
        v8 = 1;
        *(_QWORD *)(a1 + 48) = CurrentThread;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        __incgsdword(0x6394u);
        __incgsdword(0x6364u);
        if ( v5 )
          PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
        return v8;
      }
      if ( *(char *)(a1 + 26) < 0 )
        break;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      v11 = ExpFindCurrentThread(
              a1,
              (_DWORD)CurrentThread,
              (unsigned int)&LockHandle,
              1,
              *(_DWORD *)(a1 + 76) != 0,
              ThreadResourceHint);
      if ( v11 )
        goto LABEL_8;
    }
    if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
    {
      v14 = *(_DWORD *)(a1 + 56) + 8;
      *(_DWORD *)(a1 + 56) = v14;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x6390u);
      __incgsdword(0x6364u);
      if ( v5 )
        PerfLogExecutiveResourceAcquire(65585LL, a1, v14 >> 3, *(unsigned int *)(a1 + 68));
      return 1;
    }
    v23 = *(_QWORD *)(a1 + 16);
    if ( v23 )
      break;
LABEL_43:
    ExpExpandResourceOwnerTable(a1, &LockHandle);
  }
  v11 = v23 + 16;
  while ( *(_QWORD *)v11 )
  {
    v11 += 16LL;
    if ( v11 == v23 + 16LL * *(unsigned int *)(v23 + 8) )
      goto LABEL_43;
  }
  KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v11 - v23) >> 4;
LABEL_8:
  if ( *(struct _KTHREAD **)v11 == CurrentThread )
  {
    v15 = *(_DWORD *)(v11 + 8) + 8;
    *(_DWORD *)(v11 + 8) = v15;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    __incgsdword(0x6398u);
    __incgsdword(0x6364u);
    if ( !v5 )
      return 1;
    PerfLogExecutiveResourceAcquire(65617LL, a1, v15 >> 3, *(unsigned int *)(a1 + 68));
    return 1;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 64);
    if ( !v12 || *(char *)(a1 + 26) >= 0 && !*(_DWORD *)(a1 + 76) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = v12 + 1;
      v13 = *(_DWORD *)(v11 + 8) & 7;
      *(_QWORD *)v11 = CurrentThread;
      *(_DWORD *)(v11 + 8) = v13 | 8;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_13;
    }
    if ( a2 )
    {
      v16 = *(_DWORD *)(v11 + 8);
      *(_QWORD *)v11 = CurrentThread;
      *(_DWORD *)(v11 + 8) = v16 & 7 | 8;
      ++*(_DWORD *)(a1 + 72);
      memset(v26, 0, 0x30uLL);
      v26[2] = CurrentThread;
      v26[5] = &v26[4];
      v26[4] = &v26[4];
      v17 = *(_QWORD *)(a1 + 32);
      LOWORD(v26[3]) = 1;
      BYTE2(v26[3]) = 6;
      HIDWORD(v26[3]) = 0;
      if ( v17 )
      {
        v24 = *(_QWORD **)(v17 + 8);
        if ( *v24 != v17 )
          __fastfail(3u);
        v26[1] = *(_QWORD *)(v17 + 8);
        v26[0] = v17;
        *v24 = v26;
        *(_QWORD *)(v17 + 8) = v26;
      }
      else
      {
        v26[1] = v26;
        v26[0] = v26;
      }
      *(_QWORD *)(a1 + 32) = v26;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x639Cu);
      if ( v5 )
        PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
      BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread());
      if ( (BaseIoPriorityThread < 2 && v20 == KeGetCurrentThread() && v20[1].Timer.DueTime.LowPart != v19
         || BaseIoPriorityThread > 1)
        && (*(_BYTE *)(a1 + 26) & 4) == 0 )
      {
        v19 = 4;
      }
      v21 = v19 | 2;
      if ( (*(_WORD *)(a1 + 26) & 2) != 0 )
        v21 = v19;
      v22 = v21 | 0xFF00;
      if ( v20->Priority <= HIBYTE(*(unsigned __int16 *)(a1 + 26)) )
        v22 = v21;
      if ( v22 )
        ExpApplyPriorityBoost(a1);
      ExpWaitForResource(a1, v26, 66116LL, ExpApplyRewaitBoost);
      if ( ((unsigned __int8)CurrentThread & 3) == 0 )
        SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
      ExpBoostIoAfterAcquire(a1, CurrentThread, SpareByte0);
LABEL_13:
      __incgsdword(0x6394u);
      __incgsdword(0x6364u);
      if ( !v5 )
        return 1;
      PerfLogExecutiveResourceAcquire(65601LL, a1, 1LL, *(unsigned int *)(a1 + 68));
      return 1;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      __incgsdword(0x63A0u);
      return 0;
    }
  }
}
