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

__int64 __fastcall KiAbEntryGetLockedHeadEntry(__int64 a1, int a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // r14
  bool v4; // zf
  __int64 v7; // rsi
  int v8; // r12d
  unsigned __int64 v9; // rcx
  volatile LONG *v10; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // edx
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  signed __int32 v18; // edx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // cl
  __int64 *v32; // rbx
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  char v36; // al
  char v37; // cl
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  signed __int32 v41; // eax
  unsigned __int64 v42; // [rsp+20h] [rbp-78h] BYREF
  int v43; // [rsp+28h] [rbp-70h]
  int v44; // [rsp+2Ch] [rbp-6Ch]
  __int128 v45; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v50; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = (*(_BYTE *)(a1 + 27) & 1) == 0;
  v44 = 0;
  v7 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v4 )
  {
    a3->LockQueue.Next = 0LL;
    a3->LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 80);
    KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(a1 + 80));
    if ( (*(_BYTE *)(v7 + 27) & 1) != 0 )
      return v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  }
  v45 = *(_OWORD *)(v7 + 32);
  if ( (__int64)v45 >= 0 && !a2 )
    return 0LL;
  v8 = 0;
  v42 = v45 & 0x7FFFFFFFFFFFFFFCLL;
  v9 = ((((unsigned __int64)v45 & 0x7FFFFFFFFFFFFFFCLL) >> 4) & 0x3FF) << 6;
  v43 = DWORD2(v45);
  v10 = (volatile LONG *)((char *)&KiAbTreeArray + v9 + 16);
  v11 = (unsigned __int64)&KiAbTreeArray + v9;
  while ( 1 )
  {
    if ( v8 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v10);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v10);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)v11;
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        v13 ^= v11;
      else
        v13 = 0LL;
    }
    v14 = v12 & 1;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL;
        if ( v15 < v42 )
          goto LABEL_37;
        if ( v15 > v42 )
          goto LABEL_16;
        v16 = *(_DWORD *)(v13 + 40);
        if ( v16 == DWORD2(v45) )
          goto LABEL_19;
        if ( v16 < DWORD2(v45) )
        {
LABEL_37:
          v17 = *(_QWORD *)(v13 + 8);
          if ( v14 && v17 )
          {
LABEL_41:
            v13 ^= v17;
            goto LABEL_18;
          }
        }
        else
        {
LABEL_16:
          v17 = *(_QWORD *)v13;
          if ( v14 && v17 )
            goto LABEL_41;
        }
        v13 = v17;
LABEL_18:
        if ( !v13 )
        {
LABEL_19:
          v7 = a1;
          break;
        }
      }
    }
    if ( !a2 )
    {
      if ( v13 )
      {
        v25 = v13;
        a3->LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 80);
        a3->LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(v13 + 80));
        if ( v8 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        else
          ExReleaseSpinLockSharedFromDpcLevel(v10);
        if ( v7 == v13 )
          return v25;
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 80));
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (unsigned int)KiAbCompareSnappedEntryState(v7, &v42) )
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
    if ( v13 )
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
      v50 = 0;
      if ( v19 != -2147483647 )
      {
        do
        {
          if ( (v18 & 0x40000000) == 0 )
          {
            v41 = _InterlockedCompareExchange(v10, v18 | 0x40000000, v18);
            v4 = v18 == v41;
            v18 = v41;
            if ( !v4 )
              continue;
          }
          KeYieldProcessorEx(&v50);
          v18 = *v10;
        }
        while ( (v18 & 0xBFFFFFFF) != 0x80000001 );
      }
LABEL_26:
      v20 = *(_QWORD *)v11;
      if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
      {
        if ( v20 )
          v20 ^= v11;
        else
          v20 = 0LL;
      }
      v21 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL;
          if ( v22 < v42 || v22 <= v42 && ((v23 = *(_DWORD *)(v20 + 40), v23 == DWORD2(v45)) || v23 < DWORD2(v45)) )
          {
            v24 = *(_QWORD *)(v20 + 8);
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_46;
              v24 ^= v20;
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
            v24 = *(_QWORD *)v20;
            if ( (*(_QWORD *)(v11 + 8) & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_47;
              v24 ^= v20;
            }
            if ( !v24 )
            {
LABEL_47:
              v21 = 0;
              break;
            }
          }
          v20 = v24;
        }
      }
      RtlRbInsertNodeEx(v11, v20, v21, v7);
      v25 = v7;
      a3->LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 80);
      a3->LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(v7 + 80));
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      *(_BYTE *)(v7 + 39) |= 0x80u;
      *(_BYTE *)(v7 + 27) |= 1u;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_QWORD *)(v7 + 56) = 0LL;
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_QWORD *)(v7 + 72) = 0LL;
      *(_WORD *)(v7 + 90) &= 1u;
LABEL_49:
      v26 = v7 - 16LL * *(unsigned __int8 *)(v7 + 24);
      if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
        ++*(_BYTE *)(v26 + 793);
      else
        _InterlockedExchangeAdd8((volatile signed __int8 *)(v26 + 1423), 1u);
      return v25;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  }
  v25 = v13;
  a3->LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 80);
  a3->LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)a3, (volatile __int64 *)(v13 + 80));
  if ( v8 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( *(__int64 *)(v7 + 32) >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 25) & 1) != 0 )
    {
      v31 = *(_BYTE *)(v7 - 16LL * *(unsigned __int8 *)(v7 + 24) + 195);
      if ( v31 > 15 )
        v31 = 15;
      v32 = (__int64 *)(v13 + 64);
      *(_BYTE *)(v7 + 48) = v31;
      v33 = v32[1];
      if ( (v33 & 1) != 0 )
      {
        if ( *v32 )
          v3 = *v32 ^ (unsigned __int64)v32;
      }
      else
      {
        v3 = *v32;
      }
      LOBYTE(v29) = 0;
      v34 = v33 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) < v31 )
          {
            v35 = *(_QWORD *)v3;
            if ( v34 )
            {
              if ( !v35 )
                goto LABEL_77;
              v35 ^= v3;
            }
            if ( !v35 )
              goto LABEL_77;
          }
          else
          {
            v35 = *(_QWORD *)(v3 + 8);
            if ( v34 )
            {
              if ( !v35 )
                goto LABEL_70;
              v35 ^= v3;
            }
            if ( !v35 )
              goto LABEL_70;
          }
          v3 = v35;
        }
      }
    }
    else
    {
      v36 = KiAbOwnerComputeCpuPriorityKey(v7, v28, v29, v30);
      v32 = (__int64 *)(v13 + 48);
      *(_BYTE *)(v7 + 48) = v36;
      v37 = v36;
      v38 = v32[1];
      if ( (v38 & 1) != 0 )
      {
        if ( *v32 )
          v3 = *v32 ^ (unsigned __int64)v32;
      }
      else
      {
        v3 = *v32;
      }
      LOBYTE(v29) = 0;
      v39 = v38 & 1;
      if ( v3 )
      {
        while ( 1 )
        {
          if ( *(char *)(v3 + 48) > v37 )
          {
            v40 = *(_QWORD *)v3;
            if ( v39 )
            {
              if ( !v40 )
                goto LABEL_77;
              v40 ^= v3;
            }
            if ( !v40 )
            {
LABEL_77:
              LOBYTE(v29) = 0;
              break;
            }
          }
          else
          {
            v40 = *(_QWORD *)(v3 + 8);
            if ( v39 )
            {
              if ( !v40 )
                goto LABEL_70;
              v40 ^= v3;
            }
            if ( !v40 )
            {
LABEL_70:
              v29 = 1LL;
              break;
            }
          }
          v3 = v40;
        }
      }
    }
    RtlRbInsertNodeEx(v32, v3, v29, v7);
    *(_BYTE *)(v7 + 39) |= 0x80u;
    goto LABEL_49;
  }
  return v25;
}
