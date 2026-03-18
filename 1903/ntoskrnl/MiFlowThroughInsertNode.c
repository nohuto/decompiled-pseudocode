/*
 * XREFs of MiFlowThroughInsertNode @ 0x14013C26C
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x1400A6290 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  unsigned int PagingFileOffset; // eax
  __int64 v9; // rbx
  unsigned __int64 *v10; // rbx
  _QWORD *v11; // r9
  bool v12; // r8
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v19 = v2;
  if ( (v2 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  else
  {
    PagingFileOffset = MiGetPagingFileOffset((unsigned __int64)&v19);
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140466188 + 8 * ((a2[5] >> 40) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 7904);
    *(_QWORD *)(a1 + 336) = v9;
    *(_QWORD *)(a1 + 344) = PagingFileOffset;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
    v10 = (unsigned __int64 *)(v9 + 248);
    v11 = (_QWORD *)(a1 + 352);
    v12 = 0;
    v13 = (_QWORD *)*v10;
    if ( *v10 )
    {
      v14 = *(_QWORD *)(a1 + 344);
      while ( 1 )
      {
        if ( v14 > *(v13 - 1) || v14 >= *(v13 - 1) && v11 > v13 )
        {
          v15 = (_QWORD *)v13[1];
          if ( !v15 )
          {
            v12 = 1;
            break;
          }
        }
        else
        {
          v15 = (_QWORD *)*v13;
          if ( !*v13 )
          {
            v12 = 0;
            break;
          }
        }
        v13 = v15;
      }
    }
    RtlAvlInsertNodeEx(v10, (unsigned __int64)v13, v12, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
