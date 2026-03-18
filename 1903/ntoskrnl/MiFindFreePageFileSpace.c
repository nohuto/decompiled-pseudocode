/*
 * XREFs of MiFindFreePageFileSpace @ 0x1400F0E24
 * Callers:
 *     MiReservePageFileSpace @ 0x14002F390 (MiReservePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x1400F15E0 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x14014D6C0 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402CED10 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406F6734 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiTransferSoftwarePte @ 0x1400DBA04 (MiTransferSoftwarePte.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F11C8 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400F1450 (MiPageFileLargestBitmapsRun.c)
 *     MiCheckHintedPageFileSpace @ 0x1400F1554 (MiCheckHintedPageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x14014D480 (MiSetPageFileAllocationBits.c)
 *     MiRescanPagefileBitmaps @ 0x140192CB4 (MiRescanPagefileBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindFreePageFileSpaceForward @ 0x1402CE260 (MiFindFreePageFileSpaceForward.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  __int64 *v13; // r14
  __int64 v14; // r12
  __int16 v15; // cx
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // r14d
  unsigned __int8 OldIrql; // di
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // bl
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  int FreePageFileSpaceForward; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v35; // rcx
  int v36; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v39; // [rsp+A0h] [rbp+50h]

  v39 = a3;
  v4 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a3;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  LODWORD(v8) = -1;
  if ( (a4 & 0x10) != 0 )
    goto LABEL_116;
  v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 7904);
  if ( (a4 & 0x65) == 1
    && (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1
                                                           + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4)
                                                           + 7904)) < a3 )
  {
    v4 |= 0x10u;
  }
  else
  {
    v28 = *a2;
    if ( qword_140465B00 && (v28 & 0x10) == 0 )
      v28 &= ~qword_140465B00;
    v8 = HIDWORD(v28);
  }
  if ( (v4 & 0x10) != 0 )
  {
LABEL_116:
    v9 = *(_QWORD *)(a1 + 7904);
    v10 = MiPageFileLargestBitmapsRun(v9);
    v11 = *(_DWORD *)(a1 + 7896);
    v12 = v10;
    if ( v11 > 1 )
    {
      v13 = (__int64 *)(a1 + 7912);
      v14 = v11 - 1;
      while ( 1 )
      {
        v15 = *(_WORD *)(v9 + 204);
        v16 = *v13;
        if ( (v15 & 0x10) != 0 && (*(_BYTE *)(v16 + 204) & 0x10) == 0
          || (v15 & 0x20) != 0 && (*(_BYTE *)(v16 + 204) & 0x20) == 0 )
        {
          v9 = *v13;
          v31 = MiPageFileLargestBitmapsRun(*v13);
        }
        else
        {
          if ( (*(_WORD *)(v16 + 204) & 0x30) != 0 )
            goto LABEL_8;
          v31 = MiPageFileLargestBitmapsRun(*v13);
          v36 = v31;
          if ( v31 <= v12 )
            goto LABEL_8;
          v9 = v16;
        }
        v12 = v31;
LABEL_8:
        ++v13;
        if ( !--v14 )
        {
          v5 = v39;
          break;
        }
      }
    }
  }
  v17 = 0LL;
  if ( (v4 & 4) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  if ( (*(_BYTE *)(v9 + 207) & 1) != 0 )
    goto LABEL_73;
  if ( (_DWORD)v8 != -1 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(*(_QWORD *)(v9 + 112) + 24LL) )
    {
      if ( (v4 & 0x48) != 0 )
        goto LABEL_73;
    }
    else
    {
      v23 = (unsigned int)MiCheckHintedPageFileSpace(v9, (unsigned int)v8, (unsigned int)v5, v4);
      if ( v23 == v5 || (v4 & 0x40) != 0 )
      {
        v36 = v8;
LABEL_39:
        if ( !(_DWORD)v23 )
          goto LABEL_73;
        v24 = 0;
        if ( (v4 & 1) != 0 )
        {
          v24 = 2;
          RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 112) + 24LL), v8, v23);
          *(_QWORD *)(v9 + 48) -= (unsigned int)v23;
        }
        if ( (v4 & 2) != 0 )
        {
          v24 |= 1u;
          MiSetPageFileAllocationBits(v9, (unsigned int)v8, (unsigned int)v23);
        }
        if ( v24 )
          MiInvalidatePageFileBitmapsCache(v9, (unsigned int)v8, (unsigned int)v23, v17);
        if ( (v4 & 4) == 0 )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            LODWORD(v8) = v36;
          }
          __writecr8(OldIrql);
        }
        *a2 = MiTransferSoftwarePte(*a2, v9, v8);
        return (unsigned int)v23;
      }
    }
  }
  if ( (v4 & 8) != 0 )
  {
    v36 = v8;
    FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v36, (unsigned int)v5, v4);
    LODWORD(v8) = v36;
    LODWORD(v23) = FreePageFileSpaceForward;
    goto LABEL_39;
  }
  v18 = (unsigned __int64 *)(v9 + 144);
  while ( 2 )
  {
    v19 = *v18;
    if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v19 )
      v19 ^= (unsigned __int64)v18;
    v20 = *(_BYTE *)(v9 + 152) & 1;
    v17 = 0LL;
    while ( 1 )
    {
      if ( !v19 )
        goto LABEL_37;
      if ( (unsigned int)v5 < *(_DWORD *)(v19 + 52) )
        goto LABEL_50;
      if ( (unsigned int)v5 <= *(_DWORD *)(v19 + 52) )
        break;
      v27 = *(_QWORD *)(v19 + 8);
LABEL_51:
      if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v27 )
        v19 ^= v27;
      else
        v19 = v27;
    }
    if ( *(_DWORD *)(v19 + 48) )
    {
LABEL_50:
      v27 = *(_QWORD *)v19;
      v17 = v19;
      goto LABEL_51;
    }
    v21 = *(_QWORD *)v19;
    v17 = v19;
    if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v21 )
      v21 ^= v19;
    a3 = 0LL;
    if ( v21 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v5 < *(_DWORD *)(v21 + 52) )
          goto LABEL_31;
        if ( (unsigned int)v5 <= *(_DWORD *)(v21 + 52) )
          break;
        v22 = *(_QWORD *)(v21 + 8);
LABEL_32:
        if ( (*(_BYTE *)(v9 + 152) & 1) != 0 && v22 )
          v21 ^= v22;
        else
          v21 = v22;
        if ( !v21 )
        {
          if ( a3 )
            v17 = a3;
          goto LABEL_37;
        }
      }
      if ( !*(_DWORD *)(v21 + 48) )
        a3 = v21;
LABEL_31:
      v22 = *(_QWORD *)v21;
      goto LABEL_32;
    }
LABEL_37:
    if ( *(_DWORD *)(v17 + 52) != -1 )
    {
LABEL_38:
      LODWORD(v8) = *(_DWORD *)(v17 + 48);
      LODWORD(v23) = v5;
      v36 = v8;
      goto LABEL_39;
    }
    v30 = *(unsigned int *)(v9 + 140);
    if ( v30 >= v5 && (unsigned int)v30 >= 0x20 )
    {
LABEL_79:
      MiRescanPagefileBitmaps(v9, v20, a3);
      continue;
    }
    break;
  }
  if ( (v4 & 0x80u) == 0 )
  {
    v32 = *(_QWORD *)v17;
    v20 = v17;
    if ( *(_QWORD *)v17 )
    {
      while ( 1 )
      {
        v17 = v32;
        if ( !*(_QWORD *)(v32 + 8) )
          break;
        v32 = *(_QWORD *)(v32 + 8);
      }
    }
    else
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 || *(_QWORD *)(v17 + 8) == v20 )
          break;
        v20 = v17;
      }
    }
    if ( v17 )
    {
      if ( (unsigned int)v30 > *(_DWORD *)(v17 + 52) && (unsigned int)v30 >= 0x20 )
        goto LABEL_79;
      LODWORD(v5) = *(_DWORD *)(v17 + 52);
      goto LABEL_38;
    }
    if ( (unsigned int)v30 >= 0x20 )
      goto LABEL_79;
  }
LABEL_73:
  if ( (v4 & 4) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v29 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v35 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v35->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v35);
    }
    __writecr8(v29);
  }
  return 0LL;
}
