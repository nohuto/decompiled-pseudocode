/*
 * XREFs of MiFindFreePageFileSpace @ 0x14012420C
 * Callers:
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x140124104 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x140150D80 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402B8B60 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14085FE68 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x140124644 (MiInvalidatePageFileBitmapsCache.c)
 *     MiPageFileLargestBitmapsRun @ 0x140124908 (MiPageFileLargestBitmapsRun.c)
 *     MiCheckHintedPageFileSpace @ 0x140124A28 (MiCheckHintedPageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140150938 (MiSetPageFileAllocationBits.c)
 *     MiRescanPagefileBitmaps @ 0x1401881AC (MiRescanPagefileBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFindFreePageFileSpaceForward @ 0x1402B7FCC (MiFindFreePageFileSpaceForward.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 *v14; // r14
  __int64 v15; // r12
  __int16 v16; // cx
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v23; // rsi
  unsigned __int64 *v24; // rbx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  int FreePageFileSpaceForward; // eax
  int v35; // r14d
  unsigned __int8 v36; // di
  struct _KPRCB *v37; // rcx
  int v38; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v41; // [rsp+A0h] [rbp+50h]

  v41 = a3;
  v4 = a4;
  v5 = a3;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  LODWORD(v8) = -1;
  if ( (a4 & 0x10) != 0 )
    goto LABEL_110;
  v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4) + 7136);
  if ( (a4 & 0x65) == 1
    && (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1
                                                           + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)a2) >> 4)
                                                           + 7136)) < a3 )
  {
    v4 |= 0x10u;
  }
  else
  {
    v10 = *a2;
    if ( qword_14043B180 && (v10 & 0x10) == 0 )
      v10 &= ~qword_14043B180;
    v8 = HIDWORD(v10);
  }
  if ( (v4 & 0x10) != 0 )
  {
LABEL_110:
    v9 = *(_QWORD *)(a1 + 7136);
    v11 = MiPageFileLargestBitmapsRun(v9);
    v12 = *(_DWORD *)(a1 + 7128);
    v13 = v11;
    if ( v12 > 1 )
    {
      v14 = (__int64 *)(a1 + 7144);
      v15 = v12 - 1;
      while ( 1 )
      {
        v16 = *(_WORD *)(v9 + 204);
        v17 = *v14;
        if ( (v16 & 0x10) != 0 && (*(_BYTE *)(v17 + 204) & 0x10) == 0
          || (v16 & 0x20) != 0 && (*(_BYTE *)(v17 + 204) & 0x20) == 0 )
        {
          v9 = *v14;
          v18 = MiPageFileLargestBitmapsRun(*v14);
        }
        else
        {
          if ( (*(_WORD *)(v17 + 204) & 0x30) != 0 )
            goto LABEL_22;
          v18 = MiPageFileLargestBitmapsRun(*v14);
          v38 = v18;
          if ( v18 <= v13 )
            goto LABEL_22;
          v9 = v17;
        }
        v13 = v18;
LABEL_22:
        ++v14;
        if ( !--v15 )
        {
          v5 = v41;
          break;
        }
      }
    }
  }
  v19 = 0LL;
  if ( (v4 & 4) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  if ( (*(_BYTE *)(v9 + 207) & 1) != 0 )
  {
LABEL_30:
    if ( (v4 & 4) == 0 )
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
    return 0LL;
  }
  if ( (_DWORD)v8 != -1 )
  {
    if ( (unsigned int)v8 < *(_DWORD *)(*(_QWORD *)(v9 + 112) + 24LL) )
    {
      v23 = (unsigned int)MiCheckHintedPageFileSpace(v9, (unsigned int)v8, (unsigned int)v5, v4);
      if ( v23 == v5 || (v4 & 0x40) != 0 )
      {
        v38 = v8;
        goto LABEL_93;
      }
    }
    else if ( (v4 & 0x48) != 0 )
    {
      goto LABEL_30;
    }
  }
  if ( (v4 & 8) != 0 )
  {
    v38 = v8;
    FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v38, (unsigned int)v5, v4);
    LODWORD(v8) = v38;
    LODWORD(v23) = FreePageFileSpaceForward;
  }
  else
  {
    v24 = (unsigned __int64 *)(v9 + 144);
    while ( 2 )
    {
      v25 = *v24;
      if ( (*(_QWORD *)(v9 + 152) & 1) != 0 && v25 )
        v25 ^= (unsigned __int64)v24;
      v26 = *(_QWORD *)(v9 + 152) & 1LL;
      v19 = 0LL;
      while ( 1 )
      {
        if ( !v25 )
          goto LABEL_74;
        v27 = *(_DWORD *)(v25 + 52);
        if ( (unsigned int)v5 < v27 )
          goto LABEL_51;
        if ( (unsigned int)v5 <= v27 )
          break;
        v28 = *(_QWORD *)(v25 + 8);
LABEL_52:
        if ( (_DWORD)v26 && v28 )
          v25 ^= v28;
        else
          v25 = v28;
      }
      if ( *(_DWORD *)(v25 + 48) )
      {
LABEL_51:
        v28 = *(_QWORD *)v25;
        v19 = v25;
        goto LABEL_52;
      }
      v29 = *(_QWORD *)v25;
      v19 = v25;
      if ( (_DWORD)v26 && v29 )
        v29 ^= v25;
      a3 = 0LL;
      if ( v29 )
      {
        while ( 1 )
        {
          v30 = *(_DWORD *)(v29 + 52);
          if ( (unsigned int)v5 < v30 )
            goto LABEL_65;
          if ( (unsigned int)v5 <= v30 )
            break;
          v31 = *(_QWORD *)(v29 + 8);
LABEL_66:
          if ( (_DWORD)v26 && v31 )
            v29 ^= v31;
          else
            v29 = v31;
          if ( !v29 )
          {
            if ( a3 )
              v19 = a3;
            goto LABEL_74;
          }
        }
        if ( !*(_DWORD *)(v29 + 48) )
          a3 = v29;
LABEL_65:
        v31 = *(_QWORD *)v29;
        goto LABEL_66;
      }
LABEL_74:
      if ( *(_DWORD *)(v19 + 52) == -1 )
      {
        v32 = *(unsigned int *)(v9 + 140);
        if ( v32 >= v5 && (unsigned int)v32 >= 0x20 )
        {
LABEL_89:
          MiRescanPagefileBitmaps(v9, v26, a3);
          continue;
        }
        if ( (v4 & 0x80u) != 0 )
          goto LABEL_30;
        v33 = *(_QWORD *)v19;
        v26 = v19;
        if ( *(_QWORD *)v19 )
        {
          do
          {
            v19 = v33;
            v33 = *(_QWORD *)(v33 + 8);
          }
          while ( v33 );
        }
        else
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v19 || *(_QWORD *)(v19 + 8) == v26 )
              break;
            v26 = v19;
          }
        }
        if ( !v19 )
        {
          if ( (unsigned int)v32 >= 0x20 )
            goto LABEL_89;
          goto LABEL_30;
        }
        if ( (unsigned int)v32 > *(_DWORD *)(v19 + 52) && (unsigned int)v32 >= 0x20 )
          goto LABEL_89;
        LODWORD(v5) = *(_DWORD *)(v19 + 52);
      }
      break;
    }
    LODWORD(v8) = *(_DWORD *)(v19 + 48);
    LODWORD(v23) = v5;
    v38 = v8;
  }
LABEL_93:
  if ( !(_DWORD)v23 )
    goto LABEL_30;
  v35 = 0;
  if ( (v4 & 1) != 0 )
  {
    v35 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 112) + 24LL), v8, v23);
    *(_QWORD *)(v9 + 48) -= (unsigned int)v23;
  }
  if ( (v4 & 2) != 0 )
  {
    v35 |= 1u;
    MiSetPageFileAllocationBits(v9, (unsigned int)v8, (unsigned int)v23);
  }
  if ( v35 )
    MiInvalidatePageFileBitmapsCache(v9, (unsigned int)v8, (unsigned int)v23, v19);
  if ( (v4 & 4) == 0 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v36 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v37 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v37->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v37);
      LODWORD(v8) = v38;
    }
    __writecr8(v36);
  }
  *a2 = MiTransferSoftwarePte(*a2, v9, v8);
  return (unsigned int)v23;
}
