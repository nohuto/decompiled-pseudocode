/*
 * XREFs of IopRecordIoAttribution @ 0x140105924
 * Callers:
 *     IoDiskIoAttributionQuery @ 0x140105464 (IoDiskIoAttributionQuery.c)
 *     IoRecordIoAttribution @ 0x140105730 (IoRecordIoAttribution.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopRecordIoAttribution(KSPIN_LOCK *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  int v8; // r8d
  _QWORD *v9; // rdi
  KSPIN_LOCK v10; // rbp
  KSPIN_LOCK v11; // r13
  KSPIN_LOCK v12; // r15
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  KSPIN_LOCK v15; // rcx
  KSPIN_LOCK v16; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  v8 = 0;
  if ( (unsigned __int8)v5 == 3 )
  {
    v9 = a1 + 10;
LABEL_3:
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    v12 = 0LL;
    if ( (a3 & 2) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(a1 + 5, &LockHandle);
      v5 = *(_DWORD *)(a2 + 4);
      v8 = 1;
    }
    if ( (v5 & 0x100) != 0 )
    {
      v16 = a1[9];
      if ( !v16 || v10 < a1[8] )
        a1[8] = v10;
      a1[9] = v16 + 1;
      ++*v9;
    }
    else
    {
      if ( (a3 & 1) == 0 )
      {
        --a1[9];
        --*v9;
        v5 = *(_DWORD *)(a2 + 4);
      }
      if ( (v5 & 0x200) == 0 )
      {
        v13 = a1[6];
        v14 = *(_QWORD *)(a2 + 16);
        if ( v13 <= v14 )
          v13 = *(_QWORD *)(a2 + 16);
        if ( v10 >= v13 )
        {
          a1[6] = v10;
          v14 = *(_QWORD *)(a2 + 16);
          v11 = v10 - v13;
        }
        v10 = v14;
      }
      v15 = a1[7];
      if ( v15 <= a1[8] )
        v15 = a1[8];
      if ( v10 >= v15 )
      {
        a1[7] = v10;
        v12 = v10 - v15;
      }
      v9[1] += v12;
      if ( (*(_DWORD *)(a2 + 4) & 0x200) == 0 )
      {
        v9[2] += v11;
        v9[3] += *(unsigned int *)(a2 + 8);
        v9[4] += (IopDiskIoAttributionBaseIoSize + *(_DWORD *)(a2 + 8) - 1)
               / (unsigned int)IopDiskIoAttributionBaseIoSize;
      }
    }
    if ( v8 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
    }
    return v3;
  }
  if ( (unsigned __int8)v5 == 4 )
  {
    v9 = a1 + 15;
    goto LABEL_3;
  }
  if ( (a3 & 1) == 0 )
    return (unsigned int)-1073741637;
  v9 = a1 + 10;
  if ( a1[10] )
    goto LABEL_3;
  v9 = a1 + 15;
  if ( a1[15] )
    goto LABEL_3;
  return v3;
}
