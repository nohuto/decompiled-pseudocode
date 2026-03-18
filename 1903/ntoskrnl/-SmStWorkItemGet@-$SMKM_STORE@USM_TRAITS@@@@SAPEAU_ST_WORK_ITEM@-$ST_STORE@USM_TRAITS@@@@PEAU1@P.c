/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1401572CC
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x14009AD40 (KeQueryPriorityThread.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(__int64 a1, _DWORD *a2)
{
  KSPIN_LOCK *v2; // r14
  KIRQL v5; // al
  unsigned __int64 *v6; // r8
  KIRQL v7; // bp
  __int64 *v8; // r9
  unsigned __int64 *v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  KPRIORITY v12; // edi
  unsigned __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  struct _KTHREAD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 i; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  *a2 = 0;
  v2 = (KSPIN_LOCK *)(a1 + 6040);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 6040));
  v6 = (unsigned __int64 *)(a1 + 6080);
  v7 = v5;
  v8 = *(__int64 **)(a1 + 6088);
  if ( v8 == (__int64 *)(a1 + 6080) )
  {
    v9 = (unsigned __int64 *)(a1 + 6048);
    v10 = *(__int64 **)(a1 + 6056);
    if ( v10 == (__int64 *)(a1 + 6048) )
    {
      if ( !*(_DWORD *)(a1 + 6104) )
      {
        v11 = *(unsigned __int8 *)(a1 + 6022);
        v12 = (_DWORD)v11 == 4
            ? *(_DWORD *)(a1 + 6712)
            : `SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v11];
        if ( KeQueryPriorityThread(*(PKTHREAD *)(a1 + 6200)) > v12 )
        {
          v18 = *(unsigned __int8 *)(a1 + 6022);
          if ( (_DWORD)v18 == 4 )
            v19 = *(unsigned int *)(a1 + 6712);
          else
            v19 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v18];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), v19);
        }
      }
      v13 = (unsigned __int64 *)(a1 + 6064);
      v14 = *(__int64 **)(a1 + 6072);
      if ( v14 == (__int64 *)(a1 + 6064) )
      {
        v15 = 0LL;
      }
      else
      {
        v15 = (__int64 *)*v13;
        *v13 = *(_QWORD *)*v13 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v15 == v14 )
        {
          *v13 = 0LL;
          *(_QWORD *)(a1 + 6072) = a1 + 6064;
        }
        else
        {
          *v14 = *v14 & 7 | (8 * (((unsigned __int64)*v14 >> 3) - 1));
        }
        if ( !--*(_DWORD *)(a1 + 6100) && (*(_BYTE *)v15 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 6022) )
          {
            v17 = *(struct _KTHREAD **)(a1 + 6200);
            if ( KeQueryPriorityThread(v17) > 4 )
              KeSetActualBasePriorityThread((__int64)v17, 4LL);
          }
        }
      }
    }
    else
    {
      v15 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 == v10 )
      {
        *v9 = 0LL;
        *(_QWORD *)(a1 + 6056) = a1 + 6048;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
      }
      --*(_DWORD *)(a1 + 6096);
    }
  }
  else
  {
    v15 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v15 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
    }
    v20 = *(_DWORD *)(a1 + 6100) - 1;
    *a2 = 1;
    *(_DWORD *)(a1 + 6100) = v20;
  }
  if ( !v15 )
  {
LABEL_22:
    *(_QWORD *)(a1 + 6120) = 0LL;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v15 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v15 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v22 = *(_QWORD *)(i + 8);
    v23 = *(_QWORD *)(a1 + 6120);
    if ( v23 > v22 )
    {
      *(_QWORD *)(a1 + 6120) = v23 - v22;
      goto LABEL_13;
    }
    goto LABEL_22;
  }
LABEL_13:
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v15;
}
