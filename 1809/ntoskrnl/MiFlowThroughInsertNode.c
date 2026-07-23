/*
 * XREFs of MiFlowThroughInsertNode @ 0x14010F660
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14002CB18 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v2; // bx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  unsigned int PagingFileOffset; // eax
  __int64 v9; // rbx
  unsigned __int64 *v10; // rbx
  _QWORD *v11; // r9
  bool v12; // r8
  _QWORD *v13; // rdx
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v20 = a2[2];
  v2 = v20;
  if ( (v20 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  else
  {
    PagingFileOffset = MiGetPagingFileOffset(&v20);
    v9 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8 * ((a2[5] >> 40) & 0x3FFLL)) + 8LL * (v2 >> 12) + 7136);
    *(_QWORD *)(a1 + 336) = v9;
    *(_QWORD *)(a1 + 344) = PagingFileOffset;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
    v10 = (unsigned __int64 *)(v9 + 248);
    v11 = (_QWORD *)(a1 + 352);
    v12 = 0;
    v13 = (_QWORD *)*v10;
    if ( *v10 )
    {
      v15 = *(_QWORD *)(a1 + 344);
      while ( 1 )
      {
        v16 = *(v13 - 1);
        if ( v15 > v16 || v15 >= v16 && v11 > v13 )
        {
          v17 = (_QWORD *)v13[1];
          if ( !v17 )
          {
            v12 = 1;
            break;
          }
        }
        else
        {
          v17 = (_QWORD *)*v13;
          if ( !*v13 )
          {
            v12 = 0;
            break;
          }
        }
        v13 = v17;
      }
    }
    RtlAvlInsertNodeEx(v10, (unsigned __int64)v13, v12, v11);
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
  *(_DWORD *)(a1 + 192) |= 0x10u;
  result = (_QWORD *)(a1 + 16);
  v6 = *a2 - 32LL;
  v7 = *(_QWORD **)(v6 + 24);
  if ( *v7 != v6 + 16 )
    __fastfail(3u);
  *result = v6 + 16;
  *(_QWORD *)(a1 + 24) = v7;
  *v7 = result;
  *(_QWORD *)(v6 + 24) = result;
  *(_QWORD *)(a1 + 328) = v6;
  return result;
}
