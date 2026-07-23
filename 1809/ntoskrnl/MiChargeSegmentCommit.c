/*
 * XREFs of MiChargeSegmentCommit @ 0x14061F0D0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x14061EFB0 (MiCommitPagefileBackedSection.c)
 *     MmCommitSessionMappedView @ 0x14069EB80 (MmCommitSessionMappedView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReadPteShadow @ 0x14006C540 (MiReadPteShadow.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1400937CC (MiGetSubsectionCrossPartitionReferences.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095ED4 (MiUpdateControlAreaCommitCount.c)
 *     MiMakeDemandZeroPte @ 0x140097E20 (MiMakeDemandZeroPte.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiGetSubsectionCharges @ 0x1402C4C84 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x14061EF18 (MiUpdateProcessSharedCommit.c)
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
  __int64 *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 updated; // rax
  __int64 v28; // r9
  char v29; // r11
  unsigned int *v30; // [rsp+20h] [rbp-68h]
  _QWORD *v31; // [rsp+28h] [rbp-60h]
  _QWORD *v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+90h] [rbp+8h]
  int SubsectionCrossPartitionReferences; // [rsp+98h] [rbp+10h]
  __int64 v36; // [rsp+A0h] [rbp+18h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v34 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v33 = (_QWORD *)*a1;
  v37 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v8 = *(unsigned int *)(v7 + 44);
  v36 = ControlAreaPartition;
  v9 = a2;
  v31 = (_QWORD *)(v7 + 8);
  v10 = *(_QWORD *)(v7 + 8);
  --CurrentThread->SpecialApcDisable;
  v30 = (unsigned int *)(v7 + 44);
  v11 = (__int64 *)(v10 + 8 * v8);
  v13 = (volatile signed __int64 *)(v12 + 40);
  ExAcquirePushLockExclusiveEx(v12 + 40, 0LL);
  v14 = 0LL;
  v15 = 0LL;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v34);
  v18 = 0xFFFFF6FB7DBED000uLL;
  v19 = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    PteShadow = *v9;
    if ( (unsigned __int64)v9 >= v18 && (unsigned __int64)v9 <= v19 )
    {
      PteShadow = MiReadPteShadow((unsigned __int64)v9, *v9);
      v16 = v34;
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
      v34 = v16;
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
  if ( !(unsigned int)MiChargeCommit(v36, v21, 0) )
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
  if ( SubsectionCrossPartitionReferences && (int)MiGetSubsectionCharges(v34, v15) < 0 )
  {
    MiReturnCommit(v36, v15);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      goto LABEL_27;
    goto LABEL_26;
  }
  MiMakeDemandZeroPte((*(_BYTE *)(v37 + 14) >> 1) & 0x1F);
  v23 = a1;
  v24 = *v31 + 8LL * *v30;
  while ( 1 )
  {
    if ( MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
      goto LABEL_19;
    if ( !MiPteInShadowRange((unsigned __int64)a2) )
      goto LABEL_18;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v29 & 1) != 0 )
      {
        v25 |= v28;
      }
LABEL_18:
      *a2 = v25;
      goto LABEL_19;
    }
    if ( !HIBYTE(word_14043B26C) && (v29 & 1) != 0 )
      v25 |= v28;
    *a2 = v25;
    MiWritePteShadow((__int64)a2, v25);
LABEL_19:
    ++v14;
    ++a2;
    if ( v14 == a3 )
      break;
    if ( a2 == (__int64 *)v24 )
    {
      v23 = (__int64 *)v23[2];
      a2 = (__int64 *)v23[1];
      v24 = (__int64)&a2[*((unsigned int *)v23 + 11)];
    }
  }
  MiUpdateProcessSharedCommit((__int64)v33);
  updated = MiUpdateControlAreaCommitCount((__int64)v33, v26);
  if ( SubsectionCrossPartitionReferences && !updated )
    MiReturnCrossPartitionSectionCharges(v36, 0, v15);
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
LABEL_24:
    ExfTryToWakePushLock(v13);
LABEL_12:
  KeAbPostRelease((ULONG_PTR)v13);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 1LL;
}
