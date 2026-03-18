/*
 * XREFs of MiAgePte @ 0x14004CB50
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     MiAgePteWorker @ 0x14004D010 (MiAgePteWorker.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPageTableLocked @ 0x14012B620 (MiIsPageTableLocked.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiInsertVmAccessedEntry @ 0x1402C831C (MiInsertVmAccessedEntry.c)
 */

__int64 __fastcall MiAgePte(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r14
  char v25; // al
  volatile signed __int64 *v26; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v29; // rdx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 i; // rdx
  unsigned __int128 v37; // rax
  int v38; // eax
  int v39; // eax
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // [rsp+30h] [rbp-68h]
  unsigned __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  __int64 v45; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int64 *v46; // [rsp+48h] [rbp-50h]
  __int64 v47; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v49; // [rsp+A0h] [rbp+8h]
  int v50; // [rsp+B8h] [rbp+20h]
  __int64 v51; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v3 + 6) != 1 )
    goto LABEL_2;
  *(_BYTE *)(v3 + 6) = 0;
  v20 = *(_QWORD *)(v5 + 16);
  v21 = *(_QWORD *)(v5 + 136);
  v43 = v20;
  v22 = *(_QWORD *)(v20 + 32);
  if ( v21 <= v22 )
    return 3LL;
  v23 = v21 - v22;
  v24 = 0LL;
  v49 = *(_DWORD *)(v3 + 12);
  v50 = *(_DWORD *)v3;
  if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    v25 = *(_BYTE *)(v5 + 184) & 7;
    v47 = 0LL;
    if ( v25 == 2 )
      v26 = (volatile signed __int64 *)&unk_140466F40;
    else
      v26 = (volatile signed __int64 *)(v5 + 256);
    v46 = v26;
    v45 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v38 = SchedulerAssist[5];
        SchedulerAssist[5] = v38 + 1;
        if ( v38 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v20 = v43;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v45, v26);
    }
    else
    {
      v29 = (_QWORD *)_InterlockedExchange64(v26, (__int64)&v45);
      if ( !v29 )
        goto LABEL_26;
      KxWaitForLockOwnerShip((__int64)&v45, v29);
    }
    v20 = v43;
LABEL_26:
    if ( (v50 & 2) != 0 )
    {
      v51 = *(unsigned int *)(v20 + 24);
      v30 = v51 + v23;
      if ( v49 == 10LL )
        v31 = v30 % 0xA;
      else
        v31 = v30 % v49;
      *(_DWORD *)(v20 + 24) = v31;
    }
    else
    {
      v51 = *(unsigned int *)(v20 + 28);
      v30 = v51 + v23;
      *(_DWORD *)(v20 + 28) = (v51 + v23) % v49;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v45, retaddr);
    }
    else
    {
      _m_prefetchw(&v45);
      v32 = v45;
      if ( !v45 )
      {
        if ( (__int64 *)_InterlockedCompareExchange64(v46, 0LL, (signed __int64)&v45) == &v45 )
          goto LABEL_33;
        v32 = KxWaitForLockChainValid(&v45);
      }
      v45 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v32 + 8), 1uLL);
    }
LABEL_33:
    v33 = KeGetCurrentPrcb();
    v34 = v33->SchedulerAssist;
    if ( v34 )
    {
      if ( v33->NestingLevel <= 1u )
      {
        v39 = v34[5] - 1;
        v34[5] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    if ( v30 >= v23 )
      v24 = v51;
  }
  v35 = v49 * (v24 + v23) / 0x3E8;
  if ( v35 > v23 )
  {
    v37 = v23 * v49 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v35 = (*((_QWORD *)&v37 + 1) + ((v23 * v49 - *((_QWORD *)&v37 + 1)) >> 1)) >> 9;
  }
  *(_QWORD *)(v3 + 48) = v35;
  if ( *(_QWORD *)(v3 + 40) >= v35 )
    return 3LL;
LABEL_2:
  v8 = a2 << 25 >> 16;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v41 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
      v42 = v10 | 0x20;
      if ( (v41 & 0x20) == 0 )
        v42 = *(_QWORD *)v9;
      v10 = v42;
      if ( (v41 & 0x42) != 0 )
        v10 = v42 | 0x42;
    }
  }
  v44 = v10;
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v44) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a3 )
  {
    v15 = (__int64)((v9 << 25) - v13 + 0x10000000) >> 16;
    for ( i = ((v15 << 25) - v13) >> 16; i >= v14; i = (__int64)((i << 25) - v13) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v15 = i;
    }
  }
  else
  {
    v15 = v9 + 8;
  }
  if ( (*(_DWORD *)v3 & 2) != 0 )
  {
    *(_QWORD *)(v12 + 16) = v15;
  }
  else if ( (*(_DWORD *)v3 & 4) == 0 )
  {
    *(_QWORD *)(v12 + 8) = v15;
  }
  if ( a3
    && ((*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
     || (unsigned int)MiIsPageTableLocked(v5, ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) )
  {
    return 0LL;
  }
  v16 = *(_QWORD *)(v11 + 8);
  if ( v16 >= 0
    && (unsigned int)MiDemoteCombinedPte(
                       v5,
                       ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       v16 | 0x8000000000000000uLL) == 1 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  v17 = (v10 >> 5) & 1;
  if ( !(_DWORD)v17 || (v19 = *(_QWORD *)(v3 + 248)) == 0 || v8 > 0x7FFFFFFEFFFFLL )
  {
    if ( (*(_DWORD *)v3 & 3) != 0 )
      LODWORD(v17) = v17 | 2;
    MiAgePteWorker(v5, (v8 >> 9) & 0xFFFFFFF8, v8, v11, v3, v17);
LABEL_13:
    if ( ++*(_QWORD *)(v3 + 40) < *(_QWORD *)(v3 + 48) )
      return 0LL;
    return 3LL;
  }
  if ( !(unsigned int)MiInsertVmAccessedEntry(v19, v8) )
    goto LABEL_13;
  return MiAgeWorkingSetTail(a1);
}
