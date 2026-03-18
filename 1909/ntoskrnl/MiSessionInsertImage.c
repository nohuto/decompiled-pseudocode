/*
 * XREFs of MiSessionInsertImage @ 0x14017FD04
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x1400750D0 (MiManageSubsectionView.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MmLockLoadedModuleListExclusive @ 0x14015586C (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  _QWORD *PoolWithTag; // rsi
  unsigned __int64 v6; // rdi
  int v7; // eax
  int v8; // r15d
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  bool v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int active; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KPRCB *v22; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 SessionVm; // [rsp+20h] [rbp-E8h]
  unsigned __int64 *v25; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v26; // [rsp+30h] [rbp-D8h]
  __int64 v27[25]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int8 v28; // [rsp+120h] [rbp+18h] BYREF
  KIRQL v29; // [rsp+128h] [rbp+20h]

  memset(v27, 0, 0x90uLL);
  v26 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v4 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(v26 + 430));
  v25 = (unsigned __int64 *)(v26 + 88);
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
  v7 = MiControlAreaRequiresCharge((__int64)a2, 2LL);
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
  v29 = v10;
  MmLockLoadedModuleListExclusive(&v28);
  v11 = 0;
  v12 = *v25;
  if ( !*v25 )
  {
LABEL_13:
    memset(PoolWithTag, 0, 0x58uLL);
    PoolWithTag[9] = v6;
    PoolWithTag[5] = a1 | 3;
    *((_DWORD *)PoolWithTag + 15) = 1;
    PoolWithTag[6] = a1 + (v6 << 12) - 1;
    *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)(v26 + 8);
    PoolWithTag[10] = a2;
    if ( v8 == 2 )
      *((_BYTE *)PoolWithTag + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v26 + 88), v12, v11, PoolWithTag);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v28);
    LOBYTE(v14) = v29;
    MiUnlockWorkingSetExclusive(SessionVm, v14, v15, v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 48), v6);
    v27[0] = (__int64)a2;
    MiManageSubsectionView(v27, PoolWithTag + 3, 3);
    return 0;
  }
  while ( a1 > *(_QWORD *)(v12 + 48) )
  {
    v13 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
    {
      v11 = 1;
      goto LABEL_13;
    }
LABEL_9:
    v12 = v13;
  }
  if ( a1 < (*(_QWORD *)(v12 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v13 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
    {
      v11 = 0;
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  ++*(_DWORD *)(v12 + 60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
  {
    v22 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v22);
  }
  __writecr8(v28);
  LOBYTE(v19) = v29;
  MiUnlockWorkingSetExclusive(SessionVm, v19, v20, v21);
  active = 272;
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    MiReturnCommit(v4, v6);
  if ( v8 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return (unsigned int)active;
}
