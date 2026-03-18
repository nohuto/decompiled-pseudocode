/*
 * XREFs of MiMapViewOfDataSection @ 0x14060AE10
 * Callers:
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14001CC70 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D554 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiReferenceVad @ 0x140053A20 (MiReferenceVad.c)
 *     MiLocatePagefileSubsection @ 0x1400710EC (MiLocatePagefileSubsection.c)
 *     MiGetCommittedPages @ 0x1400716F8 (MiGetCommittedPages.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071A78 (LOCK_ADDRESS_SPACE.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x140072780 (MiGetControlAreaPtes.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     MiAweControlArea @ 0x140072924 (MiAweControlArea.c)
 *     MiGetWsAndInsertVad @ 0x140072C30 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     MiComputeContiguousSubsectionPte @ 0x1400736D4 (MiComputeContiguousSubsectionPte.c)
 *     MiLocateSubsectionNode @ 0x140073710 (MiLocateSubsectionNode.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140094B04 (MiRemoveViewsFromSectionWithPfn.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MiDereferenceControlArea @ 0x1400F87E4 (MiDereferenceControlArea.c)
 *     MiDereferenceExtendInfo @ 0x14013A500 (MiDereferenceExtendInfo.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402CC148 (MiIncrementLargeSubsections.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402DE9DC (MiFindPlaceholderVadToReplace.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402E539C (MiUnlockAndDereferenceNestedVad.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCommitVadCfgBits @ 0x1405EB568 (MiCommitVadCfgBits.c)
 *     MiIsVaRangeAvailable @ 0x1405EB9BC (MiIsVaRangeAvailable.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x14060B8C0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060BF50 (MiAdvanceVadHint.c)
 *     MiFindEmptyAddressRange @ 0x14060C040 (MiFindEmptyAddressRange.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MiUnmapVad @ 0x1406605C4 (MiUnmapVad.c)
 *     MiFindEmptyAddressRangeDown @ 0x1406BE090 (MiFindEmptyAddressRangeDown.c)
 *     MiSecureVad @ 0x1406BE644 (MiSecureVad.c)
 *     MiFreePlaceholderStorage @ 0x1406F1C80 (MiFreePlaceholderStorage.c)
 *     MiLogMapFileEvent @ 0x140887064 (MiLogMapFileEvent.c)
 *     MiCreatePlaceholderStorage @ 0x140898A4C (MiCreatePlaceholderStorage.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140898B00 (MiFinishPlaceholderVadReplacement.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140898BC4 (MiPreparePlaceholderVadReplacement.c)
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
        char *a9)
{
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 *v13; // rcx
  _DWORD *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // ecx
  int v19; // edx
  unsigned __int64 v20; // rax
  _DWORD *v21; // r15
  unsigned __int64 v22; // r13
  unsigned __int64 ControlAreaPtes; // r12
  bool v24; // si
  ULONG_PTR SubsectionNode; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r13
  int inserted; // esi
  __int64 v30; // r13
  __int64 v31; // r12
  PVOID PoolWithTag; // rax
  int v33; // eax
  int v34; // ecx
  int v35; // esi
  unsigned __int64 v36; // r13
  unsigned int v37; // ecx
  int v38; // eax
  __int64 v39; // rbx
  void *v40; // rbx
  __int64 v41; // rcx
  unsigned __int64 v42; // r9
  unsigned __int64 v43; // r8
  __int64 v44; // r11
  _KPROCESS *Process; // r13
  unsigned __int64 v46; // r10
  int v47; // ebx
  unsigned __int64 v48; // rdx
  __int64 v49; // r12
  __int64 v50; // r14
  int v51; // ebx
  __int64 v52; // rdi
  int v53; // r15d
  int v54; // eax
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r12
  unsigned __int64 v57; // r13
  int v58; // r10d
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // r14
  PVOID v64; // r13
  unsigned __int64 v66; // rbx
  int v67; // r9d
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rcx
  void *v71; // rcx
  unsigned __int64 v72; // rdx
  _DWORD *v73; // rax
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  bool v76; // zf
  struct _KTHREAD *v77; // r12
  __int64 *v78; // rax
  PVOID v79; // rbx
  volatile signed __int64 *v80; // rdi
  __int64 v81; // r8
  __int64 v82; // r9
  int PlaceholderStorage; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v85; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v86; // [rsp+68h] [rbp-98h]
  unsigned __int64 v87; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  PVOID PlaceholderVadToReplace; // [rsp+80h] [rbp-80h]
  unsigned __int64 v90; // [rsp+88h] [rbp-78h]
  int v91; // [rsp+90h] [rbp-70h] BYREF
  int v92; // [rsp+94h] [rbp-6Ch]
  int v93; // [rsp+98h] [rbp-68h]
  unsigned __int64 v94; // [rsp+A0h] [rbp-60h]
  __int64 v95; // [rsp+A8h] [rbp-58h]
  __int64 v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v98; // [rsp+C0h] [rbp-40h]
  PVOID P; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v100[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-18h]
  PVOID v102; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v103; // [rsp+F8h] [rbp-8h]
  __int64 v104; // [rsp+100h] [rbp+0h]
  __int64 v105; // [rsp+108h] [rbp+8h] BYREF
  ULONG_PTR v106; // [rsp+110h] [rbp+10h]

  v93 = 0;
  v10 = a2;
  v11 = a1;
  if ( MiAweControlArea(a1) )
    return 3221225485LL;
  v15 = *v13;
  v16 = *(_DWORD *)(v12 + 40);
  v17 = *(_QWORD *)(v12 + 88);
  v86 = v17;
  v98 = (unsigned __int64)v14;
  v96 = v15;
  v18 = v16 & 0x2000;
  if ( (v16 & 0x2000) != 0 && *(_DWORD **)(v11 + 64) == v14 )
    return 3221225485LL;
  v19 = v16 & 0x40000000;
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v19 || (v16 & 0x2000) != 0 || a7 == 24 || (a7 & 0xFFFFFFF8) == 0x10 || (a7 & 5) == 5 )
      return 3221225485LL;
    v76 = *(_DWORD **)(v11 + 64) == v14
        ? (*(_WORD *)(v15 + 12) & 0x1000) == 0
        : (*(_DWORD *)(v11 + 56) & 0x40000000) == 0;
    if ( v76 )
      return 3221225485LL;
  }
  else if ( v19 && ((v16 & 0x2000) != 0 || *(_DWORD **)(v17 + 1856) == v14 && (*(_DWORD *)(v10 + 72) & 1) == 0) )
  {
    return 3221225485LL;
  }
  v20 = *(_QWORD *)(v10 + 16);
  if ( (v20 < 0x200000 || ((v20 - 1) & *(_QWORD *)(v10 + 32)) == 0) && (!v18 || *a4 < 0x10000000000LL) )
  {
    CurrentThread = KeGetCurrentThread();
    v21 = v14;
    v95 = *(_QWORD *)(v17 + 1296) + 48LL;
    PlaceholderVadToReplace = v14;
    P = v14;
    v92 = (int)v14;
    MiCheckPurgeAndUpMapCount(v11);
    v22 = *a4 >> 12;
    v94 = (*a4 + *(_QWORD *)(v10 + 24)) >> 12;
    ControlAreaPtes = MiGetControlAreaPtes(v11);
    if ( v22 >= ControlAreaPtes )
    {
      inserted = -1073741793;
      goto LABEL_103;
    }
    v24 = 0;
    if ( *(_DWORD **)(v11 + 64) == v21 )
    {
      v100[0] = v22;
      BugCheckParameter2 = (ULONG_PTR)MiLocatePagefileSubsection((unsigned int *)(v11 + 128), v100);
      SubsectionNode = BugCheckParameter2;
      if ( !a8 && a7 == 24 )
        v24 = (*(_DWORD *)(v11 + 56) & 0x1000) != 0;
    }
    else
    {
      SubsectionNode = (ULONG_PTR)MiLocateSubsectionNode(v11, *a4, 0);
      BugCheckParameter2 = SubsectionNode;
    }
    v26 = *(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26);
    v27 = v94 - v26;
    v28 = v22 - v26;
    v103 = v28;
    v94 -= v26;
    if ( v24 )
    {
      v27 = 1LL;
      v94 = 1LL;
    }
    PlaceholderStorage = MiAddViewsForSection((__int64 *)SubsectionNode, v27, 8);
    inserted = PlaceholderStorage;
    if ( PlaceholderStorage < 0 )
      goto LABEL_103;
    v30 = *(_QWORD *)(BugCheckParameter2 + 8) + 8 * v28;
    v104 = v30;
    if ( *(_DWORD **)(v11 + 64) == v21 && a8 && MiGetCommittedPages((_QWORD *)v11) < ControlAreaPtes )
      v98 = ((a8 & 0xFFF) != 0) + (a8 >> 12);
    v97 = 0LL;
    v31 = *(_QWORD *)(a5 + 24) << 12;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v102 = PoolWithTag;
    v21 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x88uLL);
      v33 = v21[16];
      v34 = 0;
      *((_QWORD *)v21 + 9) = BugCheckParameter2;
      v35 = a7;
      if ( a6 == 1 )
        v34 = 0x4000000;
      *((_QWORD *)v21 + 10) = v30;
      v36 = v86;
      v37 = v33 & 0xFBFFFFFF | v34;
      *((_QWORD *)v21 + 2) = -2LL;
      v38 = (v21[12] ^ (a7 << 7)) & 0xF80;
      v21[16] = v37;
      v21[12] ^= v38;
      v21[12] ^= (v21[12] ^ (*(_DWORD *)(v10 + 52) << 12)) & 0x3F000;
      if ( *(_DWORD *)(v10 + 52) )
        *(_BYTE *)(*(_QWORD *)(v36 + 1296) + 352LL) = 1;
      if ( *(_QWORD *)(v11 + 64) && (*(_DWORD *)(v10 + 40) & 0x20002000) == 0 )
        v21[16] |= 0x2000000u;
      *((_QWORD *)v21 + 5) = 0LL;
      v106 = (ULONG_PTR)(v21 + 10);
      v21[16] = ((__int64)*a4 >> 16) & 0xFFFFFF | v21[16] & 0xFF000000;
      if ( (*(_DWORD *)(v10 + 60) & 0x4000000) == 0 )
      {
LABEL_24:
        v39 = *(_QWORD *)(a5 + 40);
        if ( (v39 & 3) != 0 )
        {
          v40 = (void *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
          ObfReferenceObject(v40);
        }
        else
        {
          v40 = 0LL;
        }
        *((_QWORD *)v21 + 16) = v40;
        if ( (*(_DWORD *)(v10 + 40) & 0x20000000) != 0 && *(_QWORD *)(v11 + 64) )
        {
          if ( (unsigned int)MiIncrementLargeSubsections((__int64 *)BugCheckParameter2, v94) > 1 )
          {
            inserted = -1073741280;
            goto LABEL_102;
          }
          v93 = 1;
        }
        LOCK_ADDRESS_SPACE((__int64)CurrentThread, v36);
        if ( (*(_DWORD *)(v36 + 780) & 0x20) != 0 )
        {
          inserted = -1073741558;
        }
        else
        {
          if ( (*(_DWORD *)(v10 + 72) & 1) != 0 )
          {
            v55 = *a3;
          }
          else
          {
            if ( !v31 )
            {
              v41 = 0LL;
              v42 = *(_QWORD *)(v10 + 8);
              v43 = *(_QWORD *)(v10 + 16);
              v44 = *(_QWORD *)v10;
              Process = KeGetCurrentThread()->ApcState.Process;
              v46 = *(_QWORD *)(v10 + 24);
              v47 = *(_DWORD *)(v10 + 40);
              v90 = v43;
              v48 = Process[1].ActiveProcessors.Bitmap[17];
              v101 = v44;
              LODWORD(v85) = 0;
              v91 = 0;
              v97 = 0LL;
              v87 = 0LL;
              if ( v42 > v48 - 1 && v48 <= 0x100000000LL )
                v41 = 2LL;
              v49 = *(_QWORD *)&Process[1].IdealNode[14] + 8 * (v41 + 8 * v41 + 6);
              if ( (v47 & 0x20400000) != 541065216 && (v47 & 0x20000000) != 0 && v46 >= 0x40000000 && v43 == 0x200000 )
              {
                LODWORD(v85) = 1;
                v90 = 0x40000000LL;
              }
              v50 = v90;
              v51 = v47 & 0x100000;
              v52 = v42;
              v53 = v46;
              while ( 1 )
              {
                v54 = v51 || (Process[1].DirectoryTableBase & 0x20000000000000LL) != 0
                    ? MiFindEmptyAddressRangeDown(v49, v53, v50, 0, v44, v52, v35, (__int64)&v87)
                    : MiFindEmptyAddressRange(v49, v53, v50, 0, v44, v52, v35, (__int64)&v87, (__int64)&v91);
                inserted = v54;
                if ( v54 >= 0 || (_DWORD)v85 != 1 )
                  break;
                v44 = v101;
                v50 = 0x200000LL;
                v35 = a7;
                LODWORD(v85) = 0;
              }
              v10 = a2;
              v76 = v50 == 0x10000;
              v11 = a1;
              v21 = v102;
              if ( v76 && v91 == 1 )
                v97 = v49;
              PlaceholderStorage = v54;
              if ( v54 < 0 )
                goto LABEL_171;
              v55 = v87;
              v85 = v87;
              v90 = *(_QWORD *)(a2 + 24) + v87 - 1;
LABEL_42:
              v56 = v55 >> 12;
              v57 = v90 >> 12;
              *((_BYTE *)v21 + 32) = v55 >> 44;
              *((_BYTE *)v21 + 33) = BYTE4(v57);
              v21[6] = v55 >> 12;
              v21[7] = v57;
              if ( (*(_DWORD *)(v10 + 40) & 0x2000) != 0 )
              {
                --CurrentThread->SpecialApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140464290, 0LL);
                v55 = *(_QWORD *)(v96 + 32);
                if ( v55 )
                {
                  ++*(_DWORD *)(v55 + 8);
                }
                else
                {
                  v73 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x78436D4Du);
                  v55 = (unsigned __int64)v73;
                  if ( !v73 )
                  {
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464290);
                    KeAbPostRelease((ULONG_PTR)&qword_140464290);
                    v77 = CurrentThread;
                    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    inserted = -1073741670;
                    goto LABEL_169;
                  }
                  v74 = v96;
                  v73[2] = 1;
                  *(_QWORD *)v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 24), -1LL, -1LL);
                  *(_QWORD *)(v74 + 32) = v73;
                }
                v75 = *(_QWORD *)(a5 + 48);
                if ( *(_QWORD *)v55 < v75 )
                  *(_QWORD *)v55 = v75;
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140464290, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)&qword_140464290);
                KeAbPostRelease((ULONG_PTR)&qword_140464290);
                KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                *((_QWORD *)v21 + 15) = v55;
                LODWORD(v55) = v87;
                v85 = v87;
              }
              if ( (a7 & 5) == 5 )
              {
                v72 = ((unsigned int)v21[7] | ((unsigned __int64)*((unsigned __int8 *)v21 + 33) << 32))
                    - ((unsigned int)v21[6] | ((unsigned __int64)*((unsigned __int8 *)v21 + 32) << 32))
                    + 1;
                v21[13] ^= ((v21[7] - v21[6] + 1) ^ v21[13]) & 0x7FFFFFFF;
                *((_BYTE *)v21 + 34) = v72 >> 31;
              }
              *((_QWORD *)v21 + 11) = MiComputeContiguousSubsectionPte(BugCheckParameter2, v103 + v57 - v56);
              if ( (*(_DWORD *)(v10 + 40) & 0x400000) != 0 || (*(_DWORD *)(a5 + 56) & 0x4000) != 0 )
              {
                P = (PVOID)MiAddSecureEntry((_DWORD)v21, v55, v58, 0x80000000, 0);
                if ( !P )
                {
                  inserted = -1073741670;
                  goto LABEL_168;
                }
              }
              if ( (*(_DWORD *)(v10 + 40) & 0x20000000) != 0 )
              {
                v21[12] = v21[12] & 0xFFFFFF8F | 0x50;
                v21[16] |= 0x1000000u;
                v85 = v87;
              }
              if ( !*(_QWORD *)(v11 + 64) )
              {
                inserted = MiInsertSharedCommitNode((_QWORD *)v11, v86, 0);
                if ( inserted < 0 )
                  goto LABEL_168;
                v92 = 1;
              }
              if ( v98 && !(unsigned int)MiChargeSegmentCommit(BugCheckParameter2, v104) )
              {
                inserted = -1073741523;
                goto LABEL_168;
              }
              PlaceholderStorage = MiInsertVadCharges(v21, v86);
              inserted = PlaceholderStorage;
              if ( PlaceholderStorage >= 0 )
              {
                v59 = v95;
                if ( !*(_QWORD *)(v11 + 64) && *(int *)(v11 + 56) < 0 )
                {
                  v21[12] = v21[12] & 0xFFF3FFFF | 0x40000;
                  ++*(_QWORD *)(v59 + 384);
                }
                if ( PlaceholderVadToReplace )
                {
                  MiPreparePlaceholderVadReplacement(PlaceholderVadToReplace, v86, v59);
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v21 + 10), 0LL);
                }
                else
                {
                  MiLockVad((__int64)CurrentThread, (__int64)v21);
                }
                MiGetWsAndInsertVad((unsigned __int64)v21, v60);
                if ( !*(_QWORD *)(v11 + 64) && !*(_QWORD *)(v96 + 56) )
                  *(_QWORD *)(v96 + 56) = v85;
                if ( v97 )
                  MiAdvanceVadHint(v56, v57);
                if ( ((a7 - 4) & 0xFFFFFFFD) != 0 || !*(_QWORD *)(v11 + 64) )
                {
                  v63 = v85;
                }
                else
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v11 + 92));
                  v63 = v87;
                }
                if ( (PerfGlobalGroupMask & 0x8000) != 0 )
                  MiLogMapFileEvent(v21, 1061LL);
                inserted = 0;
                PlaceholderStorage = 0;
                if ( ((a7 & 2) == 0 || !MiIsProcessCfgEnabled()) && !*(_QWORD *)(v10 + 80) )
                {
                  v64 = PlaceholderVadToReplace;
                  if ( !PlaceholderVadToReplace )
                  {
                    MiUnlockVad((__int64)CurrentThread, (__int64)v21);
                    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v86);
LABEL_72:
                    *a3 = v63;
                    return (unsigned int)inserted;
                  }
                  v80 = (volatile signed __int64 *)v106;
                  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v106, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                    ExfTryToWakePushLock(v80);
                  KeAbPostRelease((ULONG_PTR)v80);
                  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v86, v81, v82);
                  inserted = PlaceholderStorage;
                  v63 = v87;
                  goto LABEL_182;
                }
                v66 = v86;
                UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, v86, v61, v62);
                MiReferenceVad((__int64)v21);
                if ( (a7 & 2) != 0 && MiIsProcessCfgEnabled() )
                {
                  inserted = MiCommitVadCfgBits((__int64)v21, 0LL, a9);
                  if ( inserted < 0 )
                  {
LABEL_176:
                    v79 = PlaceholderVadToReplace;
                    MiUnmapVad(v21, PlaceholderVadToReplace, 0LL);
                    if ( v79 )
                      MiFinishPlaceholderVadReplacement(v79);
                    return (unsigned int)inserted;
                  }
                }
                if ( *(_QWORD *)(v10 + 80) )
                {
                  v67 = *(_DWORD *)(v10 + 76);
                  if ( (unsigned int)(v67 - 1) > 1 && v67 != -2147483647 && v67 != 4 )
                  {
                    v68 = -1073741755;
                    goto LABEL_175;
                  }
                  v68 = MiSecureVad((_DWORD)v21, v63, *(_QWORD *)(v10 + 24), v67, 0, (__int64)&v105);
                  if ( v68 < 0 )
                  {
LABEL_175:
                    inserted = v68;
                    goto LABEL_176;
                  }
                  **(_QWORD **)(v10 + 80) = v66 ^ qword_140465728 ^ v105;
                }
                v64 = PlaceholderVadToReplace;
                if ( !PlaceholderVadToReplace )
                {
                  MiUnlockAndDereferenceVad((char *)v21);
                  goto LABEL_72;
                }
                MiUnlockAndDereferenceNestedVad(v21);
LABEL_182:
                MiFinishPlaceholderVadReplacement(v64);
                goto LABEL_72;
              }
LABEL_168:
              v77 = CurrentThread;
LABEL_169:
              if ( PlaceholderVadToReplace )
                MiUnlockVad((__int64)v77, (__int64)PlaceholderVadToReplace);
LABEL_171:
              v36 = v86;
              goto LABEL_98;
            }
            v55 = v31 + *a4;
          }
          v69 = *(_QWORD *)(v10 + 24) - 1LL;
          v85 = v55;
          v70 = v55 + v69;
          v87 = v55;
          v76 = (*(_DWORD *)(v10 + 60) & 0x4000000) == 0;
          v90 = v70;
          if ( v76 )
          {
            if ( MiIsVaRangeAvailable(v36, v55, v70 - v55 + 1, *(_QWORD *)v10, *(_QWORD *)(v10 + 8)) )
              goto LABEL_42;
            inserted = -1073741800;
          }
          else
          {
            PlaceholderVadToReplace = (PVOID)MiFindPlaceholderVadToReplace(
                                               v55,
                                               v70,
                                               *(_BYTE *)(v10 + 104),
                                               &PlaceholderStorage);
            if ( PlaceholderVadToReplace )
              goto LABEL_42;
            inserted = PlaceholderStorage;
          }
        }
LABEL_98:
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v36);
        if ( v92 == 1 )
          MiRemoveSharedCommitNode((_QWORD *)v11, v36, 0);
        if ( v93 )
        {
          v78 = MiLocateSubsectionNode(v11, *(_QWORD *)(v10 + 32) + *a4 - 1, 0);
          MiDecrementLargeSubsections((__int64 *)BugCheckParameter2, v78);
        }
        goto LABEL_102;
      }
      PlaceholderStorage = MiCreatePlaceholderStorage(v21);
      inserted = PlaceholderStorage;
      if ( PlaceholderStorage >= 0 )
      {
        v35 = a7;
        goto LABEL_24;
      }
    }
    else
    {
      inserted = -1073741670;
    }
LABEL_102:
    MiRemoveViewsFromSectionWithPfn((__int64 *)BugCheckParameter2, v94, 8u);
LABEL_103:
    MiDereferenceControlArea(v11);
    if ( v21 )
    {
      if ( *((__int64 *)v21 + 15) < 0 )
        MiDereferenceExtendInfo((__int64)v21, v11);
      v71 = (void *)*((_QWORD *)v21 + 16);
      if ( v71 )
        ObfDereferenceObject(v71);
      MiFreePlaceholderStorage(v21);
      ExFreePoolWithTag(v21, 0);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)inserted;
  }
  return 3221225503LL;
}
