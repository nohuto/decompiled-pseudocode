/*
 * XREFs of MiChargeSegmentCommit @ 0x14066ED20
 * Callers:
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x14066EC04 (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x1406D4480 (MmCommitSessionMappedView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiReadPteShadow @ 0x14004B430 (MiReadPteShadow.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiMakeDemandZeroPte @ 0x140076358 (MiMakeDemandZeroPte.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1400A913C (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetControlAreaPartition @ 0x1400A9178 (MiGetControlAreaPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateControlAreaCommitCount @ 0x1400E0358 (MiUpdateControlAreaCommitCount.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiGetSubsectionCharges @ 0x1402DE9C8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DEBE8 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x14066FD8C (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 ControlAreaPartition; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rsi
  __int64 v12; // r9
  volatile signed __int64 *v13; // r15
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 updated; // rax
  __int64 v30; // r9
  char v31; // r11
  unsigned int *v32; // [rsp+20h] [rbp-68h]
  _QWORD *v33; // [rsp+28h] [rbp-60h]
  _QWORD *v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+90h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+98h] [rbp+10h]
  __int64 v38; // [rsp+A0h] [rbp+18h]
  __int64 v39; // [rsp+A8h] [rbp+20h]

  v36 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v35 = (_QWORD *)*a1;
  v39 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v38 = ControlAreaPartition;
  v9 = a2;
  v33 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v32 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v36);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v36;
    }
    v21 = v15 + 1;
    if ( PteShadow )
      v21 = v15;
    ++v17;
    ++v9;
    v15 = v21;
    if ( v17 == a3 )
      break;
    if ( v9 == v11 )
    {
      v16 = *(_QWORD *)(v16 + 16);
      v36 = v16;
      v9 = *(__int64 **)(v16 + 8);
      v11 = &v9[*(unsigned int *)(v16 + 44)];
    }
  }
  if ( !v21 )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      goto LABEL_24;
    goto LABEL_12;
  }
  if ( !(unsigned int)MiChargeCommit(v38, v21, 0) )
  {
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
    {
LABEL_27:
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      return 0LL;
    }
LABEL_26:
    ExfTryToWakePushLock(v13);
    goto LABEL_27;
  }
  if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v36, v15) < 0 )
  {
    MiReturnCommit(v38, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_27;
    goto LABEL_26;
  }
  MiMakeDemandZeroPte((*(_BYTE *)(v39 + 14) >> 1) & 0x1F, v23, v24, v25);
  v26 = a1;
  v27 = *v33 + 8LL * *v32;
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
      goto LABEL_19;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_18;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v31 & 1) != 0 )
      {
        v28 |= v30;
      }
LABEL_18:
      *a2 = v28;
      goto LABEL_19;
    }
    if ( !HIBYTE(word_140465BEC) && (v31 & 1) != 0 )
      v28 |= v30;
    *a2 = v28;
    MiWritePteShadow((__int64)a2);
LABEL_19:
    ++v14;
    ++a2;
    if ( v14 == a3 )
      break;
    if ( a2 == (__int64 *)v27 )
    {
      v26 = (__int64 *)v26[2];
      a2 = (__int64 *)v26[1];
      v27 = (__int64)&a2[*((unsigned int *)v26 + 11)];
    }
  }
  MiUpdateProcessSharedCommit(v35, v15);
  updated = MiUpdateControlAreaCommitCount((__int64)v35, v15);
  if ( SubsectionCrossPartitionReferences && !updated )
    MiReturnCrossPartitionSectionCharges(v38, 0, v15);
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_24:
    ExfTryToWakePushLock(v13);
LABEL_12:
  KeAbPostRelease((ULONG_PTR)v13);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 1LL;
}
