/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400247E0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x140166160 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140024F9C (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC990 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC640 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7780 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x140119240 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x140132648 (KiAbCompareSnappedEntryState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C064 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C178 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  int v4; // r13d
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  volatile LONG *v9; // rsi
  int v10; // r15d
  unsigned __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  signed __int32 v15; // ett
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdi
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  char v35; // al
  __int64 *v36; // rbx
  char v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // rax
  char v42; // al
  char v43; // r9
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // [rsp+20h] [rbp-68h] BYREF
  int v50; // [rsp+28h] [rbp-60h]
  __int128 v51; // [rsp+30h] [rbp-58h]
  _QWORD v52[4]; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    *a3 = 0LL;
    a3[1] = a1 + 80;
    KxAcquireQueuedSpinLock(a3);
    if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
      return a1;
    KxReleaseQueuedSpinLock(v3);
  }
  v51 = *(_OWORD *)(a1 + 32);
  if ( (__int64)v51 >= 0 && !v4 )
    return 0LL;
  v7 = DWORD2(v51);
  v49 = v51 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = ((((unsigned __int64)v51 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v9 = (volatile LONG *)((char *)&KiAbTreeArray + v8 + 16);
  v50 = DWORD2(v51);
  v10 = 0;
  v11 = (unsigned __int64)&KiAbTreeArray + v8;
  while ( 1 )
  {
    if ( v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v9);
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, a2);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = SchedulerAssist[5];
          SchedulerAssist[5] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw((const void *)v9);
      v15 = *v9 & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(v9, v15 + 1, v15) )
      {
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = v16[5] - 1;
            v16[5] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(a2) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v9, a2);
      }
    }
    v18 = *(_QWORD *)(v11 + 8);
    v19 = *(_QWORD *)v11;
    if ( (v18 & 1) != 0 && v19 )
      v19 ^= v11;
    v20 = v18 & 1;
    if ( v19 )
    {
      do
      {
        v21 = *(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v21 < v49 )
          goto LABEL_32;
        if ( v21 > v49 )
          goto LABEL_31;
        v22 = *(_DWORD *)(v19 + 40);
        if ( v22 == v7 )
          break;
        if ( v22 < v7 )
LABEL_32:
          v23 = *(_QWORD *)(v19 + 8);
        else
LABEL_31:
          v23 = *(_QWORD *)v19;
        if ( v20 && v23 )
          v19 ^= v23;
        else
          v19 = v23;
      }
      while ( v19 );
      v3 = a3;
    }
    if ( !v4 )
    {
      if ( v19 )
      {
        *v3 = 0LL;
        v3[1] = v19 + 80;
        v29 = v19;
        KxAcquireQueuedSpinLock(v3);
        if ( v10 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v9);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v9);
        if ( a1 == v19 )
          return v29;
        v52[0] = 0LL;
        v52[1] = a1 + 80;
        KxAcquireQueuedSpinLock(v52);
        KxReleaseQueuedSpinLock(v52);
        if ( (unsigned int)KiAbCompareSnappedEntryState(a1, &v49) )
          return v29;
        KxReleaseQueuedSpinLock(v3);
      }
      else if ( v10 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v9);
      }
      return 0LL;
    }
    if ( v19 )
      break;
    if ( v10 || (v10 = 1, ExTryConvertSharedSpinLockExclusive(v9)) )
    {
      v24 = *(_QWORD *)v11;
      if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
      {
        if ( v24 )
          v24 ^= v11;
        else
          v24 = 0LL;
      }
      v25 = 0;
      if ( v24 )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v26 < v49 || v26 <= v49 && ((v27 = *(_DWORD *)(v24 + 40), v27 == v7) || v27 < v7) )
          {
            v28 = *(_QWORD *)(v24 + 8);
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v28 )
                goto LABEL_63;
              v28 ^= v24;
            }
            if ( !v28 )
            {
LABEL_63:
              v25 = 1;
              break;
            }
          }
          else
          {
            v28 = *(_QWORD *)v24;
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v28 )
                goto LABEL_56;
              v28 ^= v24;
            }
            if ( !v28 )
            {
LABEL_56:
              v25 = 0;
              break;
            }
          }
          v24 = v28;
        }
      }
      RtlRbInsertNodeEx(v11, v24, v25, a1);
      *v3 = 0LL;
      v3[1] = a1 + 80;
      v29 = a1;
      KxAcquireQueuedSpinLock(v3);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v9, retaddr);
      else
        *v9 = 0;
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      if ( v31 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v32 = v31[5] - 1;
          v31[5] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
      *(_BYTE *)(a1 + 39) |= 0x80u;
      *(_BYTE *)(a1 + 27) |= 1u;
      *(_QWORD *)(a1 + 48) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_WORD *)(a1 + 90) &= 1u;
      goto LABEL_113;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v9);
  }
  *v3 = 0LL;
  v3[1] = v19 + 80;
  v29 = v19;
  KxAcquireQueuedSpinLock(v3);
  if ( v10 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v9);
  if ( *(__int64 *)(a1 + 32) >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    {
      v42 = *(_BYTE *)(a1 - 16LL * *(unsigned __int8 *)(a1 + 24) + 195);
      if ( v42 > 15 )
        v42 = 15;
      v36 = (__int64 *)(v19 + 64);
      *(_BYTE *)(a1 + 48) = v42;
      v43 = v42;
      v44 = v36[1];
      if ( (v44 & 1) != 0 )
      {
        if ( *v36 )
          v39 = *v36 ^ (unsigned __int64)v36;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = *v36;
      }
      LOBYTE(v34) = 0;
      v45 = v44 & 1;
      if ( v39 )
      {
        while ( 1 )
        {
          while ( *(char *)(v39 + 48) < v43 )
          {
            v46 = *(_QWORD *)v39;
            if ( v45 )
            {
              if ( !v46 )
                goto LABEL_86;
              v46 ^= v39;
            }
            if ( !v46 )
            {
LABEL_86:
              LOBYTE(v34) = 0;
              goto LABEL_112;
            }
            v39 = v46;
          }
          v47 = *(_QWORD *)(v39 + 8);
          if ( v45 )
          {
            if ( !v47 )
              break;
            v47 ^= v39;
          }
          if ( !v47 )
            break;
          v39 = v47;
        }
LABEL_111:
        LOBYTE(v34) = 1;
      }
    }
    else
    {
      v35 = KiAbOwnerComputeCpuPriorityKey(a1, v33, v34);
      v36 = (__int64 *)(v19 + 48);
      *(_BYTE *)(a1 + 48) = v35;
      v37 = v35;
      v38 = v36[1];
      v39 = *v36;
      if ( (v38 & 1) != 0 && v39 )
        v39 ^= (unsigned __int64)v36;
      LOBYTE(v34) = 0;
      v40 = v38 & 1;
      if ( v39 )
      {
        while ( 1 )
        {
          if ( *(char *)(v39 + 48) <= v37 )
          {
            v41 = *(_QWORD *)(v39 + 8);
            if ( v40 )
            {
              if ( !v41 )
                goto LABEL_111;
              v41 ^= v39;
            }
            if ( !v41 )
              goto LABEL_111;
          }
          else
          {
            v41 = *(_QWORD *)v39;
            if ( v40 )
            {
              if ( !v41 )
                goto LABEL_86;
              v41 ^= v39;
            }
            if ( !v41 )
              goto LABEL_86;
          }
          v39 = v41;
        }
      }
    }
LABEL_112:
    RtlRbInsertNodeEx(v36, v39, v34, a1);
    *(_BYTE *)(a1 + 39) |= 0x80u;
LABEL_113:
    v48 = a1 - 16LL * *(unsigned __int8 *)(a1 + 24);
    if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
      ++*(_BYTE *)(v48 + 793);
    else
      _InterlockedExchangeAdd8((volatile signed __int8 *)(v48 + 1423), 1u);
  }
  return v29;
}
