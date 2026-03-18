/*
 * XREFs of MiLargePageFreeToZero @ 0x14009FA50
 * Callers:
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiCheckCoalescePossible @ 0x14009FD80 (MiCheckCoalescePossible.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiArePageContentsZero @ 0x1402D905C (MiArePageContentsZero.c)
 */

void __fastcall MiLargePageFreeToZero(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, char a4)
{
  int v4; // ebp
  __int64 v5; // r15
  ULONG_PTR v8; // rbx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  int v19; // r10d
  __int64 v20; // r11
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r12
  ULONG_PTR v24; // rax
  __int64 v25; // r13
  ULONG_PTR v26; // rtt
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  ULONG_PTR *v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  ULONG_PTR v37; // r8
  volatile signed __int32 *v38; // rdx
  unsigned int v39; // r10d
  int v40; // r14d
  unsigned __int64 v41; // rcx
  _QWORD *v42; // rsi
  __int64 v43; // r10
  unsigned __int64 v44; // rsi
  volatile signed __int32 *v45; // r11
  unsigned int v46; // r10d
  unsigned __int64 v47; // rcx
  signed __int32 v48[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v49; // [rsp+20h] [rbp-68h]
  ULONG_PTR v50; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 v52; // [rsp+90h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v8 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v9 = MiLargePageSizes[a2];
  v10 = *(_QWORD *)(v8 + 40);
  v49 = v9;
  v11 = v10 >> 36;
  v52 = *(_QWORD *)(qword_140466188 + 8 * ((v10 >> 40) & 0x3FF));
  v12 = *(_QWORD *)(v52 + 16) + 1984 * (v10 >> 58);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v12 + 1952);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v36 = SchedulerAssist[5];
      SchedulerAssist[5] = v36 + 1;
      if ( v36 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v12 + 1952);
  }
  else
  {
    v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v12 + 1952), (__int64)&LockHandle);
    if ( v15 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v15);
  }
  *(_BYTE *)(v8 + 34) &= ~8u;
  v16 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v16 + 24) = 0LL;
  *(_BYTE *)(v16 + 69) = 1;
  *(_QWORD *)(v8 + 16) = MiSwizzleInvalidPte(128LL);
  if ( a4 )
  {
    if ( dword_14046620C == 1 )
    {
      v37 = BugCheckParameter2 & 0x1F;
      v38 = (volatile signed __int32 *)(qword_140466268 + 4 * (BugCheckParameter2 >> 5));
      if ( v37 + v18 > 0x20 )
      {
        if ( (BugCheckParameter2 & 0x1F) != 0 )
        {
          v40 = BugCheckParameter2 & 0x1F;
          _InterlockedOr(v38, ((1 << (32 - v40)) - 1) << v37);
          v18 -= (unsigned int)(32 - v40);
          ++v38;
        }
        if ( v18 >= 0x20 )
        {
          v41 = v18 >> 5;
          v18 += -32LL * (v18 >> 5);
          do
          {
            *v38++ = -1;
            --v41;
          }
          while ( v41 );
        }
        if ( !v18 )
          goto LABEL_45;
        v39 = (1 << v18) - 1;
      }
      else
      {
        if ( v18 == 32 )
        {
          *v38 = -1;
          goto LABEL_45;
        }
        v39 = ((1 << v18) - 1) << v37;
      }
      _InterlockedOr(v38, v39);
    }
LABEL_45:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return;
  }
  *(_BYTE *)(v12 + 1936) = 1;
  _InterlockedOr(v48, 0);
  v21 = *(_QWORD *)v8;
  v22 = *(_QWORD **)(v8 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v22 != v8 )
    goto LABEL_66;
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  if ( v19 )
  {
    *(_QWORD *)(v8 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v8 + 16), 4294967293LL, v17);
    if ( v8 + 48 < v8 + 48 * v18 )
    {
      v42 = (_QWORD *)(v8 + 64);
      do
      {
        *v42 = MiUpdatePageFileHighInPte(*v42, 4294967293LL, v17);
        v42 += 6;
      }
      while ( v43 != 1 );
    }
  }
  if ( (MiFlags & 0x80u) != 0 && (++dword_14046630C & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(BugCheckParameter2);
    v17 = v52;
    v20 = v5;
    v18 = v49;
  }
  v23 = v11 & 3;
  v24 = BugCheckParameter2 / MiLargePageSizes[v20];
  v25 = 34 * v20;
  --*(_QWORD *)(v12 + 272 * v20 + 8);
  v26 = v24;
  v27 = 22LL;
  v28 = 24 * (v26 % (unsigned int)dword_140465B40[v20]);
  if ( BugCheckParameter2 < 0x100000 )
    v27 = 30LL;
  v29 = *(_QWORD *)(v12 + 8 * (v25 + v23 + v27));
  --*(_QWORD *)(v28 + v29 + 16);
  v30 = 6LL;
  if ( BugCheckParameter2 < 0x100000 )
    v30 = 14LL;
  --*(_QWORD *)(v12 + 8 * (v25 + v23 + v30));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 2240), -(__int64)v18);
  if ( dword_14046620C != 1 )
    goto LABEL_15;
  v44 = v18;
  v45 = (volatile signed __int32 *)(qword_140466268 + 4 * (BugCheckParameter2 >> 5));
  v50 = BugCheckParameter2 & 0x1F;
  if ( v50 + v18 <= 0x20 )
  {
    if ( v18 == 32 )
    {
      *v45 = -1;
      goto LABEL_15;
    }
    v46 = ((1 << v18) - 1) << v50;
    goto LABEL_63;
  }
  if ( (BugCheckParameter2 & 0x1F) != 0 )
  {
    _InterlockedOr(v45, ((1 << (32 - (BugCheckParameter2 & 0x1F))) - 1) << v50);
    v44 = v18 - (32 - (unsigned int)(BugCheckParameter2 & 0x1F));
    ++v45;
  }
  if ( v44 >= 0x20 )
  {
    v47 = v44 >> 5;
    v44 += -32LL * (v44 >> 5);
    do
    {
      *v45++ = -1;
      --v47;
    }
    while ( v47 );
  }
  if ( v44 )
  {
    v46 = (1 << v44) - 1;
LABEL_63:
    _InterlockedOr(v45, v46);
  }
LABEL_15:
  *(_BYTE *)(v8 + 34) &= 0xF8u;
  v31 = 18LL;
  if ( BugCheckParameter2 < 0x100000 )
    v31 = 26LL;
  v32 = v28 + *(_QWORD *)(v12 + 8 * (v25 + v23 + v31));
  v33 = *(ULONG_PTR **)(v32 + 8);
  if ( (MiFlags & 0x30) != 0 )
  {
    if ( *v33 == v32 )
    {
      *(_QWORD *)v8 = v32;
      *(_QWORD *)(v8 + 8) = v33;
      *v33 = v8;
      *(_QWORD *)(v32 + 8) = v8;
      if ( (_DWORD)v5 && ((_DWORD)v5 != 1 || (KeFeatureBits & 0x2000000000LL) != 0) )
      {
        v34 = MiCheckCoalescePossible(BugCheckParameter2);
        v17 = v52;
        v4 = v34;
        v18 = v49;
      }
      goto LABEL_22;
    }
LABEL_66:
    __fastfail(3u);
  }
  if ( *v33 != v32 )
    goto LABEL_66;
  *(_QWORD *)v8 = v32;
  *(_QWORD *)(v8 + 8) = v33;
  *v33 = v8;
  *(_QWORD *)(v32 + 8) = v8;
LABEL_22:
  ++*(_QWORD *)(v32 + 16);
  v35 = 2LL;
  if ( BugCheckParameter2 < 0x100000 )
    v35 = 10LL;
  ++*(_QWORD *)(v12 + 8 * (v25 + v23 + v35));
  ++*(_QWORD *)(v12 + 8 * v25);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 2176), v18);
  *(_BYTE *)(v12 + 1936) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v4 )
    MiQueueLargeFreeZeroRebuild(
      v52,
      BugCheckParameter2 & ~(MiLargePageSizes[(unsigned int)(v5 - 1)] - 1),
      (unsigned int)(v5 - 1));
}
