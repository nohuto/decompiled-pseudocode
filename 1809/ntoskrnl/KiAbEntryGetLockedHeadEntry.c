/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x1400247E0
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140023C40 (KiAbProcessThreadLocks.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiAbForceProcessLockEntry @ 0x140166280 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140024F9C (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1401192D0 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiAbCompareSnappedEntryState @ 0x140132738 (KiAbCompareSnappedEntryState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

PRTL_BALANCED_NODE __fastcall KiAbEntryGetLockedHeadEntry(PRTL_BALANCED_NODE Node, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  int v4; // r13d
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  volatile LONG *v9; // rsi
  int v10; // r15d
  _RTL_RB_TREE *v11; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  signed __int32 v15; // ett
  _DWORD *v16; // rcx
  int v17; // eax
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v20; // edx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  _RTL_BALANCED_NODE *v23; // rax
  unsigned __int64 v24; // rdx
  BOOLEAN v25; // al
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  _RTL_BALANCED_NODE *v28; // rax
  PRTL_BALANCED_NODE v29; // rdi
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  char v35; // al
  $A3FF8F482F754979EE64F8673203A9F2 *v36; // rbx
  char v37; // r9
  _RTL_BALANCED_NODE *v38; // rax
  unsigned __int64 v39; // rdx
  BOOLEAN v40; // r8
  int v41; // ecx
  unsigned __int64 v42; // rax
  char v43; // al
  char v44; // r9
  _RTL_BALANCED_NODE *ParentValue; // rcx
  int v46; // ecx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  char *v49; // rcx
  unsigned __int64 v50; // [rsp+20h] [rbp-68h] BYREF
  int v51; // [rsp+28h] [rbp-60h]
  __int128 v52; // [rsp+30h] [rbp-58h]
  _QWORD v53[4]; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( (BYTE3(Node[1].Left) & 1) != 0 )
  {
    *a3 = 0LL;
    a3[1] = (char *)Node + 80;
    KxAcquireQueuedSpinLock(a3);
    if ( (BYTE3(Node[1].Left) & 1) != 0 )
      return Node;
    KxReleaseQueuedSpinLock(v3);
  }
  v52 = *(_OWORD *)&Node[1].Right;
  if ( (__int64)v52 >= 0 && !v4 )
    return 0LL;
  v7 = DWORD2(v52);
  v50 = v52 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = ((((unsigned __int64)v52 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v9 = (volatile LONG *)((char *)&KiAbTreeArray + v8 + 16);
  v51 = DWORD2(v52);
  v10 = 0;
  v11 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v8);
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
    Min = v11->Min;
    Root = (unsigned __int64)v11->Root;
    if ( ((unsigned __int8)Min & 1) != 0 && Root )
      Root ^= (unsigned __int64)v11;
    v20 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      do
      {
        v21 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v21 < v50 )
          goto LABEL_32;
        if ( v21 > v50 )
          goto LABEL_31;
        v22 = *(_DWORD *)(Root + 40);
        if ( v22 == v7 )
          break;
        if ( v22 < v7 )
LABEL_32:
          v23 = *(_RTL_BALANCED_NODE **)(Root + 8);
        else
LABEL_31:
          v23 = *(_RTL_BALANCED_NODE **)Root;
        if ( v20 && v23 )
          Root ^= (unsigned __int64)v23;
        else
          Root = (unsigned __int64)v23;
      }
      while ( Root );
      v3 = a3;
    }
    if ( !v4 )
    {
      if ( Root )
      {
        *v3 = 0LL;
        v3[1] = Root + 80;
        v29 = (PRTL_BALANCED_NODE)Root;
        KxAcquireQueuedSpinLock(v3);
        if ( v10 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v9);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v9);
        if ( Node == (PRTL_BALANCED_NODE)Root )
          return v29;
        v53[0] = 0LL;
        v53[1] = (char *)Node + 80;
        KxAcquireQueuedSpinLock(v53);
        KxReleaseQueuedSpinLock(v53);
        if ( (unsigned int)KiAbCompareSnappedEntryState(Node, &v50) )
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
    if ( Root )
      break;
    if ( v10 || (v10 = 1, ExTryConvertSharedSpinLockExclusive(v9)) )
    {
      v24 = (unsigned __int64)v11->Root;
      if ( ((__int64)v11->Min & 1) != 0 )
      {
        if ( v24 )
          v24 ^= (unsigned __int64)v11;
        else
          v24 = 0LL;
      }
      v25 = 0;
      if ( v24 )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v26 < v50 || v26 <= v50 && ((v27 = *(_DWORD *)(v24 + 40), v27 == v7) || v27 < v7) )
          {
            v28 = *(_RTL_BALANCED_NODE **)(v24 + 8);
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v28 )
                goto LABEL_63;
              v28 = (_RTL_BALANCED_NODE *)(v24 ^ (unsigned __int64)v28);
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
            v28 = *(_RTL_BALANCED_NODE **)v24;
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v28 )
                goto LABEL_56;
              v28 = (_RTL_BALANCED_NODE *)(v24 ^ (unsigned __int64)v28);
            }
            if ( !v28 )
            {
LABEL_56:
              v25 = 0;
              break;
            }
          }
          v24 = (unsigned __int64)v28;
        }
      }
      RtlRbInsertNodeEx(v11, (PRTL_BALANCED_NODE)v24, v25, Node);
      *v3 = 0LL;
      v3[1] = (char *)Node + 80;
      v29 = Node;
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
      HIBYTE(Node[1].Right) |= 0x80u;
      BYTE3(Node[1].Left) |= 1u;
      Node[2].Children[0] = 0LL;
      Node[2].Children[1] = 0LL;
      Node[2].ParentValue = 0LL;
      Node[3].Children[0] = 0LL;
      *((_WORD *)&Node[3].1 + 1) &= 1u;
      goto LABEL_113;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v9);
  }
  *v3 = 0LL;
  v3[1] = Root + 80;
  v29 = (PRTL_BALANCED_NODE)Root;
  KxAcquireQueuedSpinLock(v3);
  if ( v10 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v9);
  if ( (__int64)Node[1].Children[1] >= 0 )
  {
    if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    {
      v43 = ((_BYTE *)&Node[8].Left - 16 * LOBYTE(Node[1].Children[0]))[3];
      if ( v43 > 15 )
        v43 = 15;
      v36 = ($A3FF8F482F754979EE64F8673203A9F2 *)(Root + 64);
      LOBYTE(Node[2].Children[0]) = v43;
      v44 = v43;
      ParentValue = (_RTL_BALANCED_NODE *)v36[1].ParentValue;
      if ( ((unsigned __int8)ParentValue & 1) != 0 )
      {
        if ( v36->ParentValue )
          v39 = v36->ParentValue ^ (unsigned __int64)v36;
        else
          v39 = 0LL;
      }
      else
      {
        v39 = v36->ParentValue;
      }
      v40 = 0;
      v46 = (unsigned __int8)ParentValue & 1;
      if ( v39 )
      {
        while ( 1 )
        {
          while ( *(char *)(v39 + 48) < v44 )
          {
            v47 = *(_QWORD *)v39;
            if ( v46 )
            {
              if ( !v47 )
                goto LABEL_86;
              v47 ^= v39;
            }
            if ( !v47 )
            {
LABEL_86:
              v40 = 0;
              goto LABEL_112;
            }
            v39 = v47;
          }
          v48 = *(_QWORD *)(v39 + 8);
          if ( v46 )
          {
            if ( !v48 )
              break;
            v48 ^= v39;
          }
          if ( !v48 )
            break;
          v39 = v48;
        }
LABEL_111:
        v40 = 1;
      }
    }
    else
    {
      v35 = KiAbOwnerComputeCpuPriorityKey(Node, v33, v34);
      v36 = ($A3FF8F482F754979EE64F8673203A9F2 *)(Root + 48);
      LOBYTE(Node[2].Children[0]) = v35;
      v37 = v35;
      v38 = (_RTL_BALANCED_NODE *)v36[1].ParentValue;
      v39 = v36->ParentValue;
      if ( ((unsigned __int8)v38 & 1) != 0 && v39 )
        v39 ^= (unsigned __int64)v36;
      v40 = 0;
      v41 = (unsigned __int8)v38 & 1;
      if ( v39 )
      {
        while ( 1 )
        {
          if ( *(char *)(v39 + 48) <= v37 )
          {
            v42 = *(_QWORD *)(v39 + 8);
            if ( v41 )
            {
              if ( !v42 )
                goto LABEL_111;
              v42 ^= v39;
            }
            if ( !v42 )
              goto LABEL_111;
          }
          else
          {
            v42 = *(_QWORD *)v39;
            if ( v41 )
            {
              if ( !v42 )
                goto LABEL_86;
              v42 ^= v39;
            }
            if ( !v42 )
              goto LABEL_86;
          }
          v39 = v42;
        }
      }
    }
LABEL_112:
    RtlRbInsertNodeEx((PRTL_RB_TREE)v36, (PRTL_BALANCED_NODE)v39, v40, Node);
    HIBYTE(Node[1].Right) |= 0x80u;
LABEL_113:
    v49 = (char *)Node - 16 * LOBYTE(Node[1].Children[0]);
    if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
      ++v49[793];
    else
      _InterlockedExchangeAdd8(v49 + 1423, 1u);
  }
  return v29;
}
