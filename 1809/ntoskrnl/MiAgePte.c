/*
 * XREFs of MiAgePte @ 0x14006ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x14006B2B0 (MiAgePteWorker.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiAgeWorkingSetTail @ 0x140075A40 (MiAgeWorkingSetTail.c)
 *     MiIsPageTableLocked @ 0x14012DAEC (MiIsPageTableLocked.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiInsertVmAccessedEntry @ 0x1402B334C (MiInsertVmAccessedEntry.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r8d
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned int v20; // r10d
  unsigned __int64 v21; // rdi
  LONG *v22; // r8
  volatile signed __int32 *v23; // r15
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v27; // edx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rdx
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 i; // rdx
  _DWORD *v34; // rcx
  int v35; // eax
  unsigned __int128 v36; // rax
  int v37; // eax
  int v38; // eax
  bool v39; // zf
  signed __int32 v40; // eax
  int v41; // eax
  unsigned __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // [rsp+30h] [rbp-58h]
  __int64 v49; // [rsp+30h] [rbp-58h]
  unsigned __int64 v50; // [rsp+38h] [rbp-50h] BYREF
  struct _KPRCB *v51; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v53; // [rsp+90h] [rbp+8h]
  int v54; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v8 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v3 + 6) != 1 )
    goto LABEL_2;
  *(_BYTE *)(v3 + 6) = 0;
  v8 = *(_QWORD *)(v5 + 16);
  v18 = *(_QWORD *)(v5 + 136);
  v19 = *(_QWORD *)(v8 + 32);
  if ( v18 <= v19 )
    return 3LL;
  v20 = *(_DWORD *)(v3 + 12);
  v21 = v18 - v19;
  v53 = v20;
  v48 = *(_DWORD *)v3;
  if ( (*(_DWORD *)v3 & 4) != 0 )
  {
    v24 = 0LL;
    goto LABEL_41;
  }
  v22 = &dword_14043C7E8;
  if ( (*(_BYTE *)(v5 + 184) & 7) == 2 )
    v23 = &dword_14043C7E8;
  else
    v23 = (volatile signed __int32 *)(v5 + 232);
  v24 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v23, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v54 = 0;
    v51 = CurrentPrcb;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v37 = SchedulerAssist[5];
        SchedulerAssist[5] = v37 + 1;
        if ( v37 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          CurrentPrcb = v51;
          v22 = &dword_14043C7E8;
          v20 = v53;
          v24 = 0LL;
        }
      }
    }
    if ( _interlockedbittestandset(v23, 0x1Fu) )
    {
      v34 = CurrentPrcb->SchedulerAssist;
      if ( v34 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v38 = v34[5] - 1;
          v34[5] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v35 = ExpWaitForSpinLockExclusiveAndAcquire(v23, 0xFFu);
      v20 = v53;
      v22 = &dword_14043C7E8;
      v54 = v35;
      v24 = 0LL;
    }
    v27 = *v23;
    if ( (*v23 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_30;
    do
    {
      if ( (v27 & 0x40000000) == 0 )
      {
        v40 = _InterlockedCompareExchange(v23, v27 | 0x40000000, v27);
        v39 = v27 == v40;
        v27 = v40;
        if ( !v39 )
          continue;
      }
      KeYieldProcessorEx(&v54);
      v27 = *v23;
    }
    while ( (v27 & 0xBFFFFFFF) != 0x80000000 );
  }
  v20 = v53;
  v22 = &dword_14043C7E8;
  v24 = 0LL;
LABEL_30:
  if ( (v48 & 2) != 0 )
  {
    v49 = *(unsigned int *)(v8 + 24);
    v28 = v49 + v21;
    if ( v20 == 10LL )
      v29 = v28 % 0xA;
    else
      v29 = v28 % v20;
    *(_DWORD *)(v8 + 24) = v29;
  }
  else
  {
    v49 = *(unsigned int *)(v8 + 28);
    v28 = v49 + v21;
    *(_DWORD *)(v8 + 28) = (v49 + v21) % v20;
  }
  if ( (*(_BYTE *)(v5 + 184) & 7) != 2 )
    v22 = (LONG *)(v5 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v22, retaddr);
    v20 = v53;
    v24 = 0LL;
  }
  else
  {
    *v22 = 0;
  }
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      v41 = v31[5] - 1;
      v31[5] = v41;
      if ( !v41 )
      {
        KiRemoveSystemWorkPriorityKick(v30);
        v20 = v53;
        v24 = 0LL;
      }
    }
  }
  if ( v28 >= v21 )
    v24 = v49;
LABEL_41:
  v32 = v20 * (v24 + v21) / 0x3E8;
  if ( v32 > v21 )
  {
    v36 = v21 * v20 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v32 = (*((_QWORD *)&v36 + 1) + ((v21 * v20 - *((_QWORD *)&v36 + 1)) >> 1)) >> 9;
  }
  *(_QWORD *)(v3 + 48) = v32;
  if ( *(_QWORD *)(v3 + 40) >= v32 )
    return 3LL;
LABEL_2:
  v9 = v6 << 25 >> 16;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 8 * ((v10 >> 3) & 0x1FF));
      v44 = v11 | 0x20;
      if ( (v43 & 0x20) == 0 )
        v44 = *(_QWORD *)v10;
      v11 = v44;
      if ( (v43 & 0x42) != 0 )
        v11 = v44 | 0x42;
    }
  }
  v50 = v11;
  if ( (unsigned __int64)&v50 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v50 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v45 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v45 )
    {
      v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
      v47 = v11 | 0x20;
      if ( (v46 & 0x20) == 0 )
        v47 = v11;
      v11 = v47;
      if ( (v46 & 0x42) != 0 )
        v11 = v47 | 0x42;
    }
  }
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a3 )
  {
    v13 = (__int64)((v10 << 25) + 0x10000000) >> 16;
    for ( i = v13 << 25 >> 16; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v13 = i;
    }
  }
  else
  {
    v13 = v10 + 8;
  }
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    *(_QWORD *)(v8 + 16) = v13;
  }
  else if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    *(_QWORD *)(v8 + 8) = v13;
  }
  if ( a3
    && ((*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
     || (unsigned int)MiIsPageTableLocked(v5, ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) )
  {
    return 0LL;
  }
  v14 = *(_QWORD *)(v12 + 8);
  if ( v14 >= 0
    && (unsigned int)MiDemoteCombinedPte(
                       v5,
                       ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       v14 | 0x8000000000000000uLL) == 1 )
  {
    v50 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  if ( ((v50 >> 5) & 1) == 0 || (v17 = *(_QWORD *)(v3 + 248)) == 0 || v9 > 0x7FFFFFFEFFFFLL )
  {
    v15 = (v50 >> 5) & 1 | 2;
    if ( (*(_DWORD *)v3 & 3) == 0 )
      v15 = (v50 >> 5) & 1;
    MiAgePteWorker(v5, (v9 >> 9) & 0xFFFFFFF8, v9, v12, v3, v15);
LABEL_14:
    if ( ++*(_QWORD *)(v3 + 40) < *(_QWORD *)(v3 + 48) )
      return 0LL;
    return 3LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v17, v9) )
    goto LABEL_14;
  return MiAgeWorkingSetTail(a1);
}
