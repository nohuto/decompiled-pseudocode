/*
 * XREFs of ?SmAsyncReadQueueWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140151260
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14014EE10 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker(__int64 a1)
{
  _QWORD *v1; // r14
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r15
  KSPIN_LOCK *v4; // rbp
  unsigned __int64 v5; // rsi
  KIRQL v6; // al
  KIRQL v7; // bl
  unsigned __int64 v8; // rax
  LARGE_INTEGER v9; // rbx
  unsigned __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // rbx
  int v12; // r14d
  KIRQL v13; // di
  _QWORD *v14; // rax
  int v15; // edi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  _QWORD *v19; // rax
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
  LODWORD(v3) = 100;
  v4 = (KSPIN_LOCK *)(v2 + 768);
  v5 = v2 + 24LL * ((8 * (*(_DWORD *)(a1 + 40) & 3)) | *(_DWORD *)(a1 + 32) & 7u);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 768));
  --*(_DWORD *)(v5 + 16);
  ++*(_DWORD *)(v5 + 20);
  v7 = v6;
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  v8 = v7;
LABEL_3:
  __writecr8(v8);
  v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(v1[4] & 0xFFFFFFFFFFFFFFF8uLL, (unsigned __int64)(v1 - 5), 0);
  v10 = 1000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - v9.QuadPart) / PerformanceFrequency.QuadPart;
  if ( v10 >= (unsigned int)v3 )
    LODWORD(v10) = v3;
  PerformanceCounter.QuadPart = 0LL;
  v12 = 0;
  v3 = (unsigned int)v10;
  while ( 1 )
  {
LABEL_6:
    v13 = KeAcquireSpinLockRaiseToDpc(v4);
    v14 = *(_QWORD **)(v5 + 8);
    if ( *v14 )
    {
      if ( v14 == (_QWORD *)v5 )
      {
        v1 = 0LL;
      }
      else
      {
        v1 = *(_QWORD **)v5;
        *(_QWORD *)v5 = **(_QWORD **)v5;
        v19 = *(_QWORD **)(v5 + 8);
        if ( v1 == v19 )
        {
          *(_QWORD *)v5 = 0LL;
          *(_QWORD *)(v5 + 8) = v5;
        }
        else
        {
          --*v19;
        }
      }
      KxReleaseSpinLock(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        v20 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v20);
      }
      v8 = v13;
      goto LABEL_3;
    }
    if ( v12 )
      break;
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(v13);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = 0;
    while ( *(_DWORD *)(v5 + 16) <= *(_DWORD *)(v5 + 20) )
    {
      if ( **(_QWORD **)(v5 + 8) )
        goto LABEL_6;
      if ( (++v15 & 0x7F) == 0
        && 1000000
         * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart)
         / PerformanceFrequency.QuadPart >= v3 )
      {
        break;
      }
      _mm_pause();
    }
    v12 = 1;
  }
  --*(_DWORD *)(v5 + 20);
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  result = v13;
  __writecr8(v13);
  return result;
}
