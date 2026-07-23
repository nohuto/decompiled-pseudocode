/*
 * XREFs of MiMapViewOfImageSection @ 0x1405F4660
 * Callers:
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MiMapImageInSystemProcess @ 0x14084D5D4 (MiMapImageInSystemProcess.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     MiControlAreaRequiresCharge @ 0x140079E58 (MiControlAreaRequiresCharge.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     MiIsProcessCfgEnabled @ 0x1400884AC (MiIsProcessCfgEnabled.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140088CC8 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1402A5DA8 (MiUpdatePrivateDemandZeroView.c)
 *     MiRemoveVadEvent @ 0x1402B0058 (MiRemoveVadEvent.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiAllocateFixupVad @ 0x1405A9720 (MiAllocateFixupVad.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1405F45BC (MiSecureVad.c)
 *     MiReferenceFileObjectForMap @ 0x1405F5598 (MiReferenceFileObjectForMap.c)
 *     MiCommitVadCfgBits @ 0x1405F55BC (MiCommitVadCfgBits.c)
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
 *     MiIsVaRangeAvailable @ 0x1405F59F0 (MiIsVaRangeAvailable.c)
 *     PsCallImageNotifyRoutines @ 0x1405F60F0 (PsCallImageNotifyRoutines.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 *     MiArbitraryCodeBlocked @ 0x140677900 (MiArbitraryCodeBlocked.c)
 *     MiAdvanceVadHint @ 0x140696FD0 (MiAdvanceVadHint.c)
 *     MiDereferencePerSessionProtos @ 0x1406CA250 (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 *     MiLoadUserSymbols @ 0x140761CA8 (MiLoadUserSymbols.c)
 *     MiLogMapFileEvent @ 0x14084D58C (MiLogMapFileEvent.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14085E5D4 (MiFreeLargePageView.c)
 *     MiMapUserLargePages @ 0x14085E7B8 (MiMapUserLargePages.c)
 */

__int64 __fastcall MiMapViewOfImageSection(
        _DWORD *a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        int a7,
        char a8)
{
  unsigned __int64 v8; // r14
  __int64 v10; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  bool v14; // zf
  unsigned __int64 v15; // r8
  int v16; // ecx
  __int64 result; // rax
  int v18; // ecx
  _DWORD *v19; // rcx
  unsigned __int64 v20; // r13
  PVOID PoolWithTag; // rax
  unsigned __int64 v22; // rsi
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  int v28; // ecx
  unsigned int v29; // eax
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int64 v31; // rdi
  int LargePageVad; // edi
  void *v33; // rcx
  unsigned __int64 v34; // rcx
  void *v35; // rcx
  __int64 v36; // r10
  __int16 v37; // r11
  void *v38; // rcx
  unsigned __int64 v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rax
  __int16 v42; // cx
  __int64 v43; // r13
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // r8
  unsigned int v46; // eax
  __int64 v47; // rax
  char v48; // cl
  int v49; // edx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  ULONG_PTR v55; // r9
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  int v58; // r13d
  _OWORD *FixupVad; // r13
  unsigned int SessionId; // eax
  __int64 v61; // rdi
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  __int64 v64; // r9
  int v65; // eax
  int v66; // r11d
  int v67; // edx
  __int64 v68; // rdx
  char *v69; // r13
  unsigned __int64 v70; // rdi
  unsigned __int16 v71; // ax
  __int64 v72; // rax
  __int16 v73; // cx
  __int16 v74; // bx
  unsigned int v75; // r8d
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r9
  __int16 v79; // cx
  int v80; // edx
  int v81; // eax
  BOOL IsProcessCfgEnabled; // eax
  __int16 v83; // dx
  int v84; // r9d
  unsigned __int64 v85; // rdi
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rsi
  __int64 v89; // [rsp+50h] [rbp-B0h]
  __int64 v90; // [rsp+58h] [rbp-A8h]
  __int64 v91; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v92; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v93; // [rsp+70h] [rbp-90h]
  _RTL_BITMAP *v94; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v95; // [rsp+80h] [rbp-80h]
  unsigned __int64 v96; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  __int64 v98; // [rsp+98h] [rbp-68h]
  unsigned __int64 v99; // [rsp+A0h] [rbp-60h]
  char v100[8]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v101; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v102; // [rsp+B8h] [rbp-48h]
  int v103; // [rsp+C0h] [rbp-40h]
  __int64 v104; // [rsp+C8h] [rbp-38h]
  int v105; // [rsp+D0h] [rbp-30h]
  _QWORD v106[8]; // [rsp+E0h] [rbp-20h] BYREF
  int v107; // [rsp+120h] [rbp+20h]
  unsigned __int64 v108; // [rsp+180h] [rbp+80h]
  unsigned int v109; // [rsp+180h] [rbp+80h]
  unsigned __int64 v110; // [rsp+188h] [rbp+88h]
  int v111; // [rsp+188h] [rbp+88h]
  __int64 v112; // [rsp+188h] [rbp+88h]
  int v113; // [rsp+188h] [rbp+88h]

  v8 = *(_QWORD *)(a2 + 80);
  v10 = *(_QWORD *)a1;
  v89 = *(_QWORD *)a1;
  v12 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v98 = v13;
  if ( dword_140439F24
    && dword_140439F28 == *(_DWORD *)(v13 + 60)
    && dword_140439F2C == *(_DWORD *)(*(_QWORD *)(v10 + 56) + 68LL) )
  {
    __debugbreak();
  }
  v14 = (a1[14] & 0x10000000) == 0;
  v15 = *(_QWORD *)(v10 + 32);
  v110 = *(_QWORD *)(v10 + 48);
  v93 = v15;
  if ( (!v14 || (*(_DWORD *)(v8 + 1740) & 0x2000) != 0) && (*(_BYTE *)(v10 + 15) & 1) == 0 )
    v12 = 1025;
  v16 = *(_DWORD *)(a2 + 40);
  v91 = *(_QWORD *)(a2 + 16);
  if ( (v16 & 0x20000000) != 0 )
  {
    if ( v15 < 0x100000000LL || v12 >= 0x400 )
      return 3221225496LL;
    if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
      return 3221226089LL;
    v91 = 0x200000LL;
  }
  if ( !a5 || (*(_DWORD *)(a5 + 56) & 0x80000) != 0 || (v16 & 0x40000) != 0 )
  {
    if ( a7 != 1 )
      return 3221225541LL;
    v12 |= 0x200u;
  }
  if ( (v12 & 0x200) == 0 )
  {
    result = MiAllowImageMap(v8, a5, a1, v13);
    if ( (int)result < 0 )
      return result;
    v18 = *(_DWORD *)(v8 + 2080);
    if ( (v18 & 0x10) != 0 && (*(_BYTE *)(v13 + 51) & 4) == 0 )
    {
      if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
      {
        if ( (v18 & 8) != 0 )
          return 3221226089LL;
      }
      else
      {
        v12 |= 1u;
      }
    }
    v10 = v89;
  }
  if ( (*(_BYTE *)(v8 + 720) & 1) == 0 || v8 == PsSecureSystemProcess )
    v12 |= 2u;
  if ( (*(_BYTE *)(v10 + 15) & 1) != 0 && (*(_DWORD *)(v8 + 2080) & 0x40) == 0 )
  {
    v12 |= 1u;
    if ( v12 < 0x400 )
      v12 &= ~2u;
  }
  v95 = 0LL;
  if ( (v12 & 0x200) == 0 )
  {
    v19 = a1 + 32;
    if ( a1 != (_DWORD *)-128LL )
    {
      while ( (v19[8] & 0xEu) < 0xC )
      {
        v19 = (_DWORD *)*((_QWORD *)v19 + 2);
        if ( !v19 )
          goto LABEL_43;
      }
      result = MiArbitraryCodeBlocked(*(_QWORD *)(a2 + 88));
      if ( (int)result < 0 )
        return result;
    }
  }
LABEL_43:
  BugCheckParameter2 = (ULONG_PTR)(a1 + 32);
  MiCheckPurgeAndUpMapCount((__int64)a1);
  v20 = *(_QWORD *)(a2 + 24);
  v108 = v20;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x20646156u);
  v22 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    MiDereferenceControlArea((__int64)a1);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  *(_QWORD *)(v22 + 16) = -2LL;
  v23 = 0;
  if ( a6 == 1 )
    v23 = 0x4000000;
  v24 = *(_DWORD *)(v22 + 48);
  *(_DWORD *)(v22 + 64) = *(_DWORD *)(v22 + 64) & 0xFBFFFFFF | v23;
  v25 = v24 & 0xFFFFFFF8 | 2;
  *(_DWORD *)(v22 + 48) = v25;
  v26 = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 48) << 8)) & 0x3F00;
  *(_DWORD *)(v22 + 48) = v26;
  if ( a5 )
  {
    v27 = MiReferenceFileObjectForMap(a5);
    v28 = *(_DWORD *)(v22 + 64);
    *(_QWORD *)(v22 + 128) = v27;
    LODWORD(v27) = v28 & 0xF7FFFFFF | (*(_DWORD *)(a5 + 60) >> 4) & 0x8000000;
    v26 = *(_DWORD *)(v22 + 48);
    *(_DWORD *)(v22 + 64) = v27;
  }
  *(_QWORD *)(v22 + 40) = 0LL;
  if ( (v12 & 0x200) != 0 )
  {
    v29 = v12 | 1;
    LOWORD(v12) = v12 & 0xFFFC | 1;
    *(_DWORD *)(v22 + 48) = v26 & 0xFFFFFF07 | 8;
    if ( v29 >= 0x400 )
      LOWORD(v12) = v29;
  }
  else
  {
    *(_DWORD *)(v22 + 48) = v26 & 0xFFFFFF07 | 0x38;
    if ( (*(_BYTE *)(v8 + 720) & 1) != 0 )
      *(_DWORD *)(v22 + 64) |= 0x10000000u;
    *(_DWORD *)(v22 + 52) ^= (v110 ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v22 + 34) = v110 >> 31;
  }
  CurrentThread = KeGetCurrentThread();
  v14 = (*(_DWORD *)(a2 + 64) & 1) == 0;
  v94 = 0LL;
  v90 = (__int64)CurrentThread;
  if ( v14 || v91 == 0x200000 )
    v31 = v93 + *(unsigned int *)a4;
  else
    v31 = *a3;
  v111 = v31;
  v92 = v31;
  if ( v91 == 0x200000 )
  {
    v108 = (*(_QWORD *)(a2 + 24) + 0x1FFFFFLL) & 0xFFFFFFFFFFE00000uLL;
    v20 = v108;
    LOWORD(v12) = v12 & 0xFFFC | 1;
    *(_DWORD *)(v22 + 52) ^= ((v108 >> 12) ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v22 + 34) = v108 >> 43;
    *(_DWORD *)(v22 + 64) |= 0x1000000u;
    LargePageVad = MiCreateLargePageVad(v8, v22, 0LL);
    if ( LargePageVad < 0 )
    {
      v33 = *(void **)(v22 + 128);
      if ( v33 )
        ObfDereferenceObject(v33);
      MiDereferenceControlArea((__int64)a1);
      ExFreePoolWithTag((PVOID)v22, 0);
      return (unsigned int)LargePageVad;
    }
    LODWORD(v31) = v111;
    CurrentThread = (struct _KTHREAD *)v90;
  }
  v96 = 0LL;
  if ( MiUserHotPatchReserveSize
    && *(_WORD *)(v98 + 48) == 0x8664
    && (v12 & 0x200) == 0
    && (*(_DWORD *)(v22 + 64) & 0x1000000) == 0
    && v20 < 0x7FFFFFFF
    && (*(_BYTE *)(v8 + 720) & 1) == 0
    && (v20 >> 12) + ((v20 & 0xFFF) != 0) == *(_DWORD *)(v89 + 8) )
  {
    v34 = v20 + (unsigned int)MiUserHotPatchReserveSize;
    if ( v34 < v20 )
    {
      v35 = *(void **)(v22 + 128);
      if ( v35 )
        ObfDereferenceObject(v35);
      MiDereferenceControlArea((__int64)a1);
      ExFreePoolWithTag((PVOID)v22, 0);
      return 3221225503LL;
    }
    v20 += (unsigned int)MiUserHotPatchReserveSize;
    v108 = v34;
  }
  if ( (*(_BYTE *)(v22 + 48) & 0xF8) == 0x38
    && *(_QWORD *)(v8 + 736)
    && (*(_DWORD *)(v8 + 1740) & 0x1000) == 0
    && v8 != PsSecureSystemProcess
    && ((PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0) )
  {
    LOWORD(v12) = v12 | 0x800;
  }
  v107 = 32;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, v8);
  if ( (*(_DWORD *)(v8 + 772) & 0x20) != 0 )
  {
    LargePageVad = -1073741558;
    goto LABEL_91;
  }
  v36 = v91;
  v37 = 452;
  if ( (*(_DWORD *)(a2 + 64) & 1) == 0 || v91 == 0x200000 )
  {
    if ( v20 > 0x7FFFFFFF0000LL )
    {
      LargePageVad = -1073741801;
      goto LABEL_91;
    }
    if ( (v12 & 1) == 0 && (unsigned int)MiIsVaRangeAvailable(v8, v31, v20, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
      goto LABEL_133;
    v39 = *(_QWORD *)(a2 + 8);
    v40 = 0LL;
    v112 = 0LL;
    if ( v93 < 0x100000000LL && v39 >= 0x100000000LL && (*(_BYTE *)(v89 + 15) & 1) == 0 )
      v39 = 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v89 + 14) & 0x40) != 0 )
    {
      v41 = *(_QWORD *)(v8 + 1064);
      if ( v41 && ((v42 = *(_WORD *)(v41 + 8), v42 == 332) || v42 == v37) )
      {
        v40 = 0LL;
      }
      else
      {
        v40 = 0x100000000LL;
        v112 = 0x100000000LL;
      }
    }
    if ( *(_QWORD *)a2 >= v39 )
    {
      LargePageVad = -1073741801;
    }
    else
    {
      LargePageVad = MiSelectUserAddress(
                       *(_DWORD *)(a2 + 40),
                       *(_QWORD *)a2,
                       v39,
                       v108,
                       v36,
                       v40,
                       (unsigned __int8)*(_DWORD *)(v22 + 48) >> 3,
                       0,
                       &v94,
                       (__int64)&v92);
      if ( LargePageVad >= 0 )
      {
        v43 = v91;
LABEL_129:
        v14 = v43 == 0x200000;
        v20 = v108;
        if ( v14 )
        {
          v45 = *(_QWORD *)(a2 + 24);
          if ( v108 - v45 >= 0x10000 )
          {
            v46 = ExGenRandom(1);
            v45 = *(_QWORD *)(a2 + 24);
            v95 = v46 % ((v108 - v45) >> 16);
          }
          v47 = *(_QWORD *)(v22 + 56);
          v48 = v95;
          *(_QWORD *)(v47 + 16) = v45 >> 12;
          *(_BYTE *)(v47 + 8) = v48;
        }
        goto LABEL_133;
      }
    }
    v44 = *(_QWORD *)(a2 + 8);
    v14 = v39 == v44;
    v43 = v91;
    if ( !v14 )
      LargePageVad = MiSelectUserAddress(
                       *(_DWORD *)(a2 + 40),
                       *(_QWORD *)a2,
                       v44,
                       v108,
                       v91,
                       v112,
                       (unsigned __int8)*(_DWORD *)(v22 + 48) >> 3,
                       0,
                       &v94,
                       (__int64)&v92);
    if ( LargePageVad < 0 )
      goto LABEL_91;
    goto LABEL_129;
  }
  if ( !(unsigned int)MiIsVaRangeAvailable(v8, v31, v20, *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
  {
LABEL_90:
    LargePageVad = -1073741800;
    goto LABEL_91;
  }
LABEL_133:
  v49 = 1073741827;
  v50 = v92;
  v51 = v93;
  v52 = v92 - *(unsigned int *)a4;
  if ( v52 == v93 )
    v49 = 0;
  v53 = v92 >> 12;
  *(_DWORD *)(v22 + 24) = v92 >> 12;
  v99 = v53;
  v54 = (v20 + v50 - 1) >> 12;
  *(_BYTE *)(v22 + 32) = BYTE4(v53);
  *(_DWORD *)(v22 + 28) = v54;
  *(_BYTE *)(v22 + 33) = BYTE4(v54);
  v93 = v54;
  v55 = (ULONG_PTR)(a1 + 32);
  v56 = (unsigned int)a1[43];
  v57 = *a4 >> 12;
  v113 = v49;
  if ( v57 >= v56 )
  {
    do
    {
      v55 = *(_QWORD *)(v55 + 16);
      v57 -= v56;
      v56 = *(unsigned int *)(v55 + 44);
    }
    while ( v57 >= v56 );
    BugCheckParameter2 = v55;
  }
  *(_QWORD *)(v22 + 72) = v55;
  v58 = v49;
  v109 = v49;
  *(_QWORD *)(v22 + 80) = *(_QWORD *)(v55 + 8) + 8 * v57;
  *(_QWORD *)(v22 + 88) = *(_QWORD *)(v89 + 64) + 8 * (*(unsigned int *)(v89 + 8) - 1LL);
  if ( (a8 & 4) == 0 )
  {
    v109 = v49;
    if ( v8 != PsSecureSystemProcess )
    {
      v109 = v49;
      if ( v52 != v51 )
      {
        if ( ((v12 & 0x400) != 0 || (*(_DWORD *)(a2 + 40) & 0x800000) != 0) && (a1[14] & 0x800) == 0 && (v12 & 2) != 0 )
        {
          FixupVad = MiAllocateFixupVad(v22);
          if ( FixupVad )
          {
            ExFreePoolWithTag((PVOID)v22, 0);
            v22 = (unsigned __int64)FixupVad;
            v58 = 1073741878;
            v109 = 1073741878;
          }
          else
          {
            v58 = v113;
            v109 = v113;
            if ( (v12 & 0x400) != 0 )
            {
              LargePageVad = -1073741670;
              goto LABEL_91;
            }
          }
        }
        else
        {
          v109 = v49;
          if ( (v12 & 0x400) != 0 )
            goto LABEL_90;
        }
      }
    }
  }
  if ( *(_DWORD *)(a2 + 48) )
    *(_BYTE *)(*(_QWORD *)(v8 + 1296) + 304LL) = 1;
  if ( (a1[14] & 0x4000000) != 0 )
  {
    SessionId = MmGetSessionIdEx(v8);
    LargePageVad = MiCreatePerSessionProtos(a1, SessionId);
    if ( LargePageVad < 0 )
      goto LABEL_91;
    LOWORD(v12) = v12 | 0x80;
  }
  if ( (*(_DWORD *)(v22 + 64) & 0x10000000) != 0 )
  {
    v61 = *(unsigned int *)(v22 + 52);
    LODWORD(v61) = v61 & 0x7FFFFFFF;
    v62 = ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 31) | v61;
    v63 = MiUpdatePrivateDemandZeroView(v8, v22, 0) + v62;
    *(_DWORD *)(v22 + 52) ^= (v63 ^ *(_DWORD *)(v22 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v22 + 34) = v63 >> 31;
    v106[1] = v90;
    MiInsertVadEvent(v22, v106, 0LL, v64);
    LOWORD(v12) = v12 | 0x20;
  }
  LargePageVad = MiInsertSharedCommitNode(a1, v8, 0);
  if ( LargePageVad < 0 )
    goto LABEL_91;
  LOWORD(v12) = v12 | 0x40;
  v65 = MiControlAreaRequiresCharge((__int64)a1);
  if ( !v65 )
  {
    LargePageVad = -1073740277;
    goto LABEL_91;
  }
  if ( v65 == 2 )
  {
    v67 = 520;
    if ( !v66 )
      v67 = 8;
    LargePageVad = MiReferenceActiveSubsection((__int64 *)BugCheckParameter2, v67, 0x11u);
    if ( LargePageVad < 0 )
      goto LABEL_91;
    LOWORD(v12) = v12 | 0x100;
  }
  LargePageVad = MiInsertVadCharges(v22, (struct _KPROCESS *)v8);
  if ( LargePageVad < 0 )
  {
LABEL_91:
    if ( (v12 & 0x80u) != 0 )
    {
      MmGetSessionIdEx(v8);
      MiDereferencePerSessionProtos(a1);
    }
    if ( (v12 & 0x100) != 0 )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    if ( (v12 & 0x40) != 0 )
      MiRemoveSharedCommitNode((__int64)a1, v8, 0);
    UNLOCK_ADDRESS_SPACE(v90, v8);
    if ( (v12 & 0x20) != 0 )
      MiRemoveVadEvent(v22, v106);
    if ( v22 )
    {
      if ( v91 == 0x200000 )
        MiFreeLargePageView(v8, v22, 0LL);
      v38 = *(void **)(v22 + 128);
      if ( v38 )
        ObfDereferenceObject(v38);
      ExFreePoolWithTag((PVOID)v22, 0);
    }
    MiDereferenceControlArea((__int64)a1);
    return (unsigned int)LargePageVad;
  }
  if ( v58 == 1073741878 )
    ++*(_QWORD *)(*(_QWORD *)(v8 + 1296) + 336LL);
  MiGetWsAndInsertVad(v22, v68);
  v69 = 0LL;
  if ( v91 == 0x200000 )
  {
    MiLockVad(v90, v22);
    LargePageVad = MiMapUserLargePages(v22, *(unsigned int *)(a2 + 48), 0LL);
    if ( LargePageVad < 0 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED(v90, v8);
LABEL_223:
      MiReferenceVad(v22);
      if ( v69 )
        ObfDereferenceObject(v69);
      MiUnmapVad(v22, 0LL, 0LL);
      v86 = *(_QWORD **)(a2 + 72);
      if ( v86 )
        *v86 = 0LL;
      return (unsigned int)LargePageVad;
    }
    MiUnlockVad(v90, v22);
  }
  if ( v94 )
    MiAdvanceVadHint(v99, v93);
  v70 = (v95 << 16) + v92;
  v92 = v70;
  *a3 = v70;
  if ( *(_BYTE *)(v98 + 50) )
  {
    v71 = *(_WORD *)(v98 + 48);
    if ( v71 < MEMORY[0xFFFFF7800000002C] || v71 > MEMORY[0xFFFFF7800000002E] )
    {
      v72 = *(_QWORD *)(v8 + 1064);
      if ( !v72 || (v73 = *(_WORD *)(v72 + 8), v73 != 332) && v73 != 452 )
        v109 = 1073741838;
    }
  }
  if ( (PerfGlobalGroupMask & 0x8000) != 0 )
    MiLogMapFileEvent(v22, 1061LL);
  v74 = v12 | 4;
  if ( (v74 & 0x200) != 0 )
    goto LABEL_207;
  v75 = v109;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v76 = v109 - 1073741827;
    if ( (unsigned int)v76 > 0x33 || (v77 = 0x8000000000801LL, !_bittest64(&v77, v76)) )
    {
      v78 = v89;
      if ( (*(_BYTE *)(v90 + 1752) & 0x20) != 0 )
        goto LABEL_192;
      v79 = *(_WORD *)(v89 + 12);
      if ( (v79 & 0x2000) != 0 || *(char *)(v89 + 14) >= 0 )
        goto LABEL_192;
      *(_WORD *)(v89 + 12) = v79 | 0x2000;
      MiLoadUserSymbols(a1, v70, v8);
      v75 = v109;
    }
  }
  v78 = v89;
LABEL_192:
  if ( (v74 & 0x800) != 0 )
  {
    v101 = 3;
    if ( (*(_DWORD *)(v22 + 64) & 0x8000000) != 0 )
    {
      v80 = v101;
    }
    else
    {
      v101 = v101 & 0xFFFF0FFF | ((*(_BYTE *)(v78 + 15) & 0xF0) << 8);
      v80 = v101 ^ (v101 ^ (*(unsigned __int8 *)(v78 + 15) << 15)) & 0x70000;
    }
    v81 = 0;
    if ( v75 == 1073741838 )
      v81 = 2048;
    v101 = v80 & 0xFFFFF7FF | v81;
    v102 = v92;
    v104 = *(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 24) != _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 24), -1LL, -1LL) )
      v101 |= 0x80000u;
    v103 = 0;
    v105 = 0;
    v69 = (char *)MiReferenceControlAreaFile((__int64)a1);
    v74 |= 8u;
  }
  IsProcessCfgEnabled = MiIsProcessCfgEnabled();
  v83 = v74 | 0x18;
  if ( !IsProcessCfgEnabled )
    v83 = v74;
  v74 = v83 | 8;
  if ( (*(_DWORD *)(v22 + 64) & 0x10000000) == 0 )
    v74 = v83;
  if ( *(_QWORD *)(a2 + 72) )
    v74 |= 8u;
LABEL_207:
  if ( (v74 & 8) != 0 )
  {
    MiLockVad(v90, v22);
    UNLOCK_ADDRESS_SPACE_UNORDERED(v90, v8);
    v74 &= ~4u;
    if ( (*(_DWORD *)(v22 + 64) & 0x10000000) != 0 )
    {
      MiUpdatePrivateDemandZeroView(v8, v22, 1);
      MiRemoveVadEvent(v22, v106);
      v74 &= ~0x20u;
    }
    if ( (v74 & 0x10) != 0 )
    {
      LargePageVad = MiCommitVadCfgBits(v22, 0LL, 0LL);
      if ( LargePageVad < 0 )
        goto LABEL_223;
    }
    if ( *(_QWORD *)(a2 + 72) )
    {
      v84 = *(_DWORD *)(a2 + 68);
      if ( (unsigned int)(v84 - 1) > 1 && v84 != -2147483647 && v84 != 4 )
      {
        LargePageVad = -1073741755;
        goto LABEL_223;
      }
      LargePageVad = MiSecureVad(v22, v92, *(_QWORD *)(a2 + 24), v84, 0, &v96);
      if ( LargePageVad < 0 )
        goto LABEL_223;
      v85 = 0LL;
      **(_QWORD **)(a2 + 72) = v8 ^ v96 ^ qword_14043B0D0;
    }
    else
    {
      v85 = v96;
    }
    if ( (v74 & 0x800) != 0 )
    {
      v85 = (unsigned __int64)MiAddSecureEntry(v22, v99 << 12, (v93 << 12) | 0xFFF, -2147483647, 0);
      if ( !v85 )
      {
        LargePageVad = -1073741670;
        goto LABEL_223;
      }
    }
    v87 = v22;
    v88 = v90;
    MiUnlockVad(v90, v87);
    if ( (v74 & 0x800) != 0 )
    {
      PsCallImageNotifyRoutines(v69 + 88, v8, v100, v69);
      ObfDereferenceObject(v69);
    }
    if ( v85 )
      MmUnsecureVirtualMemory((HANDLE)(v8 ^ v85 ^ qword_14043B0D0));
  }
  else
  {
    v88 = v90;
  }
  if ( (v74 & 4) != 0 )
    UNLOCK_ADDRESS_SPACE(v88, v8);
  if ( (v74 & 0x200) == 0 && a5 && (*(_BYTE *)(v8 + 720) & 1) == 0 )
    *(_DWORD *)(a2 + 64) |= 4u;
  return v109;
}
