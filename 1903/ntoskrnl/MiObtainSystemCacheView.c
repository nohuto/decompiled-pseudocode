/*
 * XREFs of MiObtainSystemCacheView @ 0x140076500
 * Callers:
 *     MmMapViewInSystemCache @ 0x140074B60 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x14076E920 (MmReserveViewInSystemCache.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiCompareTbFlushTimeStamp @ 0x1400222E8 (MiCompareTbFlushTimeStamp.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     RemoveListHeadPte @ 0x140076414 (RemoveListHeadPte.c)
 *     MiGetPteLink @ 0x140076C10 (MiGetPteLink.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiReturnSystemVa @ 0x1400AB840 (MiReturnSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiExpandSystemCache @ 0x14012B47C (MiExpandSystemCache.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14013C360 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CcUnmapInactiveViews @ 0x14027E468 (CcUnmapInactiveViews.c)
 *     MiInitializeSystemCache @ 0x14074E604 (MiInitializeSystemCache.c)
 */

_QWORD *__fastcall MiObtainSystemCacheView(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v3; // r15d
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int64 *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG_PTR v25; // rbx
  volatile signed __int64 *v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r11
  unsigned int v35; // r9d
  unsigned int v36; // ecx
  signed __int64 v37; // rax
  signed __int64 v38; // r9
  int v39; // r11d
  int v40; // r10d
  ULONG_PTR v41; // r12
  char v42; // bl
  struct _KTHREAD *v43; // rbx
  unsigned int v44; // edx
  unsigned int v45; // r10d
  bool v46; // zf
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  _KLOCK_ENTRY *v50; // rsi
  int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  ULONG_PTR v54; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *v56; // rbx
  unsigned int v57; // edx
  unsigned __int8 v58; // si
  unsigned int v59; // r10d
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  _KLOCK_ENTRY *v63; // rdi
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rdx
  struct _KTHREAD *v67; // r12
  ULONG_PTR v68; // r10
  ULONG_PTR SessionId; // r9
  unsigned int v70; // r8d
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  ULONG_PTR v74; // rdx
  int v75; // eax
  unsigned int v76; // ecx
  __int64 v77; // rdx
  unsigned __int8 v78; // al
  __int64 v79; // rdx
  struct _KPRCB *v80; // rcx
  unsigned __int64 v81; // r11
  ULONG_PTR v82; // r10
  ULONG_PTR v83; // r11
  unsigned int v84; // eax
  unsigned int v85; // r8d
  unsigned int v86; // r9d
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  ULONG_PTR v90; // r8
  int v91; // eax
  unsigned int v92; // ecx
  unsigned __int8 v93; // r12
  ULONG_PTR v94; // rcx
  unsigned __int64 v95; // rdi
  _QWORD *v96; // rbx
  int PteLink; // eax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r11
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r11
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r11
  unsigned __int64 v110; // rdx
  struct _KPRCB *v111; // rcx
  struct _KPRCB *v112; // rcx
  __int64 v113; // r11
  __int64 v114; // r11
  __int64 v115; // r11
  __int64 v116; // r11
  signed __int32 v117[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 AbAllocationRegionCount; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v119; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-C0h]
  unsigned int v121; // [rsp+48h] [rbp-B8h]
  int v122; // [rsp+4Ch] [rbp-B4h] BYREF
  int v123; // [rsp+50h] [rbp-B0h] BYREF
  int v124; // [rsp+54h] [rbp-ACh] BYREF
  int v125; // [rsp+58h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A0h] BYREF
  int v127; // [rsp+78h] [rbp-88h]
  int v128; // [rsp+7Ch] [rbp-84h]
  int v129; // [rsp+80h] [rbp-80h]
  unsigned int v130; // [rsp+84h] [rbp-7Ch]
  int v131; // [rsp+88h] [rbp-78h]
  __int64 v132; // [rsp+90h] [rbp-70h]
  ULONG_PTR v133; // [rsp+98h] [rbp-68h]
  volatile signed __int64 *v134; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v135; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v136; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v137; // [rsp+B8h] [rbp-48h] BYREF
  int v138; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v139; // [rsp+C4h] [rbp-3Ch]
  __int16 v140; // [rsp+C6h] [rbp-3Ah]
  __int64 v141; // [rsp+C8h] [rbp-38h]
  __int64 v142; // [rsp+D0h] [rbp-30h]
  __int64 v143; // [rsp+D8h] [rbp-28h]
  _BYTE v144[256]; // [rsp+E0h] [rbp-20h] BYREF

  v140 = 0;
  memset(v144, 0, 0x98uLL);
  v141 = 20LL;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentThread = 0LL;
  v138 = 0;
  v3 = 0;
  v139 = 0;
  v142 = 0LL;
  v143 = 0LL;
  v121 = 0;
  v130 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = qword_140465F20;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140465F20);
  if ( *(_BYTE *)(a1 + 7900) )
    goto LABEL_3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v54 = a1 + 1792;
  ExAcquirePushLockExclusiveEx(a1 + 1792, 0LL);
  if ( *(_BYTE *)(a1 + 7900) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1792);
    v67 = KeGetCurrentThread();
    v123 = 0;
    if ( (unsigned int)MiGetSystemRegionType(a1 + 1792) == 1 )
    {
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v67->ApcState.Process);
      v68 = a1 + 1792;
    }
    else
    {
      SessionId = 0xFFFFFFFFLL;
    }
    --v67->SpecialApcDisable;
    AbAllocationRegionCount = ++v67->AbAllocationRegionCount;
    v70 = ((char)v67->AbEntrySummary | (char)v67->AbOrphanedEntrySummary) ^ 0x3F;
    v46 = !_BitScanReverse((unsigned int *)&v71, v70);
    v128 = v71;
    if ( v46 )
      goto LABEL_122;
    while ( 1 )
    {
      v72 = 1 << v71;
      v73 = v71;
      v74 = (ULONG_PTR)&v67->LockEntries[v73];
      v70 &= ~v72;
      BugCheckParameter1 = v74;
      if ( (*(_BYTE *)(v74 + 26) & 1) != 0
        && (*(_DWORD *)(v74 + 32) & 1) == 0
        && (*(_QWORD *)(v74 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v68 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v74 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v74 + 26) &= ~1u;
        if ( *(_QWORD *)(v74 + 32) )
          break;
      }
      v46 = !_BitScanReverse((unsigned int *)&v71, v70);
      v128 = v71;
      if ( v46 )
        goto LABEL_122;
    }
    if ( !v74 )
    {
LABEL_122:
      if ( (*((_DWORD *)&v67->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v67, v68, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v74 + 32) |= 2u;
      if ( *(__int64 *)(v74 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(&v67->LockEntries[v73].TreeNode);
        v74 = BugCheckParameter1;
        v68 = a1 + 1792;
      }
      v75 = *(_DWORD *)(v74 + 88) & 0x1FFFF;
      v76 = *(_DWORD *)(v74 + 88) & 0xFFFE0000;
      *(_BYTE *)(v74 + 25) &= ~1u;
      v123 = v75;
      *(_DWORD *)(v74 + 88) = v76;
      *(_QWORD *)(v74 + 32) = 0LL;
      v77 = (__int64)((unsigned __int128)((__int64)(v74 - (_QWORD)v67 - 800) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
      v78 = 1 << (v77 + (v77 < 0));
      if ( AbAllocationRegionCount == 1 )
        v67->AbEntrySummary |= v78;
      else
        _InterlockedOr8((volatile signed __int8 *)&v67->AbOrphanedEntrySummary, v78);
    }
    --v67->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v67, v68, &v123);
    v46 = v67->SpecialApcDisable++ == -1;
    if ( v46 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v67->ApcState.ApcListHead[0].Flink != &v67->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    CurrentThread = 0LL;
    goto LABEL_66;
  }
  if ( (unsigned int)MiInitializeSystemCache(a1) )
  {
LABEL_66:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = qword_140465F20;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140465F20);
    if ( CurrentThread )
      *(_BYTE *)(a1 + 7900) = 1;
LABEL_3:
    v5 = (volatile signed __int64 *)((((unsigned __int64)(a1 + 1720) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v134 = v5;
    do
    {
      if ( MiGetPteLink(*(_QWORD *)(a1 + 1720)) != ((__int64)v5 - *(_QWORD *)(a1 + 1736)) >> 3 )
        goto LABEL_5;
    }
    while ( MiExpandSystemCache(a1, &v136) );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v80 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v80->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v80);
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v81 = a1 + 1792;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1792), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(a1 + 1792);
        v81 = a1 + 1792;
      }
      BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
      v124 = 0;
      if ( (unsigned int)MiGetSystemRegionType(v81) == 1 )
      {
        v84 = MmGetSessionIdEx(*(_QWORD *)(v82 + 184));
        v82 = BugCheckParameter1;
        v83 = a1 + 1792;
        v85 = v84;
      }
      else
      {
        v85 = -1;
      }
      --*(_WORD *)(v82 + 486);
      LODWORD(v119) = v85;
      AbAllocationRegionCount = ++*(_BYTE *)(v82 + 794);
      v132 = v83 & 0x7FFFFFFFFFFFFFFCLL;
      v86 = (*(char *)(v82 + 792) | *(char *)(v82 + 1422)) ^ 0x3F;
      v46 = !_BitScanReverse((unsigned int *)&v87, v86);
      v129 = v87;
      if ( v46 )
      {
LABEL_168:
        if ( (*(_DWORD *)(v82 + 120) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, v82, v83, v85, 0LL);
      }
      else
      {
        while ( 1 )
        {
          v88 = 1 << v87;
          v89 = 96 * v87;
          v90 = v89 + v82 + 800;
          v86 &= ~v88;
          v133 = v90;
          if ( (*(_BYTE *)(v90 + 26) & 1) != 0
            && (*(_DWORD *)(v90 + 32) & 1) == 0
            && (*(_QWORD *)(v90 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v132
            && *(_DWORD *)(v90 + 40) == (_DWORD)v119 )
          {
            *(_BYTE *)(v90 + 26) &= ~1u;
            if ( *(_QWORD *)(v90 + 32) )
              break;
          }
          v46 = !_BitScanReverse((unsigned int *)&v87, v86);
          v129 = v87;
          if ( v46 )
            goto LABEL_167;
        }
        if ( !v90 )
        {
LABEL_167:
          v85 = v119;
          goto LABEL_168;
        }
        *(_BYTE *)(v90 + 32) |= 2u;
        if ( *(__int64 *)(v90 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)(v89 + v82 + 800));
          v82 = BugCheckParameter1;
          v83 = a1 + 1792;
          v90 = v133;
        }
        v91 = *(_DWORD *)(v90 + 88) & 0x1FFFF;
        v92 = *(_DWORD *)(v90 + 88) & 0xFFFE0000;
        *(_BYTE *)(v90 + 25) &= ~1u;
        v124 = v91;
        *(_DWORD *)(v90 + 88) = v92;
        *(_QWORD *)(v90 + 32) = 0LL;
        v93 = 1 << ((char)(v90 - v82 - 32) / 96);
        if ( AbAllocationRegionCount == 1 )
          *(_BYTE *)(v82 + 792) |= v93;
        else
          _InterlockedOr8((volatile signed __int8 *)(v82 + 1422), v93);
      }
      --*(_BYTE *)(v82 + 794);
      KiAbThreadRemoveBoosts(v82, v83, &v124);
      v94 = BugCheckParameter1;
      v46 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
      if ( v46 && *(_QWORD *)(v94 + 152) != v94 + 152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      CurrentThread = 0LL;
    }
    if ( v136 )
      MiReturnSystemVa(v136, v136 + 0x200000, 8LL);
    if ( (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 168), v79, 0LL, &v135) == 1 )
    {
      v95 = v135;
      v96 = (_QWORD *)(((v135 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( MiGetPteLink(v96[3]) == 2 )
      {
        PteLink = MiGetPteLink(v96[2]);
        if ( MiCompareTbFlushTimeStamp(PteLink, 0xFFFFF) )
        {
          MiInsertTbFlushEntry((__int64)&v138, v95, 64LL, 0);
          MiFlushTbList(&v138, v98, v99, v100);
        }
      }
      if ( MiPteInShadowRange((unsigned __int64)v96) )
      {
        if ( (unsigned int)MiPteHasShadow(v102) )
        {
          if ( !HIBYTE(word_140465BEC) && (v101 & 1) != 0 )
            v101 |= v103;
          *v96 = v101;
          MiWritePteShadow(v96, v101);
LABEL_175:
          if ( MiPteInShadowRange((unsigned __int64)(v96 + 1)) )
          {
            if ( (unsigned int)MiPteHasShadow(v105) )
            {
              if ( !HIBYTE(word_140465BEC) && (v104 & 1) != 0 )
                v104 |= v106;
              v96[1] = v104;
              MiWritePteShadow(v96 + 1, v104);
LABEL_185:
              if ( MiPteInShadowRange((unsigned __int64)(v96 + 2)) )
              {
                if ( (unsigned int)MiPteHasShadow(v108) )
                {
                  if ( !HIBYTE(word_140465BEC) && (v107 & 1) != 0 )
                    v107 |= v109;
                  v96[2] = v107;
                  MiWritePteShadow(v96 + 2, v107);
                  return v96;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v107 & 1) != 0 )
                {
                  v107 |= v109;
                }
              }
              v96[2] = v107;
              return v96;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v104 & 1) != 0 )
            {
              v104 |= v106;
            }
          }
          v96[1] = v104;
          goto LABEL_185;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v101 & 1) != 0 )
        {
          v101 |= v103;
        }
      }
      *v96 = v101;
      goto LABEL_175;
    }
    v110 = KeGetCurrentIrql();
    v119 = v110;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v110 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = v110;
    LockHandle.LockQueue.Lock = qword_140465F20;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)qword_140465F20);
    if ( MiGetPteLink(*(_QWORD *)(a1 + 1720)) == ((__int64)v5 - *(_QWORD *)(a1 + 1736)) >> 3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v119 < 2u )
      {
        v111 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v111->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v111);
      }
      __writecr8((unsigned __int8)v119);
      return 0LL;
    }
LABEL_5:
    v6 = RemoveListHeadPte((_QWORD *)(a1 + 1720));
    v119 = v6;
    v133 = 0LL;
    v137 = MI_READ_PTE_LOCK_FREE(((((__int64)(v6 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL);
    v7 = MI_READ_PTE_LOCK_FREE(&v137);
    ++*(_BYTE *)(48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 39);
    v8 = (_QWORD *)(v6 + 24);
    v9 = MiGetPteLink(*(_QWORD *)(v6 + 24));
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v3 = 1;
      }
      else
      {
        _InterlockedOr(v117, 0);
        v10 = MiGetPteLink(*(_QWORD *)(v6 + 16));
        v12 = (v11 - v10) & 0xFFFFF;
        if ( v12 <= 2 && ((v10 & 1) != 0 || v12 < 2) )
        {
          v25 = v133;
          BugCheckParameter1 = v6 + 24;
          v26 = v134;
          do
          {
            if ( HIDWORD(v141) )
            {
              v27 = v3++;
              *(_QWORD *)&v144[8 * v27 + 160] = v6;
            }
            v135 = (__int64)((v6 << 25) - v25) >> 16;
            MiInsertTbFlushEntry((__int64)&v138, v135, 64LL, 0);
            v28 = *(_QWORD *)BugCheckParameter1;
            if ( qword_140465B00 )
            {
              if ( (v28 & 0x10) != 0 )
                LODWORD(v28) = v28 & 0xFFFFFFEF;
              else
                LODWORD(v28) = ~(_DWORD)qword_140465B00 & v28;
            }
            v29 = MiSwizzleInvalidPte(v28 & 0xFFFFFFF | 0x10000000);
            *v30 = v29;
            if ( v3 == 12 )
              break;
            v31 = MiGetPteLink(*(_QWORD *)v6);
            v32 = *(_QWORD *)(a1 + 1736);
            if ( v31 == ((__int64)v26 - v32) >> 3 )
              break;
            v6 = v32 + 8 * v31;
            v33 = *(_QWORD *)(v6 + 24);
            BugCheckParameter1 = v6 + 24;
          }
          while ( MiGetPteLink(v33) == 2 );
          v6 = v119;
          v121 = v3;
          v3 = v130;
          v8 = (_QWORD *)(v119 + 24);
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( HIDWORD(v141) )
    {
      MiFlushTbList(&v138, v13, v14, v15);
      v34 = 0LL;
      if ( v121 )
      {
        do
        {
          v134 = (volatile signed __int64 *)(*(_QWORD *)&v144[8 * v34 + 160] + 24LL);
          v35 = MI_READ_PTE_LOCK_FREE(v134);
          v36 = v35;
          if ( qword_140465B00 )
          {
            if ( (v35 & 0x10) != 0 )
              v36 = v35 & 0xFFFFFFEF;
            else
              v36 = v35 & ~(_DWORD)qword_140465B00;
          }
          v37 = MiSwizzleInvalidPte(v36 & 0xFFFFFFF);
          _InterlockedCompareExchange64(v134, v37, v38);
          v34 = (unsigned int)(v39 + 1);
        }
        while ( (_DWORD)v34 != v40 );
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v112 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v112->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v112);
    }
    __writecr8(CurrentIrql);
    if ( CurrentThread )
    {
      v41 = a1 + 1792;
      v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1792), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v42 & 2) != 0 && (v42 & 4) == 0 )
        ExfTryToWakePushLock(a1 + 1792);
      v43 = KeGetCurrentThread();
      v125 = 0;
      if ( (unsigned int)MiGetSystemRegionType(a1 + 1792) == 1 )
        v44 = MmGetSessionIdEx((__int64)v43->ApcState.Process);
      else
        v44 = -1;
      --v43->SpecialApcDisable;
      ++v43->AbAllocationRegionCount;
      v45 = ((char)v43->AbEntrySummary | (char)v43->AbOrphanedEntrySummary) ^ 0x3F;
      AbAllocationRegionCount = v43->AbAllocationRegionCount;
      v46 = !_BitScanReverse((unsigned int *)&v47, v45);
      v131 = v47;
      if ( v46 )
        goto LABEL_51;
      while ( 1 )
      {
        v48 = 1 << v47;
        v49 = v47;
        v50 = &v43->LockEntries[v49];
        v45 &= ~v48;
        if ( (v50->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v50->LockState.0 & 1) == 0
          && (*(_QWORD *)&v50->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v41 & 0x7FFFFFFFFFFFFFFCLL)
          && v50->LockState.SessionId == v44 )
        {
          v50->AcquiredByte &= ~1u;
          if ( v50->LockState.0 )
            break;
        }
        v46 = !_BitScanReverse((unsigned int *)&v47, v45);
        v131 = v47;
        if ( v46 )
          goto LABEL_51;
      }
      if ( !v50 )
      {
LABEL_51:
        if ( (*((_DWORD *)&v43->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v43, v41, v44, 0LL);
      }
      else
      {
        v50->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v50->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&v43->LockEntries[v49].TreeNode);
        v51 = v50->BoostBitmap.AllFields & 0x1FFFF;
        v52 = v50->BoostBitmap.AllFields & 0xFFFE0000;
        v50->ThreadLocalFlags &= ~1u;
        v125 = v51;
        v50->BoostBitmap.AllFields = v52;
        v50->LockState.0 = 0LL;
        v53 = ((char *)v50 - (char *)v43 - 800) / 96;
        if ( AbAllocationRegionCount == 1 )
          v43->AbEntrySummary |= 1 << v53;
        else
          _InterlockedOr8((volatile signed __int8 *)&v43->AbOrphanedEntrySummary, 1 << v53);
      }
      --v43->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v43, v41, &v125);
      v46 = v43->SpecialApcDisable++ == -1;
      if ( v46 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( v3 == 1 )
      MiWaitForSystemCacheViewFlush(v6);
    if ( MiPteInShadowRange(v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v17) )
      {
        if ( !HIBYTE(word_140465BEC) && (v16 & 1) != 0 )
          v16 |= v113;
        *(_QWORD *)v6 = v16;
        MiWritePteShadow(v6, v16);
LABEL_15:
        if ( MiPteInShadowRange(v6 + 8) )
        {
          if ( (unsigned int)MiPteHasShadow(v19) )
          {
            if ( !HIBYTE(word_140465BEC) && (v18 & 1) != 0 )
              v18 |= v114;
            *(_QWORD *)(v6 + 8) = v18;
            MiWritePteShadow(v6 + 8, v18);
LABEL_17:
            if ( MiPteInShadowRange(v6 + 16) )
            {
              if ( (unsigned int)MiPteHasShadow(v21) )
              {
                if ( !HIBYTE(word_140465BEC) && (v20 & 1) != 0 )
                  v20 |= v115;
                *(_QWORD *)(v6 + 16) = v20;
                MiWritePteShadow(v6 + 16, v20);
LABEL_19:
                if ( MiPteInShadowRange((unsigned __int64)v8) )
                {
                  if ( (unsigned int)MiPteHasShadow(v23) )
                  {
                    if ( !HIBYTE(word_140465BEC) && (v22 & 1) != 0 )
                      v22 |= v116;
                    *v8 = v22;
                    MiWritePteShadow(v8, v22);
                    return (_QWORD *)v6;
                  }
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                    && (v22 & 1) != 0 )
                  {
                    v22 |= v116;
                  }
                }
                *v8 = v22;
                return (_QWORD *)v6;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v20 & 1) != 0 )
              {
                v20 |= v115;
              }
            }
            *(_QWORD *)(v6 + 16) = v20;
            goto LABEL_19;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v18 & 1) != 0 )
          {
            v18 |= v114;
          }
        }
        *(_QWORD *)(v6 + 8) = v18;
        goto LABEL_17;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v16 & 1) != 0 )
      {
        v16 |= v113;
      }
    }
    *(_QWORD *)v6 = v16;
    goto LABEL_15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v54, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1792);
  v56 = KeGetCurrentThread();
  v122 = 0;
  if ( (unsigned int)MiGetSystemRegionType(a1 + 1792) == 1 )
    v57 = MmGetSessionIdEx((__int64)v56->ApcState.Process);
  else
    v57 = -1;
  --v56->SpecialApcDisable;
  v58 = ++v56->AbAllocationRegionCount;
  v59 = ((char)v56->AbEntrySummary | (char)v56->AbOrphanedEntrySummary) ^ 0x3F;
  v46 = !_BitScanReverse((unsigned int *)&v60, v59);
  v127 = v60;
  if ( v46 )
    goto LABEL_98;
  while ( 1 )
  {
    v61 = 1 << v60;
    v62 = v60;
    v63 = &v56->LockEntries[v62];
    v59 &= ~v61;
    if ( (v63->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v63->LockState.0 & 1) == 0
      && (*(_QWORD *)&v63->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v54 & 0x7FFFFFFFFFFFFFFCLL)
      && v63->LockState.SessionId == v57 )
    {
      v63->AcquiredByte &= ~1u;
      if ( v63->LockState.0 )
        break;
    }
    v46 = !_BitScanReverse((unsigned int *)&v60, v59);
    v127 = v60;
    if ( v46 )
      goto LABEL_98;
  }
  if ( !v63 )
  {
LABEL_98:
    if ( (*((_DWORD *)&v56->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v56, v54, v57, 0LL);
  }
  else
  {
    v63->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v63->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v56->LockEntries[v62].TreeNode);
    v64 = v63->BoostBitmap.AllFields & 0x1FFFF;
    v65 = v63->BoostBitmap.AllFields & 0xFFFE0000;
    v63->ThreadLocalFlags &= ~1u;
    v122 = v64;
    v63->BoostBitmap.AllFields = v65;
    v63->LockState.0 = 0LL;
    v66 = ((char *)v63 - (char *)v56 - 800) / 96;
    if ( v58 == 1 )
      v56->AbEntrySummary |= 1 << v66;
    else
      _InterlockedOr8((volatile signed __int8 *)&v56->AbOrphanedEntrySummary, 1 << v66);
  }
  --v56->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v56, v54, &v122);
  v46 = v56->SpecialApcDisable++ == -1;
  if ( v46 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
