/*
 * XREFs of MiMirrorGatherBrownPages @ 0x140169CC8
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiIsDecayPfn @ 0x140123854 (MiIsDecayPfn.c)
 *     MiMirrorAddPagesToBrownList @ 0x140169F10 (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorNodeLargePages @ 0x14016A1A8 (MiMirrorNodeLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMirrorGatherBrownPages(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // r12
  ULONG_PTR *v9; // rsi
  unsigned int v10; // r13d
  ULONG_PTR v11; // rsi
  _QWORD *v12; // r14
  unsigned __int8 OldIrql; // bl
  __int64 *v14; // rdi
  __int64 i; // rcx
  __int64 j; // rcx
  unsigned __int8 v17; // bl
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // rbx
  struct _KPRCB *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1;
  v7 = 0;
  v8 = 16LL;
  if ( a3 <= 4LL )
  {
    while ( 1 )
    {
      v9 = (ULONG_PTR *)*(&MiSystemPartition + v4 + 519);
      v10 = a4;
      if ( v4 <= 1 )
        v9 = (ULONG_PTR *)(*(&MiSystemPartition + v4 + 264) + 40LL * v7);
      if ( v4 == 2 )
        v9 = &MiSystemPartition + 4 * a4 + a4 + 296;
      if ( v4 != 3 )
        goto LABEL_7;
      if ( *v9 != qword_14046A330 )
        break;
LABEL_19:
      if ( ++v4 > 4 )
        goto LABEL_20;
    }
    v9 = &MiSystemPartition + 4 * a4 + a4 + 424;
LABEL_7:
    KeAcquireInStackQueuedSpinLock(v9 + 4, &LockHandle);
    if ( *v9 )
    {
      v11 = v9[2];
      do
      {
        v12 = (_QWORD *)(48 * v11 - 0x58000000000LL);
        if ( !MiIsPfnFileOnly((__int64)v12) )
        {
          if ( v4 == 2 && MiIsDecayPfn(v11) )
          {
            v19 = v12[2];
            if ( qword_140465800 && (v19 & 0x10) == 0 )
              v19 &= ~qword_140465800;
            v20 = (v19 >> 12) & 0xFFFFFFFFFLL;
            if ( v20 != v11 )
            {
              do
              {
                v21 = (_QWORD *)(48 * v20 - 0x58000000000LL);
                MiMirrorAddPagesToBrownList(v20, 1LL);
                v20 = *v21 & 0xFFFFFFFFFLL;
              }
              while ( v20 != v11 );
              v8 = 16LL;
            }
          }
          else
          {
            MiMirrorAddPagesToBrownList(v11, 1LL);
          }
        }
        v11 = *v12 & 0xFFFFFFFFFLL;
      }
      while ( v11 != 0xFFFFFFFFFLL );
      v10 = a4;
      v6 = a1;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( v4 <= 1 )
    {
      if ( ++v7 >= dword_1404657B4 )
      {
        v7 = 0;
        if ( v4 == 1 )
          MiMirrorNodeLargePages(v6, &MiSystemPartition, 0LL);
      }
      else
      {
        --v4;
      }
    }
    else if ( v4 == 2 )
    {
      ++a4;
      if ( v10 == 7 )
        a4 = 0;
      else
        v4 = 1LL;
    }
    else if ( v4 == 3 && ++a4 != 16 )
    {
      v4 = 2LL;
    }
    goto LABEL_19;
  }
LABEL_20:
  KeAcquireInStackQueuedSpinLock(&qword_14046A2E0, &LockHandle);
  v14 = (__int64 *)&unk_140468C90;
  do
  {
    for ( i = *v14; i != 0xFFFFFFFFFLL; i = *v23 & 0xFFFFFFFFFLL )
    {
      v23 = (_QWORD *)(48 * i - 0x58000000000LL);
      MiMirrorAddPagesToBrownList(i, 1LL);
    }
    v14 += 5;
    --v8;
  }
  while ( v8 );
  for ( j = qword_140468C50; j != 0xFFFFFFFFFLL; j = *v24 & 0xFFFFFFFFFLL )
  {
    v24 = (_QWORD *)(48 * j - 0x58000000000LL);
    MiMirrorAddPagesToBrownList(j, 1LL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v17 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  result = v17;
  __writecr8(v17);
  return result;
}
