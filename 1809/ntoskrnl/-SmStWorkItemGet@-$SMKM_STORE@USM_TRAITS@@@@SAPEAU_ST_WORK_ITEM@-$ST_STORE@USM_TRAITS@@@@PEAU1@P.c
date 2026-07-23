/*
 * XREFs of ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140153CA4
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011E350 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeQueryPriorityThread @ 0x1400E17E0 (KeQueryPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v13; // r8
  unsigned __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rdi
  struct _KTHREAD *v17; // rsi
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  __int64 i; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
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
          v20 = *(unsigned __int8 *)(a1 + 6022);
          if ( (_DWORD)v20 == 4 )
            v21 = *(unsigned int *)(a1 + 6712);
          else
            v21 = (unsigned int)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition[v20];
          KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 6200), v21, v13);
        }
      }
      v14 = (unsigned __int64 *)(a1 + 6064);
      v15 = *(__int64 **)(a1 + 6072);
      if ( v15 == (__int64 *)(a1 + 6064) )
      {
        v16 = 0LL;
      }
      else
      {
        v16 = (__int64 *)*v14;
        *v14 = *(_QWORD *)*v14 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v16 == v15 )
        {
          *v14 = 0LL;
          *(_QWORD *)(a1 + 6072) = a1 + 6064;
        }
        else
        {
          *v15 = *v15 & 7 | (8 * (((unsigned __int64)*v15 >> 3) - 1));
        }
        if ( !--*(_DWORD *)(a1 + 6100) && (*(_BYTE *)v16 & 7) == 6 )
        {
          if ( *(_BYTE *)(a1 + 6022) )
          {
            v17 = *(struct _KTHREAD **)(a1 + 6200);
            if ( KeQueryPriorityThread(v17) > 4 )
              KeSetActualBasePriorityThread((__int64)v17, 4LL, v18);
          }
        }
      }
    }
    else
    {
      v16 = (__int64 *)*v9;
      *v9 = *(_QWORD *)*v9 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v16 == v10 )
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
    v16 = (__int64 *)*v6;
    *v6 = *(_QWORD *)*v6 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v16 == v8 )
    {
      *v6 = 0LL;
      *(_QWORD *)(a1 + 6088) = a1 + 6080;
    }
    else
    {
      *v8 = *v8 & 7 | (8 * (((unsigned __int64)*v8 >> 3) - 1));
    }
    v22 = *(_DWORD *)(a1 + 6100) - 1;
    *a2 = 1;
    *(_DWORD *)(a1 + 6100) = v22;
  }
  if ( !v16 )
  {
LABEL_20:
    *(_QWORD *)(a1 + 6120) = 0LL;
    goto LABEL_18;
  }
  *(_QWORD *)(a1 + 6112) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)v16 & 7) == 2 && *(_BYTE *)(a1 + 6020) )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 16LL);
          *(_DWORD *)i < (unsigned __int8)*((_DWORD *)v16 + 2) << 12;
          i += 32LL )
    {
      ;
    }
    v24 = *(_QWORD *)(i + 8);
    v25 = *(_QWORD *)(a1 + 6120);
    if ( v25 > v24 )
    {
      *(_QWORD *)(a1 + 6120) = v25 - v24;
      goto LABEL_18;
    }
    goto LABEL_20;
  }
LABEL_18:
  KxReleaseSpinLock(v2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  return v16;
}
