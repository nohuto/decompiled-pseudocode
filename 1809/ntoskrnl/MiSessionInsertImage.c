/*
 * XREFs of MiSessionInsertImage @ 0x14017612C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     MiManageSubsectionView @ 0x1400ADBC0 (MiManageSubsectionView.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5E00 (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *PoolWithTag; // rsi
  unsigned __int64 v6; // rdi
  int v7; // eax
  int v8; // r15d
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  unsigned __int64 v11; // rbx
  bool v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int active; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 SessionVm; // [rsp+20h] [rbp-D8h]
  __int64 *v23; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 v25; // [rsp+110h] [rbp+18h] BYREF
  KIRQL v26; // [rsp+118h] [rbp+20h]

  v3 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v4 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v3 + 3182));
  SessionVm = MiGetSessionVm();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x69486D4Du);
  if ( !PoolWithTag )
    return 3221225495LL;
  v6 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)MiChargeCommit(v4, (unsigned int)v6, 0) )
  {
    active = -1073741670;
LABEL_24:
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)active;
  }
  v7 = MiControlAreaRequiresCharge((__int64)a2);
  v8 = v7;
  if ( !v7 )
  {
    MiReturnCommit(v4, v6);
    active = -1073740277;
    goto LABEL_24;
  }
  if ( v7 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 16, 264, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v4, v6);
      goto LABEL_24;
    }
  }
  SharedVm = MiGetSharedVm(SessionVm);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v26 = v10;
  MmLockLoadedModuleListExclusive(&v25);
  v11 = *(_QWORD *)(v3 + 104);
  v12 = 0;
  if ( !v11 )
  {
LABEL_11:
    memset(PoolWithTag, 0, 0x58uLL);
    PoolWithTag[9] = v6;
    PoolWithTag[5] = a1 | 3;
    *((_DWORD *)PoolWithTag + 15) = 1;
    PoolWithTag[6] = a1 + (v6 << 12) - 1;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v3 + 8);
    PoolWithTag[10] = a2;
    if ( v8 == 2 )
      *((_BYTE *)PoolWithTag + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v3 + 104), v11, v12, PoolWithTag);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v25);
    MiUnlockWorkingSetExclusive(SessionVm, v26, v14, v15);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + 48), v6);
    v23 = a2;
    MiManageSubsectionView((__int64 *)&v23, PoolWithTag + 3, 3);
    return 0;
  }
  while ( a1 > *(_QWORD *)(v11 + 48) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    if ( !v13 )
    {
      v12 = 1;
      goto LABEL_11;
    }
LABEL_17:
    v11 = v13;
  }
  if ( a1 < (*(_QWORD *)(v11 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v13 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  ++*(_DWORD *)(v11 + 60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v20);
  }
  __writecr8(v25);
  MiUnlockWorkingSetExclusive(SessionVm, v26, v18, v19);
  active = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    MiReturnCommit(v4, v6);
  if ( v8 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return (unsigned int)active;
}
