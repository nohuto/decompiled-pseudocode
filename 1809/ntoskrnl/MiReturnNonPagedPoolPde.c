/*
 * XREFs of MiReturnNonPagedPoolPde @ 0x1401617A0
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x140161734 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MiNonPagedPoolToNode @ 0x1400261A4 (MiNonPagedPoolToNode.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MmFreePoolMemory @ 0x14007BD48 (MmFreePoolMemory.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCountSystemPool @ 0x1401B4F60 (MiCountSystemPool.c)
 *     MiJoinBitmapPages @ 0x1402B50B0 (MiJoinBitmapPages.c)
 */

__int64 __fastcall MiReturnNonPagedPoolPde(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  _SLIST_HEADER *v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // r12
  __int64 v10; // r9
  unsigned __int64 valid; // r13
  __int64 v12; // rbx
  volatile signed __int32 *SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // r9
  __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  unsigned __int64 *v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 i; // rax
  ULONG_PTR v26; // r11
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v32; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v33[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int8 v34; // [rsp+38h] [rbp-50h]
  ULONG_PTR v35; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+10h]
  int v37; // [rsp+A0h] [rbp+18h]
  ULONG_PTR v38; // [rsp+A8h] [rbp+20h] BYREF

  v37 = a3;
  v35 = a1;
  v5 = &qword_14043B118[25 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v6 = (a1 - v5[20].Alignment) >> 12;
  v36 = v6 & 0xFFFFFFFFFFFFFE00uLL;
  v7 = v5[23].Region + 8 * (((v6 + a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) >> 6);
  v8 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v9 = 0LL;
  LOBYTE(v37) = MiLockWorkingSetShared((__int64)&unk_14043C690);
  valid = MiLockLowestValidPageTable((__int64)&unk_14043C690, v8, &v32, v10);
  if ( valid == ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v12 = MI_READ_PTE_LOCK_FREE(v8);
  }
  else
  {
    MiUnlockPageTableInternal((__int64)&unk_14043C690, valid);
    MiUnlockWorkingSetShared((__int64)&unk_14043C690, v37);
    valid = 0LL;
    v12 = 0LL;
  }
  v33[0] = 0LL;
  v33[1] = (volatile signed __int64 *)&v5[19];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    _InterlockedOr(SchedulerAssist, 0x10000u);
  }
  v34 = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)v33, (volatile __int64 *)&v5[19], (__int64)SchedulerAssist);
  RtlClearBitsEx((__int64)&v5[23], v6, a2);
  v15 = 1LL;
  if ( (v12 & 0x81) == 0x81 )
  {
    v16 = a2;
    v17 = (v6 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v18 = (v6 + a2) & 0xFFFFFFFFFFFFFE00uLL;
    if ( v18 > v17 )
      v16 = a2 + v17 - v18;
    v5[18].Alignment -= v16;
    v15 = 0LL;
  }
  v5[17].Alignment -= a2;
  MiCountSystemPool(0LL, a2, 0LL);
  v19 = v36;
  v20 = &v5->Alignment + v15;
  v21 = v15 + 21;
  v22 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v23 = -1LL;
  v24 = v36 >> 9;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 -= 8LL;
    if ( *(_QWORD *)v7 )
    {
      v22 = v7 & 0xFFFFFFFFFFFFF000uLL;
      _bittestandreset64((signed __int64 *)v5[v21].Region, v24);
      if ( v19 < v20[48] )
        v20[48] = v19;
      goto LABEL_25;
    }
  }
  v26 = v5[20].Alignment + (v36 << 12);
  *(_QWORD *)v7 = -1LL;
  *(_QWORD *)(v7 + 8) = -1LL;
  *(_QWORD *)(v7 + 16) = -1LL;
  *(_QWORD *)(v7 + 24) = -1LL;
  *(_QWORD *)(v7 + 32) = -1LL;
  *(_QWORD *)(v7 + 40) = -1LL;
  *(_QWORD *)(v7 + 48) = -1LL;
  *(_QWORD *)(v7 + 56) = -1LL;
  v35 = v26;
  if ( (((_DWORD)v7 + 64) & 0xFFF) != 0 )
  {
    v27 = v7 + 64;
    while ( !*(_QWORD *)v27 )
    {
      v27 += 8LL;
      if ( (v27 & 0xFFF) == 0 )
        goto LABEL_15;
    }
    v22 = v27 & 0xFFFFFFFFFFFFF000uLL;
  }
LABEL_15:
  v23 = v7;
  v28 = v7;
  if ( (v7 & 0xFFF) != 0 )
  {
    do
    {
      v23 = v28 - 8;
      v28 = v23;
      if ( *(_QWORD *)v23 )
        goto LABEL_17;
    }
    while ( (v23 & 0xFFF) != 0 );
    if ( *(_QWORD *)v23 )
LABEL_17:
      v23 = (v23 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  v9 = v26;
  _bittestandset64((signed __int64 *)v5[v21].Region, v24);
  if ( v12 )
  {
    if ( (v12 & 0x80u) != 0LL )
    {
      if ( v19 < v6 || (v20 = (unsigned __int64 *)(v6 + a2), v19 + 512 > v6 + a2) )
      {
        --v5[17].Region;
        v9 = v26;
      }
    }
  }
LABEL_25:
  if ( v22 > v23 )
    MiJoinBitmapPages(v20, v23, (v22 - v23) >> 12);
  KxReleaseQueuedSpinLock(v33);
  v29 = v34;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v29;
  __writecr8(v29);
  if ( valid )
  {
    MiUnlockPageTableInternal((__int64)&unk_14043C690, valid);
    result = MiUnlockWorkingSetShared((__int64)&unk_14043C690, v37);
  }
  if ( v9 )
  {
    v35 &= 0xFFFFFFFFFFE00000uLL;
    v38 = 0x200000LL;
    return MmFreePoolMemory(&v35, &v38);
  }
  return result;
}
