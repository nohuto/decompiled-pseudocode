/*
 * XREFs of MiProbeAndLockPrepare @ 0x1400CD110
 * Callers:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1400DE3F0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140158140 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProbeAndLockPrepare(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  int v8; // r8d
  unsigned __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  int v20; // ebp
  unsigned int v21; // edx
  char *v22; // rdi
  unsigned __int8 v23; // al
  LONG *v24; // rdi
  unsigned __int8 v25; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v28; // ett
  unsigned __int8 CurrentIrql; // dl
  int v30; // ecx
  unsigned int v32; // edx
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned int v36; // edx
  _DWORD *v37; // rcx
  unsigned int v38; // edx
  char *v39; // rax
  int v40; // edx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  int v44; // ecx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  unsigned int v47; // edi
  int v48; // edx
  unsigned __int64 SessionVm; // rax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // [rsp+68h] [rbp+20h] BYREF

  v8 = a6;
  v10 = a3 + a4;
  *(_QWORD *)(a1 + 72) = KeGetCurrentThread();
  v11 = a5 == 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 88) = v8;
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = v10;
  if ( !v11 && (v10 > 0x7FFFFFFF0000LL || a3 >= v10) )
  {
    ++dword_140465FB8;
    return 3221225477LL;
  }
  v12 = *(unsigned int *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a2 + 48;
  v13 = ((a3 & 0xFFF) + v12 + 4095) >> 12;
  v14 = v10 - 1;
  *(_QWORD *)(a1 + 16) = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 24) = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFFFLL;
  v15 = *(_WORD *)(a2 + 10);
  v16 = v15 | 0x80;
  v17 = v15 & 0xFF7F;
  if ( v8 )
    v17 = v16;
  *(_WORD *)(a2 + 10) = v17 | 2;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( *(_QWORD *)a1 >= 0x7FFFFFFF0000uLL )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 184LL);
    *(_QWORD *)(a1 + 80) = v18;
    *(_QWORD *)(a2 + 16) = v18;
    if ( v8 == 3 )
    {
      v41 = MiObtainReferencedVadEx(*(_QWORD *)a1, 0, (int *)&v52);
      v42 = v41;
      if ( !v41 )
        return v52;
      if ( (unsigned int)MiVadPureReserve(v41)
        || (v43 = *(unsigned int *)(v42 + 52),
            LODWORD(v43) = v43 & 0x7FFFFFFF,
            (v43 | ((unsigned __int64)*(unsigned __int8 *)(v42 + 34) << 31)) >= 0x7FFFFFFFDLL)
        || (v44 = *(_DWORD *)(v42 + 48), (v44 & 0x70) == 0x10)
        || (v44 & 0x100000) == 0 && (v44 & 0x70) != 0x20 )
      {
        MiUnlockAndDereferenceVad((char *)v42);
        return 3221225477LL;
      }
      v45 = (*(unsigned int *)(v42 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v42 + 32) << 32)) << 12;
      if ( a3 < v45
        || (v46 = ((*(unsigned int *)(v42 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v42 + 33) << 32)) << 12) | 0xFFF,
            a3 > v46)
        || v14 < v45
        || v14 > v46 )
      {
        MiUnlockAndDereferenceVad((char *)v42);
        return 3221225496LL;
      }
      v52 = MiChargeFullProcessCommitment(*(_QWORD *)(a1 + 80), v13);
      v47 = v52;
      if ( (v52 & 0x80000000) != 0 )
      {
        MiUnlockAndDereferenceVad((char *)v42);
        return v47;
      }
      *(_QWORD *)(a1 + 120) = v42;
      *(_QWORD *)(a1 + 112) = v13;
    }
    if ( a7 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 80) + 936LL), v13);
  }
  v19 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v19 >= 0xFFFF800000000000uLL )
    v20 = byte_140467140[((v19 >> 39) & 0x1FF) - 256];
  else
    v20 = 0;
  if ( v19 >= 0x7FFFFFFF0000LL )
  {
    if ( v20 == 1 )
    {
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 8;
      SessionVm = MiGetSessionVm();
      *(_QWORD *)(a1 + 96) = SessionVm;
      v22 = (char *)SessionVm;
      goto LABEL_14;
    }
    if ( v20 == 6 )
    {
      v22 = (char *)&unk_140466A00;
      v32 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF3;
      *(_QWORD *)(a1 + 96) = &unk_140466A00;
      v21 = v32 | 3;
    }
    else
    {
      switch ( v20 )
      {
        case 8:
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
          v21 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 2;
          break;
        case 5:
          v22 = MiGetAnyMultiplexedVm(5);
          v38 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF4;
          *(_QWORD *)(a1 + 96) = v22;
          v21 = v38 | 4;
          goto LABEL_14;
        case 12:
          v22 = MiGetAnyMultiplexedVm(1);
          v36 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF6;
          *(_QWORD *)(a1 + 96) = v22;
          v21 = v36 | 6;
          goto LABEL_14;
        case 14:
          v39 = MiGetAnyMultiplexedVm(4);
          *(_QWORD *)(a1 + 96) = v39;
          v21 = v40 & 0xFFFFFFF0 | 7;
          v22 = v39;
          goto LABEL_14;
        default:
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
          v21 = v48 & 0xFFFFFFF0 | 5;
          break;
      }
      *(_QWORD *)(a1 + 96) = AnyMultiplexedVm;
      v22 = AnyMultiplexedVm;
    }
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 64) & 0xFFFFFFF0 | 1;
    v22 = (char *)(*(_QWORD *)(a1 + 80) + 1280LL);
    *(_QWORD *)(a1 + 96) = v22;
  }
LABEL_14:
  *(_DWORD *)(a1 + 64) = v21 & 0xFFFFFFCF;
  v23 = v22[184] & 7;
  if ( v23 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v23 == 2 )
      v24 = &dword_140466F00;
    else
      v24 = (LONG *)(v22 + 192);
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v24, v25);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v50 = SchedulerAssist[5];
          SchedulerAssist[5] = v50 + 1;
          if ( v50 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v24);
      v28 = *v24 & 0x7FFFFFFF;
      if ( v28 != _InterlockedCompareExchange(v24, v28 + 1, v28) )
      {
        v37 = CurrentPrcb->SchedulerAssist;
        if ( v37 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v51 = v37[5] - 1;
            v37[5] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v24, v25);
      }
    }
    if ( v24[1] )
      _InterlockedExchange(v24 + 1, 0);
    CurrentIrql = v25;
  }
  v30 = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 68) = CurrentIrql;
  if ( (v30 & 0xF) == 1 && *(_QWORD *)(*(_QWORD *)(a1 + 80) + 920LL) )
    *(_DWORD *)(a1 + 64) = v30 | 0x10;
  if ( v20 == 8 )
  {
    v34 = *(_QWORD *)(MiGetSystemCacheReverseMap(v19) + 24);
    v35 = v34 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v34 & 1) == 0 )
      v35 = v34;
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v35 + 60LL) & 0x3FF)) + 0x2000LL;
  }
  return 0LL;
}
