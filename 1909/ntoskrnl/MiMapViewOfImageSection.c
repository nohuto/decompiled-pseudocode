/*
 * XREFs of MiMapViewOfImageSection @ 0x1405EAA40
 * Callers:
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x1408870CC (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiIsProcessCfgEnabled @ 0x14001CC70 (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D554 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     MiReferenceVad @ 0x140053A20 (MiReferenceVad.c)
 *     MiControlAreaRequiresCharge @ 0x140071490 (MiControlAreaRequiresCharge.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071A78 (LOCK_ADDRESS_SPACE.c)
 *     MiReferenceActiveSubsection @ 0x140072590 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x140072C30 (MiGetWsAndInsertVad.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MiLocateVadEvent @ 0x1400E8414 (MiLocateVadEvent.c)
 *     MiDereferenceControlArea @ 0x1400F87E4 (MiDereferenceControlArea.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402BA344 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402BCCAC (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x1402C7A10 (MiRemoveVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1405EB544 (MiReferenceFileObjectForMap.c)
 *     MiCommitVadCfgBits @ 0x1405EB568 (MiCommitVadCfgBits.c)
 *     MiAllowImageMap @ 0x1405EB884 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x1405EB9BC (MiIsVaRangeAvailable.c)
 *     PsCallImageNotifyRoutines @ 0x1405EC0D0 (PsCallImageNotifyRoutines.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiAddSecureEntry @ 0x14060B8C0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14060BF50 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14060C3A0 (MiSelectUserAddress.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 *     MiAllocateFixupVad @ 0x140641CF0 (MiAllocateFixupVad.c)
 *     MiUnmapVad @ 0x1406605C4 (MiUnmapVad.c)
 *     MiArbitraryCodeBlocked @ 0x14067DCBC (MiArbitraryCodeBlocked.c)
 *     MiSecureVad @ 0x1406BE644 (MiSecureVad.c)
 *     MiDereferencePerSessionProtos @ 0x1406E9B08 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406E9C20 (MiCreatePerSessionProtos.c)
 *     MiLoadUserSymbols @ 0x140789CE0 (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x140887064 (MiLogMapFileEvent.c)
 *     MiCreateLargePageVad @ 0x140899374 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140899728 (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x140899CBC (MiMapUserLargePages.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  _DWORD *v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // rsi
  bool v14; // zf
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 result; // rax
  int v18; // ecx
  unsigned int v19; // ebx
  _DWORD *v20; // rax
  unsigned __int64 v21; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v23; // rsi
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  int v33; // eax
  unsigned __int64 v34; // rdi
  __int64 v35; // r10
  int v36; // edi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r12
  ULONG_PTR v41; // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // r13d
  __int64 v45; // rdi
  int PerSessionProtos; // edi
  int v47; // eax
  int v48; // r11d
  __int64 v49; // rdx
  char *v50; // r13
  unsigned __int64 v51; // rdi
  unsigned __int16 v52; // ax
  int v53; // r12d
  __int16 v54; // bx
  __int64 v55; // rdi
  __int64 v56; // rdx
  unsigned int v57; // ecx
  int v58; // eax
  BOOL IsProcessCfgEnabled; // eax
  __int16 v60; // cx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 FixupVad; // r13
  unsigned __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // r13
  unsigned int v70; // eax
  __int64 v71; // rax
  __int16 v72; // cx
  __int64 v73; // rax
  __int16 v74; // cx
  unsigned int v75; // eax
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  __int16 v78; // cx
  unsigned __int64 v79; // rdx
  int LargePageVad; // r12d
  void *v81; // rcx
  unsigned __int64 v82; // rcx
  void *v83; // rcx
  __int64 v84; // r8
  unsigned int SessionId; // eax
  void *v86; // rcx
  __int64 VadEvent; // rax
  unsigned __int64 v88; // r8
  char v89; // r9
  __int64 v90; // rax
  unsigned __int64 v91; // rdi
  unsigned __int64 v92; // rdi
  __int64 v93; // r8
  __int64 v94; // r9
  int v95; // r9d
  _QWORD *v96; // rax
  int v97; // [rsp+20h] [rbp-E0h]
  __int64 v98; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v99; // [rsp+50h] [rbp-B0h]
  __int64 v100; // [rsp+50h] [rbp-B0h]
  __int64 v101; // [rsp+58h] [rbp-A8h]
  __int64 v102; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v103; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v104; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  __int64 v106; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v107; // [rsp+88h] [rbp-78h]
  __int64 v108; // [rsp+90h] [rbp-70h] BYREF
  __int64 v109; // [rsp+98h] [rbp-68h]
  unsigned __int64 v110; // [rsp+A0h] [rbp-60h]
  _QWORD v111[7]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v112[11]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v114; // [rsp+188h] [rbp+88h]
  unsigned int v115; // [rsp+188h] [rbp+88h]

  v9 = (_DWORD *)a1;
  memset(v112, 0, 0x48uLL);
  memset(v111, 0, sizeof(v111));
  v10 = *(_QWORD *)v9;
  v11 = 0;
  v12 = *(_QWORD *)(a2 + 88);
  v102 = *(_QWORD *)v9;
  v13 = *(_QWORD *)(*(_QWORD *)v9 + 56LL);
  v109 = v13;
  if ( dword_14046458C
    && dword_140464590 == *(_DWORD *)(v13 + 60)
    && dword_140464594 == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v14 = (v9[14] & 0x10000000) == 0;
  v15 = *(_QWORD *)(v10 + 32);
  v99 = *(_QWORD *)(v10 + 48);
  v104 = v15;
  if ( (!v14 || (*(_DWORD *)(v12 + 1788) & 0x2000) != 0) && (*(_BYTE *)(v10 + 15) & 1) == 0 )
    v11 = 1025;
  v16 = *(_DWORD *)(a2 + 40);
  v101 = *(_QWORD *)(a2 + 16);
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v15 < 0x100000000LL || v11 >= 0x400 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
      return 3221226089LL;
    v101 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v16 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v11 |= 0x200u;
  }
  if ( (v11 & 0x200) == 0 )
  {
    result = MiAllowImageMap(v12, a5, v9, v13);
    if ( (int)result < 0 )
      return result;
    v18 = *(_DWORD *)(v12 + 2128);
    if ( (v18 & 0x10) != 0 && (*(_BYTE *)(v13 + 51) & 4) == 0 )
    {
      if ( (*(_BYTE *)(v13 + 44) & 1) == 0 )
      {
        v11 |= 1u;
        goto LABEL_12;
      }
      if ( (v18 & 8) != 0 )
        return 3221226089LL;
    }
  }
LABEL_12:
  v19 = v11 | 2;
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 && (*(_DWORD *)(v12 + 2128) & 0x40) == 0 )
  {
    v19 |= 1u;
    if ( v19 < 0x400 )
      v19 &= ~2u;
  }
  v107 = 0LL;
  if ( (v19 & 0x200) != 0 )
    goto LABEL_17;
  v20 = v9 + 32;
  if ( v9 == (_DWORD *)-128LL )
    goto LABEL_17;
  while ( (v20[8] & 0xEu) < 0xC )
  {
    v20 = (_DWORD *)*((_QWORD *)v20 + 2);
    if ( !v20 )
      goto LABEL_17;
  }
  result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 96));
  if ( (int)result >= 0 )
  {
LABEL_17:
    BugCheckParameter2 = (ULONG_PTR)(v9 + 32);
    MiCheckPurgeAndUpMapCount((__int64)v9);
    v21 = *(_QWORD *)(a2 + 24);
    v114 = v21;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
    v23 = (unsigned __int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      MiDereferenceControlArea((__int64)v9);
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0x88uLL);
    v24 = *(_DWORD *)(v23 + 64) & 0xFBFFFFFF;
    *(_QWORD *)(v23 + 16) = -2LL;
    v25 = 0;
    if ( a6 == 1 )
      v25 = 0x4000000;
    v26 = v25 | v24;
    v27 = *(_DWORD *)(v23 + 48);
    *(_DWORD *)(v23 + 64) = v26;
    v28 = v27 & 0xFFFFFF8F | 0x20;
    *(_DWORD *)(v23 + 48) = v28;
    v29 = v28 ^ (v28 ^ (*(_DWORD *)(a2 + 52) << 12)) & 0x3F000;
    *(_DWORD *)(v23 + 48) = v29;
    if ( a5 )
    {
      v30 = MiReferenceFileObjectForMap(a5);
      v31 = *(_DWORD *)(v23 + 64);
      *(_QWORD *)(v23 + 128) = v30;
      LODWORD(v30) = v31 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
      v29 = *(_DWORD *)(v23 + 48);
      *(_DWORD *)(v23 + 64) = v30;
    }
    *(_QWORD *)(v23 + 40) = 0LL;
    if ( (v19 & 0x200) != 0 )
    {
      v70 = v19 | 1;
      LOWORD(v19) = v19 & 0xFFFC | 1;
      *(_DWORD *)(v23 + 48) = v29 & 0xFFFFF07F | 0x80;
      if ( v70 >= 0x400 )
        LOWORD(v19) = v70;
    }
    else
    {
      *(_DWORD *)(v23 + 48) = v29 & 0xFFFFF07F | 0x380;
      if ( (*(_BYTE *)(v12 + 728) & 1) != 0 )
        *(_DWORD *)(v23 + 64) |= 0x10000000u;
      *(_DWORD *)(v23 + 52) ^= (v99 ^ *(_DWORD *)(v23 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v23 + 34) = v99 >> 31;
    }
    CurrentThread = KeGetCurrentThread();
    v33 = *(_DWORD *)(a2 + 72);
    v106 = 0LL;
    v100 = (__int64)CurrentThread;
    if ( (v33 & 1) == 0 || v101 == 0x200000 )
      v34 = v104 + *(unsigned int *)a4;
    else
      v34 = *a3;
    v103 = v34;
    if ( v101 == 0x200000 )
    {
      v114 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
      *(_DWORD *)(v23 + 52) ^= ((v114 >> 12) ^ *(_DWORD *)(v23 + 52)) & 0x7FFFFFFF;
      LOWORD(v19) = v19 & 0xFFFC | 1;
      *(_BYTE *)(v23 + 34) = v114 >> 43;
      *(_DWORD *)(v23 + 64) |= 0x1000000u;
      LargePageVad = MiCreateLargePageVad(v12, v23, 0LL, 0LL);
      if ( LargePageVad < 0 )
      {
        v81 = *(void **)(v23 + 128);
        if ( v81 )
          ObfDereferenceObject(v81);
        MiDereferenceControlArea((__int64)v9);
        ExFreePoolWithTag((PVOID)v23, 0);
        return (unsigned int)LargePageVad;
      }
      v21 = v114;
      CurrentThread = (struct _KTHREAD *)v100;
    }
    v108 = 0LL;
    if ( MiUserHotPatchReserveSize
      && *(_WORD *)(v109 + 48) == 0x8664
      && (v19 & 0x200) == 0
      && (*(_DWORD *)(v23 + 64) & 0x1000000) == 0
      && v21 < 0x7FFFFFFF
      && (*(_BYTE *)(v12 + 728) & 1) == 0 )
    {
      if ( (v21 >> 12) + ((v21 & 0xFFF) != 0) == *(_DWORD *)(v102 + 8) )
      {
        v82 = v21 + (unsigned int)MiUserHotPatchReserveSize;
        if ( v82 < v21 )
        {
          v83 = *(void **)(v23 + 128);
          if ( v83 )
            ObfDereferenceObject(v83);
          MiDereferenceControlArea((__int64)v9);
          ExFreePoolWithTag((PVOID)v23, 0);
          return 3221225503LL;
        }
        v21 += (unsigned int)MiUserHotPatchReserveSize;
        v114 = v82;
      }
      CurrentThread = (struct _KTHREAD *)v100;
    }
    if ( (*(_DWORD *)(v23 + 48) & 0xF80) == 0x380
      && *(_QWORD *)(v12 + 744)
      && (*(_DWORD *)(v12 + 1788) & 0x1000) == 0
      && v12 != PsSecureSystemProcess
      && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
    {
      LOWORD(v19) = v19 | 0x800;
    }
    LODWORD(v112[8]) = 32;
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, v12);
    if ( (*(_DWORD *)(v12 + 780) & 0x20) != 0 )
    {
      PerSessionProtos = -1073741558;
LABEL_202:
      if ( (v19 & 0x80u) != 0 )
      {
        SessionId = MmGetSessionIdEx(v12);
        MiDereferencePerSessionProtos(v9, SessionId);
      }
      if ( (v19 & 0x100) != 0 )
        MiReturnCrossPartitionControlAreaCharges((__int64)v9);
      if ( (v19 & 0x40) != 0 )
        MiRemoveSharedCommitNode(v9, v12, 0LL);
      UNLOCK_ADDRESS_SPACE(v100, v12);
      if ( (v19 & 0x20) != 0 )
        MiRemoveVadEvent(v23, v112);
      if ( v23 )
      {
        if ( v101 == 0x200000 )
          MiFreeLargePageView(v12, v23, 0LL);
        v86 = *(void **)(v23 + 128);
        if ( v86 )
          ObfDereferenceObject(v86);
        ExFreePoolWithTag((PVOID)v23, 0);
      }
      MiDereferenceControlArea((__int64)v9);
      return (unsigned int)PerSessionProtos;
    }
    v35 = v101;
    if ( (*(_DWORD *)(a2 + 72) & 1) != 0 && v101 != 0x200000 )
    {
      if ( !(unsigned int)MiIsVaRangeAvailable(v12, v34, v21, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      {
        PerSessionProtos = -1073741800;
        goto LABEL_202;
      }
LABEL_41:
      v36 = 1073741827;
      v37 = v103;
      v38 = v104;
      v39 = v103 - *(unsigned int *)a4;
      if ( v39 == v104 )
        v36 = 0;
      *(_DWORD *)(v23 + 24) = v103 >> 12;
      v104 = v37 >> 12;
      v40 = (v37 - 1 + v21) >> 12;
      *(_BYTE *)(v23 + 32) = v37 >> 44;
      *(_BYTE *)(v23 + 33) = BYTE4(v40);
      *(_DWORD *)(v23 + 28) = v40;
      v41 = BugCheckParameter2;
      v42 = *a4 >> 12;
      v110 = v40;
      v43 = *(unsigned int *)(BugCheckParameter2 + 44);
      if ( v42 >= v43 )
      {
        do
        {
          v41 = *(_QWORD *)(v41 + 16);
          v42 -= v43;
          v43 = *(unsigned int *)(v41 + 44);
        }
        while ( v42 >= v43 );
        BugCheckParameter2 = v41;
      }
      *(_QWORD *)(v23 + 72) = v41;
      v44 = v36;
      v115 = v36;
      *(_QWORD *)(v23 + 80) = *(_QWORD *)(v41 + 8) + 8 * v42;
      *(_QWORD *)(v23 + 88) = *(_QWORD *)(v102 + 64) + 8 * (*(unsigned int *)(v102 + 8) - 1LL);
      if ( (a8 & 4) == 0 )
      {
        v115 = v36;
        if ( v12 != PsSecureSystemProcess )
        {
          v115 = v36;
          if ( v39 != v38 )
          {
            if ( (*(_DWORD *)(a2 + 40) & 0x800000) == 0 && (v19 & 0x400) == 0
              || (*(_DWORD *)(a1 + 56) & 0x800) != 0
              || (v19 & 2) == 0 )
            {
              v115 = v36;
              if ( (v19 & 0x400) != 0 )
              {
                PerSessionProtos = -1073741800;
                goto LABEL_201;
              }
            }
            else
            {
              FixupVad = MiAllocateFixupVad(v23);
              if ( FixupVad )
              {
                ExFreePoolWithTag((PVOID)v23, 0);
                v23 = FixupVad;
                v44 = 1073741878;
                v115 = 1073741878;
              }
              else
              {
                v115 = v36;
                v44 = v36;
                if ( (v19 & 0x400) != 0 )
                {
                  PerSessionProtos = -1073741670;
                  goto LABEL_201;
                }
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 52) )
        *(_BYTE *)(*(_QWORD *)(v12 + 1296) + 352LL) = 1;
      v45 = a1;
      if ( (*(_DWORD *)(a1 + 56) & 0x4000000) != 0 )
      {
        v75 = MmGetSessionIdEx(v12);
        PerSessionProtos = MiCreatePerSessionProtos(a1, v75);
        if ( PerSessionProtos < 0 )
          goto LABEL_201;
        v45 = a1;
        LOWORD(v19) = v19 | 0x80;
      }
      if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
      {
        v90 = *(unsigned int *)(v23 + 52);
        LODWORD(v90) = v90 & 0x7FFFFFFF;
        v91 = v90 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 34) << 31);
        v92 = MiUpdatePrivateDemandZeroView(v12, v23, 0) + v91;
        *(_DWORD *)(v23 + 52) ^= (v92 ^ *(_DWORD *)(v23 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v23 + 34) = v92 >> 31;
        v112[1] = v100;
        MiInsertVadEvent(v23, v112, 0);
        v45 = a1;
        LOWORD(v19) = v19 | 0x20;
      }
      PerSessionProtos = MiInsertSharedCommitNode(v45, v12, 0LL);
      if ( PerSessionProtos < 0 )
        goto LABEL_201;
      LOWORD(v19) = v19 | 0x40;
      v47 = MiControlAreaRequiresCharge(a1, (a8 & 8) != 0);
      if ( v47 )
      {
        if ( v47 == 2 )
        {
          PerSessionProtos = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v48, 0x11u);
          if ( PerSessionProtos < 0 )
            goto LABEL_201;
          LOWORD(v19) = v19 | 0x100;
        }
        PerSessionProtos = MiInsertVadCharges(v23, v12);
        if ( PerSessionProtos >= 0 )
        {
          if ( v44 == 1073741878 )
            ++*(_QWORD *)(*(_QWORD *)(v12 + 1296) + 384LL);
          MiGetWsAndInsertVad(v23, v49);
          v50 = 0LL;
          if ( v101 == 0x200000 )
          {
            MiLockVad(v100, v23);
            PerSessionProtos = MiMapUserLargePages(v23, 0LL, 0LL);
            if ( PerSessionProtos < 0 )
            {
              UNLOCK_ADDRESS_SPACE_UNORDERED(v100, v12, v93, v94);
              goto LABEL_238;
            }
            MiUnlockVad(v100, v23);
          }
          if ( v106 )
            MiAdvanceVadHint(v104, v40);
          v51 = (v107 << 16) + v103;
          v103 = v51;
          *a3 = v51;
          if ( !*(_BYTE *)(v109 + 50)
            || (v52 = *(_WORD *)(v109 + 48), v52 >= MEMORY[0xFFFFF7800000002C]) && v52 <= MEMORY[0xFFFFF7800000002E]
            || (v71 = *(_QWORD *)(v12 + 1064)) != 0 && ((v72 = *(_WORD *)(v71 + 8), v72 == 332) || v72 == 452) )
          {
            v53 = v115;
          }
          else
          {
            v53 = 1073741838;
            v115 = 1073741838;
          }
          if ( (PerfGlobalGroupMask & 0x8000) != 0 )
            MiLogMapFileEvent(v23, 1061LL);
          v54 = v19 | 4;
          if ( (v54 & 0x200) != 0 )
          {
LABEL_85:
            if ( (v54 & 8) == 0 )
            {
              v65 = v100;
LABEL_98:
              if ( (v54 & 4) != 0 )
                UNLOCK_ADDRESS_SPACE(v65, v12);
              if ( (v54 & 0x200) == 0 && a5 && (*(_BYTE *)(v12 + 728) & 1) == 0 )
                *(_DWORD *)(a2 + 72) |= 4u;
              return v115;
            }
            MiLockVad(v100, v23);
            UNLOCK_ADDRESS_SPACE_UNORDERED(v100, v12, v61, v62);
            v54 &= ~4u;
            if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
            {
              MiUpdatePrivateDemandZeroView(v12, v23, 1);
              MiRemoveVadEvent(v23, v112);
              v54 &= ~0x20u;
            }
            if ( (v54 & 0x10) == 0 || (PerSessionProtos = MiCommitVadCfgBits(v23, 0LL, 0LL), PerSessionProtos >= 0) )
            {
              if ( *(_QWORD *)(a2 + 80) )
              {
                v95 = *(_DWORD *)(a2 + 76);
                if ( v95 != 4 && (unsigned int)(v95 - 1) > 1 && v95 != -2147483647 )
                {
                  PerSessionProtos = -1073741755;
                  goto LABEL_238;
                }
                PerSessionProtos = MiSecureVad(v23, v103, *(_QWORD *)(a2 + 24), v95, 0, (__int64)&v108);
                if ( PerSessionProtos < 0 )
                  goto LABEL_238;
                **(_QWORD **)(a2 + 80) = v12 ^ v108 ^ qword_140465728;
                v63 = 0LL;
              }
              else
              {
                v63 = v108;
              }
              if ( (v54 & 0x800) == 0
                || (v63 = MiAddSecureEntry(v23, (_DWORD)v104 << 12, ((_DWORD)v110 << 12) | 0xFFFu, -2147483647, 0)) != 0 )
              {
                v64 = v23;
                v65 = v100;
                MiUnlockVad(v100, v64);
                if ( (v54 & 0x800) != 0 )
                {
                  PsCallImageNotifyRoutines(v50 + 88, v12, v111, v50, v97);
                  ObfDereferenceObject(v50);
                }
                if ( v63 )
                  MmUnsecureVirtualMemory((HANDLE)(v12 ^ v63 ^ qword_140465728));
                goto LABEL_98;
              }
              PerSessionProtos = -1073741670;
            }
LABEL_238:
            MiReferenceVad(v23);
            if ( v50 )
              ObfDereferenceObject(v50);
            MiUnmapVad(v23, 0LL, 0LL);
            v96 = *(_QWORD **)(a2 + 80);
            if ( v96 )
              *v96 = 0LL;
            return (unsigned int)PerSessionProtos;
          }
          if ( (NtGlobalFlag & 0x40000) == 0
            || (v76 = (unsigned int)(v53 - 1073741827), (unsigned int)v76 <= 0x33)
            && (v77 = 0x8000000000801LL, _bittest64(&v77, v76)) )
          {
            v55 = a1;
          }
          else
          {
            v56 = v102;
            if ( (*(_BYTE *)(v100 + 1768) & 0x20) != 0
              || (v78 = *(_WORD *)(v102 + 12), (v78 & 0x2000) != 0)
              || *(char *)(v102 + 14) >= 0 )
            {
              v55 = a1;
              goto LABEL_71;
            }
            *(_WORD *)(v102 + 12) = v78 | 0x2000;
            v79 = v51;
            v55 = a1;
            MiLoadUserSymbols(a1, v79, v12);
          }
          v56 = v102;
LABEL_71:
          if ( (v54 & 0x800) != 0 )
          {
            LODWORD(v111[1]) = 3;
            if ( (*(_DWORD *)(v23 + 64) & 0x8000000) != 0 )
              v57 = v111[1];
            else
              v57 = v111[1] & 0xFFF80FFF | ((*(_BYTE *)(v56 + 15) & 0xF0 | ((*(_BYTE *)(v56 + 15) & 0xE) << 7)) << 8);
            v58 = 0;
            if ( v53 == 1073741838 )
              v58 = 2048;
            LODWORD(v111[1]) = v57 & 0xFFFFF7FF | v58;
            v111[2] = v103;
            v111[4] = *(_QWORD *)(a2 + 24);
            if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64(
                                           (volatile signed __int64 *)(v56 + 24),
                                           -1LL,
                                           -1LL) )
              LODWORD(v111[1]) |= 0x80000u;
            LODWORD(v111[3]) = 0;
            LODWORD(v111[5]) = 0;
            v50 = (char *)MiReferenceControlAreaFile(v55);
            v54 |= 8u;
          }
          IsProcessCfgEnabled = MiIsProcessCfgEnabled();
          v60 = v54 | 0x18;
          if ( !IsProcessCfgEnabled )
            v60 = v54;
          v54 = v60;
          if ( (*(_DWORD *)(v23 + 64) & 0x10000000) != 0 )
            v54 = v60 | 8;
          if ( *(_QWORD *)(a2 + 80) )
            v54 |= 8u;
          goto LABEL_85;
        }
      }
      else
      {
        PerSessionProtos = -1073740277;
      }
LABEL_201:
      v9 = (_DWORD *)a1;
      goto LABEL_202;
    }
    if ( v21 > 0x7FFFFFFF0000LL )
    {
      PerSessionProtos = -1073741801;
      goto LABEL_202;
    }
    if ( (v19 & 1) == 0 && (unsigned int)MiIsVaRangeAvailable(v12, v34, v21, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      goto LABEL_41;
    v67 = *(_QWORD *)(a2 + 8);
    v68 = 0LL;
    if ( v104 < 0x100000000LL && v67 >= 0x100000000LL && (*(_BYTE *)(v102 + 15) & 1) == 0 )
      v67 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v102 + 14) & 0x40) != 0 )
    {
      v73 = *(_QWORD *)(v12 + 1064);
      if ( !v73 || (v74 = *(_WORD *)(v73 + 8), v74 != 332) && v74 != 452 )
        v68 = 0x100000000LL;
    }
    if ( *(_QWORD *)a2 >= v67 )
    {
      PerSessionProtos = -1073741801;
    }
    else
    {
      PerSessionProtos = MiSelectUserAddress(
                           *(_DWORD *)(a2 + 40),
                           *(_QWORD *)a2,
                           v67,
                           v114,
                           v35,
                           v68,
                           (*(_DWORD *)(v23 + 48) >> 7) & 0x1F,
                           0,
                           (__int64)&v106,
                           (__int64)&v103);
      if ( PerSessionProtos >= 0 )
      {
        v21 = v114;
        v69 = v101;
LABEL_117:
        if ( v69 == 0x200000 )
        {
          if ( v21 - *(_QWORD *)(a2 + 24) >= 0x10000 )
            v107 = (unsigned int)ExGenRandom(1) % ((v21 - *(_QWORD *)(a2 + 24)) >> 16);
          VadEvent = MiLocateVadEvent(v23, 16LL);
          *(_QWORD *)(VadEvent + 16) = v88 >> 12;
          *(_BYTE *)(VadEvent + 8) = v89;
        }
        goto LABEL_41;
      }
    }
    v84 = *(_QWORD *)(a2 + 8);
    v14 = v67 == v84;
    v21 = v114;
    if ( v14 )
    {
      v69 = v101;
    }
    else
    {
      v98 = v68;
      v69 = v101;
      PerSessionProtos = MiSelectUserAddress(
                           *(_DWORD *)(a2 + 40),
                           *(_QWORD *)a2,
                           v84,
                           v114,
                           v101,
                           v98,
                           (*(_DWORD *)(v23 + 48) >> 7) & 0x1F,
                           0,
                           (__int64)&v106,
                           (__int64)&v103);
    }
    if ( PerSessionProtos < 0 )
      goto LABEL_201;
    goto LABEL_117;
  }
  return result;
}
