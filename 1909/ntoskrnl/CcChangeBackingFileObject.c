/*
 * XREFs of CcChangeBackingFileObject @ 0x14027BB84
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1401302F0 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400656F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // edx
  unsigned __int8 v8; // r15
  unsigned int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // r14
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rcx
  unsigned __int8 v21; // si
  struct _KPRCB *v22; // rcx
  struct _KTHREAD *v23; // rsi
  unsigned int v24; // edx
  unsigned __int8 v25; // r15
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  _KLOCK_ENTRY *v29; // r14
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int8 v35; // si
  struct _KPRCB *v36; // rcx
  struct _KTHREAD *v37; // rsi
  unsigned int v38; // edx
  unsigned __int8 v39; // r15
  unsigned int v40; // r8d
  int v41; // eax
  __int64 v42; // rcx
  _KLOCK_ENTRY *v43; // r14
  __int64 v44; // rcx
  int v45; // eax
  unsigned int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  volatile __int64 *v49; // rcx
  _QWORD *v50; // r15
  unsigned __int8 v51; // si
  struct _KPRCB *v52; // rcx
  unsigned int v53; // edx
  unsigned __int8 v54; // r15
  unsigned int v55; // r8d
  int v56; // eax
  __int64 v57; // rcx
  _KLOCK_ENTRY *v58; // r14
  __int64 v59; // rcx
  int v60; // eax
  unsigned int v61; // ecx
  __int64 v62; // rdx
  unsigned __int8 v63; // si
  struct _KPRCB *v64; // rcx
  struct _KTHREAD *v65; // rsi
  unsigned int v66; // edx
  unsigned __int8 v67; // r12
  unsigned int v68; // r8d
  int v69; // eax
  __int64 v70; // rcx
  _KLOCK_ENTRY *v71; // r14
  __int64 v72; // rcx
  int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // [rsp+30h] [rbp-40h] BYREF
  int v78; // [rsp+34h] [rbp-3Ch] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-38h] BYREF
  int v80; // [rsp+50h] [rbp-20h]
  int v81; // [rsp+54h] [rbp-1Ch]
  int v82; // [rsp+58h] [rbp-18h]
  int v83; // [rsp+5Ch] [rbp-14h]
  int v84; // [rsp+60h] [rbp-10h]
  int v85; // [rsp+B0h] [rbp+40h] BYREF
  int v86; // [rsp+C0h] [rbp+50h] BYREF
  int v87; // [rsp+C8h] [rbp+58h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    CurrentThread = KeGetCurrentThread();
    v85 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v8 = ++CurrentThread->AbAllocationRegionCount;
    v9 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v14, v9);
      v80 = v14;
      if ( v13 )
        goto LABEL_20;
      v10 = 1 << v14;
      v11 = v14;
      v12 = &CurrentThread->LockEntries[v11];
      v9 &= ~v10;
      if ( (v12->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v12->LockState.0 & 1) == 0
        && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && v12->LockState.SessionId == SessionId )
      {
        v12->AcquiredByte &= ~1u;
        if ( v12->LockState.0 )
          break;
      }
    }
    if ( !v12 )
    {
LABEL_20:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, SessionId, 0LL);
      goto LABEL_27;
    }
    v12->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v12->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v11].TreeNode);
    v15 = v12->BoostBitmap.AllFields & 0x1FFFF;
    v16 = v12->BoostBitmap.AllFields & 0xFFFE0000;
    v12->ThreadLocalFlags &= ~1u;
    v85 = v15;
    v12->BoostBitmap.AllFields = v16;
    v12->LockState.0 = 0LL;
    v17 = ((char *)v12 - (char *)CurrentThread - 800) / 96;
    if ( v8 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v17;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
LABEL_27:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&CcChangeSharedCacheMapFileLock, &v85);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v18);
    return 3221225712LL;
  }
  v20 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v20 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v21 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
    __writecr8(v21);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v23 = KeGetCurrentThread();
    v86 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v24 = MmGetSessionIdEx((__int64)v23->ApcState.Process);
    else
      v24 = -1;
    --v23->SpecialApcDisable;
    v25 = ++v23->AbAllocationRegionCount;
    v26 = ((char)v23->AbEntrySummary | (char)v23->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v30, v26);
      v81 = v30;
      if ( v13 )
        goto LABEL_50;
      v27 = 1 << v30;
      v28 = v30;
      v29 = &v23->LockEntries[v28];
      v26 &= ~v27;
      if ( (v29->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v29->LockState.0 & 1) == 0
        && (*(_QWORD *)&v29->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && v29->LockState.SessionId == v24 )
      {
        v29->AcquiredByte &= ~1u;
        if ( v29->LockState.0 )
          break;
      }
    }
    if ( !v29 )
    {
LABEL_50:
      if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v23, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v24, 0LL);
      goto LABEL_57;
    }
    v29->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v29->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v23->LockEntries[v28].TreeNode);
    v31 = v29->BoostBitmap.AllFields & 0x1FFFF;
    v32 = v29->BoostBitmap.AllFields & 0xFFFE0000;
    v29->ThreadLocalFlags &= ~1u;
    v86 = v31;
    v29->BoostBitmap.AllFields = v32;
    v29->LockState.0 = 0LL;
    v33 = ((char *)v29 - (char *)v23 - 800) / 96;
    if ( v25 == 1 )
      v23->AbEntrySummary |= 1 << v33;
    else
      _InterlockedOr8((volatile signed __int8 *)&v23->AbOrphanedEntrySummary, 1 << v33);
LABEL_57:
    --v23->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v23, (__int64)&CcChangeSharedCacheMapFileLock, &v86);
    v13 = v23->SpecialApcDisable++ == -1;
    if ( !v13 )
      return 0LL;
    goto LABEL_117;
  }
  if ( (*(_DWORD *)(v20 + 152) & 0x100000) == 0 )
  {
    v49 = (volatile __int64 *)(v20 + 96);
    v50 = (_QWORD *)(*v49 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !a1 || v50 == a1 )
    {
      ObFastReplaceObject(v49, (ULONG_PTR)a2);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v63 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v64 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v64);
      }
      __writecr8(v63);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
      v65 = KeGetCurrentThread();
      v78 = 0;
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
        v66 = MmGetSessionIdEx((__int64)v65->ApcState.Process);
      else
        v66 = -1;
      --v65->SpecialApcDisable;
      v67 = ++v65->AbAllocationRegionCount;
      v68 = ((char)v65->AbEntrySummary | (char)v65->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v13 = !_BitScanReverse((unsigned int *)&v72, v68);
        v84 = v72;
        if ( v13 )
          goto LABEL_137;
        v69 = 1 << v72;
        v70 = v72;
        v71 = &v65->LockEntries[v70];
        v68 &= ~v69;
        if ( (v71->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v71->LockState.0 & 1) == 0
          && (*(_QWORD *)&v71->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
          && v71->LockState.SessionId == v66 )
        {
          v71->AcquiredByte &= ~1u;
          if ( v71->LockState.0 )
            break;
        }
      }
      if ( !v71 )
      {
LABEL_137:
        if ( (*((_DWORD *)&v65->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v65, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v66, 0LL);
        goto LABEL_144;
      }
      v71->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v71->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v65->LockEntries[v70].TreeNode);
      v73 = v71->BoostBitmap.AllFields & 0x1FFFF;
      v74 = v71->BoostBitmap.AllFields & 0xFFFE0000;
      v71->ThreadLocalFlags &= ~1u;
      v78 = v73;
      v71->BoostBitmap.AllFields = v74;
      v71->LockState.0 = 0LL;
      v75 = ((char *)v71 - (char *)v65 - 800) / 96;
      if ( v67 == 1 )
        v65->AbEntrySummary |= 1 << v75;
      else
        _InterlockedOr8((volatile signed __int8 *)&v65->AbOrphanedEntrySummary, 1 << v75);
LABEL_144:
      --v65->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v65, (__int64)&CcChangeSharedCacheMapFileLock, &v78);
      v13 = v65->SpecialApcDisable++ == -1;
      if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v65->ApcState.ApcListHead[0].Flink != &v65->152 )
        KiCheckForKernelApcDelivery(v76);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      ObDereferenceObjectDeferDeleteWithTag(v50, 0x746C6644u);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v51 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v52 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v52);
    }
    __writecr8(v51);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v23 = KeGetCurrentThread();
    v77 = 0;
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
      v53 = MmGetSessionIdEx((__int64)v23->ApcState.Process);
    else
      v53 = -1;
    --v23->SpecialApcDisable;
    v54 = ++v23->AbAllocationRegionCount;
    v55 = ((char)v23->AbEntrySummary | (char)v23->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v13 = !_BitScanReverse((unsigned int *)&v59, v55);
      v83 = v59;
      if ( v13 )
        goto LABEL_109;
      v56 = 1 << v59;
      v57 = v59;
      v58 = &v23->LockEntries[v57];
      v55 &= ~v56;
      if ( (v58->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v58->LockState.0 & 1) == 0
        && (*(_QWORD *)&v58->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
        && v58->LockState.SessionId == v53 )
      {
        v58->AcquiredByte &= ~1u;
        if ( v58->LockState.0 )
          break;
      }
    }
    if ( !v58 )
    {
LABEL_109:
      if ( (*((_DWORD *)&v23->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v23, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v53, 0LL);
      goto LABEL_116;
    }
    v58->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v58->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v23->LockEntries[v57].TreeNode);
    v60 = v58->BoostBitmap.AllFields & 0x1FFFF;
    v61 = v58->BoostBitmap.AllFields & 0xFFFE0000;
    v58->ThreadLocalFlags &= ~1u;
    v77 = v60;
    v58->BoostBitmap.AllFields = v61;
    v58->LockState.0 = 0LL;
    v62 = ((char *)v58 - (char *)v23 - 800) / 96;
    if ( v54 == 1 )
      v23->AbEntrySummary |= 1 << v62;
    else
      _InterlockedOr8((volatile signed __int8 *)&v23->AbOrphanedEntrySummary, 1 << v62);
LABEL_116:
    --v23->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v23, (__int64)&CcChangeSharedCacheMapFileLock, &v77);
    v13 = v23->SpecialApcDisable++ == -1;
    if ( !v13 )
      return 0LL;
LABEL_117:
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery(v34);
    return 0LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v36 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v36);
  }
  __writecr8(v35);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
  v37 = KeGetCurrentThread();
  v87 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&CcChangeSharedCacheMapFileLock) == 1 )
    v38 = MmGetSessionIdEx((__int64)v37->ApcState.Process);
  else
    v38 = -1;
  --v37->SpecialApcDisable;
  v39 = ++v37->AbAllocationRegionCount;
  v40 = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v44, v40);
    v82 = v44;
    if ( v13 )
      goto LABEL_78;
    v41 = 1 << v44;
    v42 = v44;
    v43 = &v37->LockEntries[v42];
    v40 &= ~v41;
    if ( (v43->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v43->LockState.0 & 1) == 0
      && (*(_QWORD *)&v43->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&CcChangeSharedCacheMapFileLock & 0x7FFFFFFFFFFFFFFCLL)
      && v43->LockState.SessionId == v38 )
    {
      v43->AcquiredByte &= ~1u;
      if ( v43->LockState.0 )
        break;
    }
  }
  if ( !v43 )
  {
LABEL_78:
    if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v38, 0LL);
    goto LABEL_85;
  }
  v43->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v43->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v37->LockEntries[v42].TreeNode);
  v45 = v43->BoostBitmap.AllFields & 0x1FFFF;
  v46 = v43->BoostBitmap.AllFields & 0xFFFE0000;
  v43->ThreadLocalFlags &= ~1u;
  v87 = v45;
  v43->BoostBitmap.AllFields = v46;
  v43->LockState.0 = 0LL;
  v47 = ((char *)v43 - (char *)v37 - 800) / 96;
  if ( v39 == 1 )
    v37->AbEntrySummary |= 1 << v47;
  else
    _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v47);
LABEL_85:
  --v37->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v37, (__int64)&CcChangeSharedCacheMapFileLock, &v87);
  v13 = v37->SpecialApcDisable++ == -1;
  if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery(v48);
  return 3221225659LL;
}
