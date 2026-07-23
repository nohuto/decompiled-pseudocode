/*
 * XREFs of MiMapViewOfDataSection @ 0x1405F1BB0
 * Callers:
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiLocateSubsectionNode @ 0x140077B30 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x140077D08 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x140077E5C (MiAweControlArea.c)
 *     MiComputeContiguousSubsectionPte @ 0x140077E84 (MiComputeContiguousSubsectionPte.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiGetCommittedPages @ 0x1400957D4 (MiGetCommittedPages.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DEE04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiLocatePagefileSubsection @ 0x140119DB8 (MiLocatePagefileSubsection.c)
 *     MiDereferenceExtendInfo @ 0x140138A28 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402C4F38 (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB304 (MiUnlockAndDereferenceNestedVad.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1405F45BC (MiSecureVad.c)
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1405F59F0 (MiIsVaRangeAvailable.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 *     MiChargeSegmentCommit @ 0x14061F0D0 (MiChargeSegmentCommit.c)
 *     MiAdvanceVadHint @ 0x140696FD0 (MiAdvanceVadHint.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiLogMapFileEvent @ 0x14084D58C (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14085DA90 (MiPreparePlaceholderVadReplacement.c)
 */

__int64 __fastcall MiMapViewOfDataSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        __int64 a9)
{
  __int64 v12; // rdx
  __int64 *v13; // rcx
  void *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // ecx
  int v19; // edx
  int v20; // r13d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r15
  unsigned __int64 ControlAreaPtes; // r12
  bool v25; // r14
  ULONG_PTR SubsectionNode; // r9
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r15
  int inserted; // r14d
  __int64 v31; // r14
  PVOID PoolWithTag; // rax
  unsigned int v33; // ecx
  __int64 *v34; // r8
  unsigned __int64 v35; // r12
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rbx
  void *v40; // rbx
  int v41; // ebx
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r8
  int v45; // r10d
  __int64 v46; // r15
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // esi
  PVOID v50; // r13
  int v52; // r9d
  int v53; // eax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  void *v57; // rcx
  _DWORD *v58; // r12
  _DWORD *v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  bool v62; // zf
  struct _KTHREAD *v63; // r15
  int v64; // eax
  __int64 *v65; // rax
  PVOID v66; // rbx
  volatile signed __int64 *v67; // rdi
  int PlaceholderStorage; // [rsp+50h] [rbp-D8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-D0h]
  int v70; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v71; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v72; // [rsp+70h] [rbp-B8h]
  PVOID PlaceholderVadToReplace; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+80h] [rbp-A8h] BYREF
  int v75; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v76; // [rsp+90h] [rbp-98h]
  __int64 v77; // [rsp+98h] [rbp-90h]
  unsigned __int64 v78; // [rsp+A0h] [rbp-88h]
  unsigned __int64 v79; // [rsp+A8h] [rbp-80h]
  __int64 v80; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v81; // [rsp+B8h] [rbp-70h]
  __int64 v82; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v83; // [rsp+C8h] [rbp-60h] BYREF
  PVOID P; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v85; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v86; // [rsp+E0h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E8h] [rbp-40h]

  v70 = 0;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *v13;
  v16 = *(_DWORD *)(v12 + 40);
  v17 = *(_QWORD *)(v12 + 80);
  v71 = v17;
  v81 = (unsigned __int64)v14;
  v80 = v15;
  v18 = v16 & 0x2000;
  if ( (v16 & 0x2000) != 0 && *(void **)(a1 + 64) == v14 )
    return 3221225485LL;
  v19 = v16 & 0x40000000;
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v19 )
      return 3221225485LL;
    if ( (v16 & 0x2000) != 0 )
      return 3221225485LL;
    v20 = a7;
    if ( a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    v62 = *(void **)(a1 + 64) == v14 ? (*(_WORD *)(v15 + 12) & 0x1000) == 0 : (*(_DWORD *)(a1 + 56) & 0x40000000) == 0;
    if ( v62 )
      return 3221225485LL;
  }
  else
  {
    if ( v19 && ((v16 & 0x2000) != 0 || *(void **)(v17 + 1808) == v14 && (*(_DWORD *)(a2 + 64) & 1) == 0) )
      return 3221225485LL;
    v20 = a7;
  }
  v21 = *(_QWORD *)(a2 + 16);
  if ( v21 >= 0x200000 && ((v21 - 1) & *(_QWORD *)(a2 + 32)) != 0 || v18 && *a4 >= 0x10000000000LL )
    return 3221225503LL;
  CurrentThread = KeGetCurrentThread();
  v22 = (unsigned __int64)v14;
  v77 = *(_QWORD *)(v17 + 1296) + 48LL;
  PlaceholderVadToReplace = v14;
  P = v14;
  v75 = (int)v14;
  MiCheckPurgeAndUpMapCount(a1);
  v23 = *a4 >> 12;
  v76 = (*a4 + *(_QWORD *)(a2 + 24)) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(a1);
  if ( v23 >= ControlAreaPtes )
  {
    inserted = -1073741793;
    goto LABEL_94;
  }
  v25 = 0;
  if ( *(_QWORD *)(a1 + 64) == v22 )
  {
    v85 = v23;
    v72 = (ULONG_PTR)MiLocatePagefileSubsection((unsigned int *)(a1 + 128), &v85);
    SubsectionNode = v72;
    if ( !a8 && v20 == 24 )
      v25 = (*(_DWORD *)(a1 + 56) & 0x1000) != 0;
  }
  else
  {
    SubsectionNode = (ULONG_PTR)MiLocateSubsectionNode(a1, *a4, 0);
    v72 = SubsectionNode;
  }
  v27 = *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
  v28 = v76 - v27;
  v29 = v23 - v27;
  v76 -= v27;
  if ( v25 )
  {
    v28 = 1LL;
    v76 = 1LL;
  }
  PlaceholderStorage = MiAddViewsForSection((__int64 *)SubsectionNode, v28, 8LL);
  inserted = PlaceholderStorage;
  if ( PlaceholderStorage < 0 )
    goto LABEL_94;
  v82 = *(_QWORD *)(v72 + 8) + 8 * v29;
  if ( *(_QWORD *)(a1 + 64) == v22 && a8 && MiGetCommittedPages((_QWORD *)a1) < ControlAreaPtes )
    v81 = ((a8 & 0xFFF) != 0) + (a8 >> 12);
  v31 = a5;
  v83 = v22;
  v78 = *(_QWORD *)(a5 + 24) << 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v22 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    v33 = *(_DWORD *)(v22 + 64) & 0xFBFFFFFF;
    v34 = (__int64 *)v72;
    v35 = v71;
    *(_QWORD *)(v22 + 80) = v82;
    v36 = 0;
    *(_QWORD *)(v22 + 16) = -2LL;
    if ( a6 == 1 )
      v36 = 0x4000000;
    *(_QWORD *)(v22 + 72) = v34;
    v37 = v36 | v33;
    v38 = (*(_DWORD *)(v22 + 48) ^ (8 * v20)) & 0xF8;
    *(_DWORD *)(v22 + 64) = v37;
    *(_DWORD *)(v22 + 48) ^= v38;
    *(_DWORD *)(v22 + 48) ^= ((unsigned __int16)*(_DWORD *)(v22 + 48) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 48) << 8)) & 0x3F00;
    if ( *(_DWORD *)(a2 + 48) )
      *(_BYTE *)(*(_QWORD *)(v35 + 1296) + 304LL) = 1;
    if ( *(_QWORD *)(a1 + 64) && (*(_DWORD *)(a2 + 40) & 0x20002000) == 0 )
      *(_DWORD *)(v22 + 64) |= 0x2000000u;
    *(_QWORD *)(v22 + 40) = 0LL;
    BugCheckParameter2 = v22 + 40;
    *(_DWORD *)(v22 + 64) = ((__int64)*a4 >> 16) & 0xFFFFFF | *(_DWORD *)(v22 + 64) & 0xFF000000;
    if ( (*(_DWORD *)(a2 + 52) & 0x4000000) == 0 )
    {
LABEL_25:
      v39 = *(_QWORD *)(v31 + 40);
      if ( (v39 & 3) != 0 )
      {
        v40 = (void *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
        ObfReferenceObject(v40);
        v34 = (__int64 *)v72;
      }
      else
      {
        v40 = 0LL;
      }
      *(_QWORD *)(v22 + 128) = v40;
      if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 && *(_QWORD *)(a1 + 64) )
      {
        if ( (unsigned int)MiIncrementLargeSubsections(v34, v76) > 1 )
        {
          inserted = -1073741280;
          goto LABEL_93;
        }
        v41 = 1;
        v70 = 1;
      }
      else
      {
        v41 = v70;
      }
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, v35);
      if ( (*(_DWORD *)(v35 + 772) & 0x20) != 0 )
      {
        inserted = -1073741558;
        goto LABEL_89;
      }
      if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
      {
        v42 = *a3;
      }
      else
      {
        if ( !v78 )
        {
          PlaceholderStorage = MiSelectUserAddress(
                                 *(unsigned int *)(a2 + 40),
                                 *(_QWORD *)a2,
                                 *(_QWORD *)(a2 + 8),
                                 *(_QWORD *)(a2 + 24),
                                 *(_QWORD *)(a2 + 16),
                                 0LL,
                                 v20,
                                 0,
                                 &v83,
                                 &v74);
          inserted = PlaceholderStorage;
          if ( PlaceholderStorage < 0 )
          {
LABEL_89:
            UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v35);
            if ( v75 == 1 )
              MiRemoveSharedCommitNode(a1, v35, 0);
            if ( v41 )
            {
              v65 = MiLocateSubsectionNode(a1, *(_QWORD *)(a2 + 32) + *a4 - 1, 0);
              MiDecrementLargeSubsections((__int64 *)v72, v65);
            }
            goto LABEL_93;
          }
          v42 = v74;
          v79 = *(_QWORD *)(a2 + 24) + v74 - 1;
          v31 = a5;
LABEL_34:
          v43 = v42 >> 12;
          v44 = v79 >> 12;
          *(_BYTE *)(v22 + 32) = v42 >> 44;
          *(_BYTE *)(v22 + 33) = BYTE4(v44);
          *(_DWORD *)(v22 + 24) = v42 >> 12;
          *(_DWORD *)(v22 + 28) = v44;
          v62 = (*(_DWORD *)(a2 + 40) & 0x2000) == 0;
          v78 = v44;
          if ( !v62 )
          {
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140439C90, 0LL);
            v58 = *(_DWORD **)(v80 + 32);
            if ( v58 )
            {
              ++v58[2];
            }
            else
            {
              v59 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
              v58 = v59;
              if ( !v59 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
                KeAbPostRelease((ULONG_PTR)&qword_140439C90);
                v63 = CurrentThread;
                KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                inserted = -1073741670;
                goto LABEL_154;
              }
              v60 = v80;
              v59[2] = 1;
              *(_QWORD *)v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v60 + 24), -1LL, -1LL);
              *(_QWORD *)(v60 + 32) = v59;
            }
            v61 = *(_QWORD *)(v31 + 48);
            if ( *(_QWORD *)v58 < v61 )
              *(_QWORD *)v58 = v61;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140439C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&qword_140439C90);
            KeAbPostRelease((ULONG_PTR)&qword_140439C90);
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
            v44 = v78;
            *(_QWORD *)(v22 + 120) = v58;
            v42 = v74;
          }
          if ( (a7 & 5) == 5 )
          {
            v54 = (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32))
                - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32))
                + 1;
            *(_DWORD *)(v22 + 52) ^= ((*(_DWORD *)(v22 + 28) - *(_DWORD *)(v22 + 24) + 1) ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
            *(_BYTE *)(v22 + 34) = v54 >> 31;
          }
          *(_QWORD *)(v22 + 88) = MiComputeContiguousSubsectionPte(v72, v29 + v44 - v43);
          if ( (*(_DWORD *)(a2 + 40) & 0x400000) != 0 || (*(_DWORD *)(v31 + 56) & 0x4000) != 0 )
          {
            P = (PVOID)MiAddSecureEntry(v22, v42, v45, 0x80000000, 0);
            if ( !P )
            {
              inserted = -1073741670;
              goto LABEL_153;
            }
          }
          if ( (*(_DWORD *)(a2 + 40) & 0x20000000) != 0 )
          {
            v64 = *(_DWORD *)(v22 + 64);
            *(_DWORD *)(v22 + 48) |= 7u;
            v42 = v74;
            *(_DWORD *)(v22 + 64) = v64 | 0x1000000;
          }
          v46 = v71;
          if ( !*(_QWORD *)(a1 + 64) )
          {
            inserted = MiInsertSharedCommitNode((_QWORD *)a1, v71, 0);
            if ( inserted < 0 )
              goto LABEL_153;
            v75 = 1;
          }
          if ( v81 && !(unsigned int)MiChargeSegmentCommit(v72, v82) )
          {
            inserted = -1073741523;
            goto LABEL_153;
          }
          PlaceholderStorage = MiInsertVadCharges(v22, v46);
          inserted = PlaceholderStorage;
          if ( PlaceholderStorage >= 0 )
          {
            v47 = v77;
            if ( !*(_QWORD *)(a1 + 64) && *(int *)(a1 + 56) < 0 )
            {
              *(_DWORD *)(v22 + 48) |= 0x40000u;
              ++*(_QWORD *)(v47 + 336);
            }
            if ( PlaceholderVadToReplace )
            {
              MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v46, v47);
              ExAcquirePushLockExclusiveEx(v22 + 40, 0LL);
            }
            else
            {
              MiLockVad((__int64)CurrentThread, v22);
            }
            MiGetWsAndInsertVad(v22, v48);
            if ( !*(_QWORD *)(a1 + 64) && !*(_QWORD *)(v80 + 56) )
              *(_QWORD *)(v80 + 56) = v42;
            if ( v83 )
              MiAdvanceVadHint(v43, v78);
            if ( ((a7 - 4) & 0xFFFFFFFD) == 0 && *(_QWORD *)(a1 + 64) )
            {
              _InterlockedIncrement((volatile signed __int32 *)(a1 + 92));
              v42 = v74;
            }
            if ( (PerfGlobalGroupMask & 0x8000) != 0 )
              MiLogMapFileEvent(v22, 1061LL);
            v49 = 0;
            PlaceholderStorage = 0;
            if ( ((a7 & 2) == 0 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(a2 + 72) )
            {
              v50 = PlaceholderVadToReplace;
              if ( !PlaceholderVadToReplace )
              {
                MiUnlockVad((__int64)CurrentThread, v22);
                UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v46);
LABEL_63:
                *a3 = v42;
                return (unsigned int)v49;
              }
              v67 = (volatile signed __int64 *)BugCheckParameter2;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v67);
              KeAbPostRelease((ULONG_PTR)v67);
              UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v46);
              v49 = PlaceholderStorage;
              v42 = v74;
              goto LABEL_167;
            }
            UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v46);
            MiReferenceVad(v22);
            if ( (a7 & 2) != 0 && MiIsProcessCfgEnabled() )
            {
              v49 = MiCommitVadCfgBits(v22, 0LL, a9);
              if ( v49 < 0 )
              {
LABEL_161:
                v66 = PlaceholderVadToReplace;
                MiUnmapVad(v22, PlaceholderVadToReplace, 0LL);
                if ( v66 )
                  MiFinishPlaceholderVadReplacement(v66);
                return (unsigned int)v49;
              }
            }
            if ( *(_QWORD *)(a2 + 72) )
            {
              v52 = *(_DWORD *)(a2 + 68);
              if ( (unsigned int)(v52 - 1) > 1 && v52 != -2147483647 && v52 != 4 )
              {
                v53 = -1073741755;
                goto LABEL_160;
              }
              v53 = MiSecureVad(v22, v42, *(_QWORD *)(a2 + 24), v52, 0, (__int64)&v86);
              if ( v53 < 0 )
              {
LABEL_160:
                v49 = v53;
                goto LABEL_161;
              }
              **(_QWORD **)(a2 + 72) = v46 ^ qword_14043B0D0 ^ v86;
            }
            v50 = PlaceholderVadToReplace;
            if ( !PlaceholderVadToReplace )
            {
              MiUnlockAndDereferenceVad((char *)v22);
              goto LABEL_63;
            }
            MiUnlockAndDereferenceNestedVad((PVOID)v22);
LABEL_167:
            MiFinishPlaceholderVadReplacement(v50);
            goto LABEL_63;
          }
LABEL_153:
          v63 = CurrentThread;
LABEL_154:
          if ( PlaceholderVadToReplace )
            MiUnlockVad((__int64)v63, (__int64)PlaceholderVadToReplace);
          v41 = v70;
          goto LABEL_88;
        }
        v42 = v78 + *a4;
      }
      v55 = *(_QWORD *)(a2 + 24) - 1LL;
      v74 = v42;
      v56 = v42 + v55;
      v62 = (*(_DWORD *)(a2 + 52) & 0x4000000) == 0;
      v79 = v56;
      if ( v62 )
      {
        if ( (unsigned int)MiIsVaRangeAvailable(v71, v42, (int)v56 - (int)v42 + 1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
          goto LABEL_34;
        inserted = -1073741800;
      }
      else
      {
        PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                           v42,
                                           v56,
                                           *(_BYTE *)(a2 + 96),
                                           &PlaceholderStorage);
        if ( PlaceholderVadToReplace )
          goto LABEL_34;
        inserted = PlaceholderStorage;
      }
LABEL_88:
      v35 = v71;
      goto LABEL_89;
    }
    PlaceholderStorage = MiCreatePlaceholderStorage(v22);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage >= 0 )
    {
      v31 = a5;
      v34 = (__int64 *)v72;
      goto LABEL_25;
    }
  }
  else
  {
    inserted = -1073741670;
  }
LABEL_93:
  MiRemoveViewsFromSectionWithPfn((__int64 *)v72, v76, 8u);
LABEL_94:
  MiDereferenceControlArea(a1);
  if ( v22 )
  {
    if ( *(__int64 *)(v22 + 120) < 0 )
      MiDereferenceExtendInfo(v22, a1);
    v57 = *(void **)(v22 + 128);
    if ( v57 )
      ObfDereferenceObject(v57);
    MiFreePlaceholderStorage(v22);
    ExFreePoolWithTag((PVOID)v22, 0);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)inserted;
}
