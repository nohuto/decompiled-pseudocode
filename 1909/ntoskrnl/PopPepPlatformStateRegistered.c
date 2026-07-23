/*
 * XREFs of PopPepPlatformStateRegistered @ 0x1402F9D4C
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402F2F00 (PopFxEnablePlatformStates.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14017BFA8 (PopPepUpdateIdleStateRefCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9654 (PopPepInitializeVetoMasks.c)
 */

void __fastcall PopPepPlatformStateRegistered(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // r13
  struct _KTHREAD *v3; // rbx
  ULONG_PTR BugCheckParameter4; // r11
  unsigned int v5; // r12d
  unsigned int SessionId; // edx
  unsigned __int8 v7; // r15
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rsi
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rbx
  ULONG_PTR v19; // r10
  unsigned __int8 v20; // r15
  unsigned int v21; // edx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rsi
  __int64 v25; // rcx
  int v26; // ecx
  unsigned int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rbx
  ULONG_PTR v31; // r11
  unsigned int v32; // r12d
  unsigned int v33; // edx
  unsigned __int8 v34; // r15
  unsigned int v35; // r8d
  int v36; // eax
  __int64 v37; // rcx
  _KLOCK_ENTRY *v38; // rsi
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  unsigned __int8 v42; // al
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rsi
  KIRQL v47; // al
  int v48; // r13d
  KIRQL v49; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *v51; // rbx
  ULONG_PTR v52; // r10
  unsigned __int8 v53; // r15
  unsigned int v54; // edx
  int v55; // eax
  __int64 v56; // rcx
  _KLOCK_ENTRY *v57; // rsi
  __int64 v58; // rcx
  int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rcx
  _DWORD v63[8]; // [rsp+30h] [rbp-20h] BYREF
  int v65; // [rsp+98h] [rbp+48h] BYREF
  int v66; // [rsp+A0h] [rbp+50h] BYREF
  int v67; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepVetoMaskReadyLock, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
  if ( PopPepPlatformState )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    v3 = KeGetCurrentThread();
    v65 = 0;
    v5 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
      BugCheckParameter4 = 0LL;
    }
    else
    {
      SessionId = -1;
    }
    --v3->SpecialApcDisable;
    v7 = ++v3->AbAllocationRegionCount;
    v8 = ((char)v3->AbEntrySummary | (char)v3->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v13, v8);
      v63[1] = v13;
      if ( v12 )
        goto LABEL_14;
      v9 = 1 << v13;
      v10 = v13;
      v11 = &v3->LockEntries[v10];
      v8 &= ~v9;
      if ( (v11->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v11->LockState.0 & 1) == 0
        && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && v11->LockState.SessionId == SessionId )
      {
        v11->AcquiredByte &= ~1u;
        if ( v11->LockState.0 )
          break;
      }
    }
    if ( !v11 )
    {
LABEL_14:
      if ( (*((_DWORD *)&v3->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v3, (ULONG_PTR)&PopPepDeviceListLock, SessionId, BugCheckParameter4);
      goto LABEL_21;
    }
    v11->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v11->LockState.LockState < 0 )
    {
      KiAbEntryRemoveFromTree(&v3->LockEntries[v10].TreeNode);
      BugCheckParameter4 = 0LL;
    }
    v14 = v11->BoostBitmap.AllFields & 0x1FFFF;
    v15 = v11->BoostBitmap.AllFields & 0xFFFE0000;
    v11->ThreadLocalFlags &= ~1u;
    v65 = v14;
    v11->BoostBitmap.AllFields = v15;
    v11->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)BugCheckParameter4;
    v16 = ((char *)v11 - (char *)v3 - 800) / 96;
    if ( v7 == 1 )
      v3->AbEntrySummary |= 1 << v16;
    else
      _InterlockedOr8((volatile signed __int8 *)&v3->AbOrphanedEntrySummary, 1 << v16);
LABEL_21:
    --v3->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v3, (__int64)&PopPepDeviceListLock, &v65);
    v12 = v3->SpecialApcDisable++ == -1;
    if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
      KiCheckForKernelApcDelivery(v17);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    v18 = KeGetCurrentThread();
    v66 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
    {
      v5 = MmGetSessionIdEx((__int64)v18->ApcState.Process);
      v19 = 0LL;
    }
    --v18->SpecialApcDisable;
    v20 = ++v18->AbAllocationRegionCount;
    v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v25, v21);
      v63[2] = v25;
      if ( v12 )
        goto LABEL_36;
      v22 = 1 << v25;
      v23 = v25;
      v24 = &v18->LockEntries[v23];
      v21 &= ~v22;
      if ( (v24->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v24->LockState.0 & 1) == 0
        && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && v24->LockState.SessionId == v5 )
      {
        v24->AcquiredByte &= ~1u;
        if ( v24->LockState.0 )
          break;
      }
    }
    if ( !v24 )
    {
LABEL_36:
      if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v18, (ULONG_PTR)&PopPepVetoMaskReadyLock, v5, v19);
      goto LABEL_43;
    }
    v24->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v24->LockState.LockState < 0 )
    {
      KiAbEntryRemoveFromTree(&v18->LockEntries[v23].TreeNode);
      v19 = 0LL;
    }
    v26 = v24->BoostBitmap.AllFields & 0x1FFFF;
    v27 = v24->BoostBitmap.AllFields & 0xFFFE0000;
    v24->ThreadLocalFlags &= ~1u;
    v66 = v26;
    v24->BoostBitmap.AllFields = v27;
    v24->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)v19;
    v28 = ((char *)v24 - (char *)v18 - 800) / 96;
    if ( v20 == 1 )
      v18->AbEntrySummary |= 1 << v28;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, 1 << v28);
LABEL_43:
    --v18->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v18, (__int64)&PopPepVetoMaskReadyLock, &v66);
    v12 = v18->SpecialApcDisable++ == -1;
    if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
      KiCheckForKernelApcDelivery(v29);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    PopPepPlatformState = PpmPlatformStates + 64;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepDeviceListLock);
    v30 = KeGetCurrentThread();
    v67 = 0;
    v32 = -1;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepDeviceListLock) == 1 )
    {
      v33 = MmGetSessionIdEx((__int64)v30->ApcState.Process);
      v31 = 0LL;
    }
    else
    {
      v33 = -1;
    }
    --v30->SpecialApcDisable;
    v34 = ++v30->AbAllocationRegionCount;
    v35 = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v39, v35);
      v63[3] = v39;
      if ( v12 )
        goto LABEL_60;
      v36 = 1 << v39;
      v37 = v39;
      v38 = &v30->LockEntries[v37];
      v35 &= ~v36;
      if ( (v38->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v38->LockState.0 & 1) == 0
        && (*(_QWORD *)&v38->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
        && v38->LockState.SessionId == v33 )
      {
        v38->AcquiredByte &= ~1u;
        if ( v38->LockState.0 )
          break;
      }
    }
    if ( !v38 )
    {
LABEL_60:
      if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v30, (ULONG_PTR)&PopPepDeviceListLock, v33, v31);
      goto LABEL_67;
    }
    v38->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v38->LockState.LockState < 0 )
    {
      KiAbEntryRemoveFromTree(&v30->LockEntries[v37].TreeNode);
      v31 = 0LL;
    }
    v40 = v38->BoostBitmap.AllFields & 0x1FFFF;
    v41 = v38->BoostBitmap.AllFields & 0xFFFE0000;
    v38->ThreadLocalFlags &= ~1u;
    v67 = v40;
    v38->BoostBitmap.AllFields = v41;
    v38->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)v31;
    v42 = 1 << (((char *)v38 - (char *)v30 - 800) / 96);
    if ( v34 == 1 )
      v30->AbEntrySummary |= v42;
    else
      _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, v42);
LABEL_67:
    --v30->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v30, (__int64)&PopPepDeviceListLock, &v67);
    v12 = v30->SpecialApcDisable++ == -1;
    if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
      KiCheckForKernelApcDelivery(v43);
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPepDeviceListLock, 0LL);
    if ( (_DWORD)v2 )
    {
      v44 = 0LL;
      v45 = v2;
      do
      {
        v44 += 384LL;
        *(_DWORD *)(v44 + PopPepPlatformState - 64) = 1073741825;
        --v45;
      }
      while ( v45 );
    }
    v46 = PopPepDeviceList;
    if ( (__int64 *)PopPepDeviceList != &PopPepDeviceList )
    {
      do
      {
        v47 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v46 + 64));
        v48 = *(_DWORD *)(v46 + 172);
        v49 = v47;
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v46 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v49 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v49);
        if ( v48 == 1 )
          PopPepInitializeVetoMasks(v46, a1);
        v46 = *(_QWORD *)v46;
      }
      while ( (__int64 *)v46 != &PopPepDeviceList );
      LOBYTE(v2) = a1;
      v32 = -1;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPepDeviceListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopPepDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&PopPepDeviceListLock);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPepVetoMaskReadyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopPepVetoMaskReadyLock);
    v51 = KeGetCurrentThread();
    v63[0] = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopPepVetoMaskReadyLock) == 1 )
    {
      v32 = MmGetSessionIdEx((__int64)v51->ApcState.Process);
      v52 = 0LL;
    }
    --v51->SpecialApcDisable;
    v53 = ++v51->AbAllocationRegionCount;
    v54 = ((char)v51->AbEntrySummary | (char)v51->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v12 = !_BitScanReverse((unsigned int *)&v58, v54);
      v63[4] = v58;
      if ( v12 )
        goto LABEL_97;
      v55 = 1 << v58;
      v56 = v58;
      v57 = &v51->LockEntries[v56];
      v54 &= ~v55;
      if ( (v57->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v57->LockState.0 & 1) == 0
        && (*(_QWORD *)&v57->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopPepVetoMaskReadyLock & 0x7FFFFFFFFFFFFFFCLL)
        && v57->LockState.SessionId == v32 )
      {
        v57->AcquiredByte &= ~1u;
        if ( v57->LockState.0 )
          break;
      }
    }
    if ( !v57 )
    {
LABEL_97:
      if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v51, (ULONG_PTR)&PopPepVetoMaskReadyLock, v32, v52);
      goto LABEL_104;
    }
    v57->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v57->LockState.LockState < 0 )
    {
      KiAbEntryRemoveFromTree(&v51->LockEntries[v56].TreeNode);
      v52 = 0LL;
    }
    v59 = v57->BoostBitmap.AllFields & 0x1FFFF;
    v60 = v57->BoostBitmap.AllFields & 0xFFFE0000;
    v57->ThreadLocalFlags &= ~1u;
    v63[0] = v59;
    v57->BoostBitmap.AllFields = v60;
    v57->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)v52;
    v61 = ((char *)v57 - (char *)v51 - 800) / 96;
    if ( v53 == 1 )
      v51->AbEntrySummary |= 1 << v61;
    else
      _InterlockedOr8((volatile signed __int8 *)&v51->AbOrphanedEntrySummary, 1 << v61);
LABEL_104:
    --v51->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v51, (__int64)&PopPepVetoMaskReadyLock, v63);
    v12 = v51->SpecialApcDisable++ == -1;
    if ( v12 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
      KiCheckForKernelApcDelivery(v62);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    PopPepUpdateIdleStateRefCount((unsigned int)((1 << v2) - 1), 0, 0);
  }
}
