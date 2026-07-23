/*
 * XREFs of KiAbEntryGetLockedHeadEntry @ 0x140060B90
 * Callers:
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14009F478 (KiAbOwnerComputeCpuPriorityKey.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbCompareSnappedEntryState @ 0x1401358C4 (KiAbCompareSnappedEntryState.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x14033B388 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

char *__fastcall KiAbEntryGetLockedHeadEntry(char *Node, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  unsigned __int64 v3; // r14
  bool v4; // zf
  char *v7; // rsi
  int v8; // r12d
  unsigned __int64 v9; // rcx
  volatile LONG *v10; // rbp
  _RTL_RB_TREE *v11; // r15
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  _RTL_BALANCED_NODE *v17; // rax
  signed __int32 v18; // edx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdx
  BOOLEAN v21; // al
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  _RTL_BALANCED_NODE *v24; // rax
  char *v25; // rdi
  char *v26; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // cl
  $364E67799B1CB15A9225EAEEE10EC12F *v32; // rbx
  _RTL_BALANCED_NODE *ParentValue; // rax
  BOOLEAN v34; // r8
  int v35; // edx
  unsigned __int64 v36; // rax
  char v37; // al
  char v38; // cl
  _RTL_BALANCED_NODE *v39; // rax
  int v40; // edx
  unsigned __int64 v41; // rax
  signed __int32 v42; // eax
  unsigned __int64 v43; // [rsp+20h] [rbp-78h] BYREF
  int v44; // [rsp+28h] [rbp-70h]
  int v45; // [rsp+2Ch] [rbp-6Ch]
  __int128 v46; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v51; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (Node[27] & 1) == 0;
  v45 = 0;
  v7 = Node;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(Node + 80);
    KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)Node + 10);
    if ( (v7[27] & 1) != 0 )
      return v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  }
  v46 = *((_OWORD *)v7 + 2);
  if ( (__int64)v46 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v43 = v46 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v46 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v44 = DWORD2(v46);
  v10 = (volatile LONG *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v9);
  while ( 1 )
  {
    if ( v8 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v10);
    Min = v11->Min;
    Root = (unsigned __int64)v11->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v11;
      else
        Root = 0LL;
    }
    v14 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v15 < v43 )
          goto LABEL_37;
        if ( v15 > v43 )
          goto LABEL_16;
        v16 = *(_DWORD *)(Root + 40);
        if ( v16 == DWORD2(v46) )
          goto LABEL_19;
        if ( v16 < DWORD2(v46) )
        {
LABEL_37:
          v17 = *(_RTL_BALANCED_NODE **)(Root + 8);
          if ( v14 && v17 )
          {
LABEL_41:
            Root ^= (unsigned __int64)v17;
            goto LABEL_18;
          }
        }
        else
        {
LABEL_16:
          v17 = *(_RTL_BALANCED_NODE **)Root;
          if ( v14 && v17 )
            goto LABEL_41;
        }
        Root = (unsigned __int64)v17;
LABEL_18:
        if ( !Root )
        {
LABEL_19:
          v7 = Node;
          break;
        }
      }
    }
    if ( !a2 )
    {
      if ( Root )
      {
        v25 = (char *)Root;
        a3->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
        a3->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(Root + 80));
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v10);
        if ( v7 == (char *)Root )
          return v25;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v7 + 10);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v7, &v43) )
          return v25;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
      }
      else if ( v8 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(v10);
      }
      return 0LL;
    }
    if ( Root )
      break;
    if ( v8 )
      goto LABEL_26;
    v8 = 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned int)ExpTryConvertSharedSpinLockExclusiveInstrumented(v10, retaddr) )
        goto LABEL_26;
    }
    else if ( !_interlockedbittestandset(v10, 0x1Fu) )
    {
      v18 = *v10;
      v19 = *v10 & 0xBFFFFFFF;
      v51 = 0;
      if ( v19 != -2147483647 )
      {
        do
        {
          if ( (v18 & 0x40000000) == 0 )
          {
            v42 = _InterlockedCompareExchange(v10, v18 | 0x40000000, v18);
            v4 = v18 == v42;
            v18 = v42;
            if ( !v4 )
              continue;
          }
          KeYieldProcessorEx(&v51);
          v18 = *v10;
        }
        while ( (v18 & 0xBFFFFFFF) != 0x80000001 );
      }
LABEL_26:
      v20 = (unsigned __int64)v11->Root;
      if ( ((__int64)v11->Min & 1) != 0 )
      {
        if ( v20 )
          v20 ^= (unsigned __int64)v11;
        else
          v20 = 0LL;
      }
      v21 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v22 < v43 || v22 <= v43 && ((v23 = *(_DWORD *)(v20 + 40), v23 == DWORD2(v46)) || v23 < DWORD2(v46)) )
          {
            v24 = *(_RTL_BALANCED_NODE **)(v20 + 8);
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_46;
              v24 = (_RTL_BALANCED_NODE *)(v20 ^ (unsigned __int64)v24);
            }
            if ( !v24 )
            {
LABEL_46:
              v21 = 1;
              break;
            }
          }
          else
          {
            v24 = *(_RTL_BALANCED_NODE **)v20;
            if ( ((__int64)v11->Min & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_47;
              v24 = (_RTL_BALANCED_NODE *)(v20 ^ (unsigned __int64)v24);
            }
            if ( !v24 )
            {
LABEL_47:
              v21 = 0;
              break;
            }
          }
          v20 = (unsigned __int64)v24;
        }
      }
      RtlRbInsertNodeEx(v11, (PRTL_BALANCED_NODE)v20, v21, (PRTL_BALANCED_NODE)v7);
      v25 = v7;
      a3->LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
      a3->LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)v7 + 10);
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      v7[39] |= 0x80u;
      v7[27] |= 1u;
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
      *((_QWORD *)v7 + 8) = 0LL;
      *((_QWORD *)v7 + 9) = 0LL;
      *((_WORD *)v7 + 45) &= 1u;
LABEL_49:
      v26 = &v7[-16 * (unsigned __int8)v7[24]];
      if ( (v7[25] & 1) != 0 )
        ++v26[793];
      else
        _InterlockedExchangeAdd8(v26 + 1423, 1u);
      return v25;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  v25 = (char *)Root;
  a3->LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
  a3->LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(Root + 80));
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( *((__int64 *)v7 + 4) >= 0 )
  {
    if ( (v7[25] & 1) != 0 )
    {
      v31 = v7[-16 * (unsigned __int8)v7[24] + 195];
      if ( v31 > 15 )
        v31 = 15;
      v32 = ($364E67799B1CB15A9225EAEEE10EC12F *)(Root + 64);
      v7[48] = v31;
      ParentValue = (_RTL_BALANCED_NODE *)v32[1].ParentValue;
      if ( ((unsigned __int8)ParentValue & 1) != 0 )
      {
        if ( v32->ParentValue )
          v3 = v32->ParentValue ^ (unsigned __int64)v32;
      }
      else
      {
        v3 = v32->ParentValue;
      }
      v34 = 0;
      v35 = (unsigned __int8)ParentValue & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) < v31 )
          {
            v36 = *(_QWORD *)v3;
            if ( v35 )
            {
              if ( !v36 )
                goto LABEL_77;
              v36 ^= v3;
            }
            if ( !v36 )
              goto LABEL_77;
          }
          else
          {
            v36 = *(_QWORD *)(v3 + 8);
            if ( v35 )
            {
              if ( !v36 )
                goto LABEL_70;
              v36 ^= v3;
            }
            if ( !v36 )
              goto LABEL_70;
          }
          v3 = v36;
        }
      }
    }
    else
    {
      v37 = KiAbOwnerComputeCpuPriorityKey(v7, v28, v29, v30);
      v32 = ($364E67799B1CB15A9225EAEEE10EC12F *)(Root + 48);
      v7[48] = v37;
      v38 = v37;
      v39 = (_RTL_BALANCED_NODE *)v32[1].ParentValue;
      if ( ((unsigned __int8)v39 & 1) != 0 )
      {
        if ( v32->ParentValue )
          v3 = v32->ParentValue ^ (unsigned __int64)v32;
      }
      else
      {
        v3 = v32->ParentValue;
      }
      v34 = 0;
      v40 = (unsigned __int8)v39 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) > v38 )
          {
            v41 = *(_QWORD *)v3;
            if ( v40 )
            {
              if ( !v41 )
                goto LABEL_77;
              v41 ^= v3;
            }
            if ( !v41 )
            {
LABEL_77:
              v34 = 0;
              break;
            }
          }
          else
          {
            v41 = *(_QWORD *)(v3 + 8);
            if ( v40 )
            {
              if ( !v41 )
                goto LABEL_70;
              v41 ^= v3;
            }
            if ( !v41 )
            {
LABEL_70:
              v34 = 1;
              break;
            }
          }
          v3 = v41;
        }
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)v32, (PRTL_BALANCED_NODE)v3, v34, (PRTL_BALANCED_NODE)v7);
    v7[39] |= 0x80u;
    goto LABEL_49;
  }
  return v25;
}
