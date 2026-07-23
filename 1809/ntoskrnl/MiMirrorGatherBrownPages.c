/*
 * XREFs of MiMirrorGatherBrownPages @ 0x140152660
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiIsDecayPfn @ 0x140118C7C (MiIsDecayPfn.c)
 *     MiMirrorAddPagesToBrownList @ 0x1401528BC (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorNodeLargePages @ 0x140152CA8 (MiMirrorNodeLargePages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMirrorGatherBrownPages(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v8; // r12
  ULONG_PTR *v9; // rsi
  unsigned int v10; // r13d
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r14
  unsigned __int8 OldIrql; // bl
  __int64 *v14; // rdi
  __int64 i; // rcx
  _QWORD *v16; // rbx
  __int64 j; // rcx
  unsigned __int8 v18; // bl
  __int64 result; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v24; // rbx
  struct _KPRCB *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v4 = a3;
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
      if ( *v9 != qword_14043F870 )
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
            v20 = v12[2];
            if ( qword_14043B180 && (v20 & 0x10) == 0 )
              v20 &= ~qword_14043B180;
            v21 = (v20 >> 12) & 0xFFFFFFFFFLL;
            if ( v21 != v11 )
            {
              do
              {
                v22 = (_QWORD *)(48 * v21 - 0x58000000000LL);
                MiMirrorAddPagesToBrownList(v21, 1LL);
                v21 = *v22 & 0xFFFFFFFFFLL;
              }
              while ( v21 != v11 );
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
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      if ( ++v7 >= dword_14043B14C )
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
  KeAcquireInStackQueuedSpinLock(&qword_14043F820, &LockHandle);
  v14 = (__int64 *)&unk_14043E4D0;
  do
  {
    for ( i = *v14; i != 0xFFFFFFFFFLL; i = *v16 & 0xFFFFFFFFFLL )
    {
      v16 = (_QWORD *)(48 * i - 0x58000000000LL);
      MiMirrorAddPagesToBrownList(i, 1LL);
    }
    v14 += 5;
    --v8;
  }
  while ( v8 );
  for ( j = qword_14043E490; j != 0xFFFFFFFFFLL; j = *v24 & 0xFFFFFFFFFLL )
  {
    v24 = (_QWORD *)(48 * j - 0x58000000000LL);
    MiMirrorAddPagesToBrownList(j, 1LL);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v18 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  result = v18;
  __writecr8(v18);
  return result;
}
