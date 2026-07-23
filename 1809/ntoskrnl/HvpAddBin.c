/*
 * XREFs of HvpAddBin @ 0x1405A49BC
 * Callers:
 *     HvpDoAllocateCell @ 0x1405FC690 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     HvpGrowDirtyVectors @ 0x1401369E0 (HvpGrowDirtyVectors.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1405A34F4 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpAllocateBin @ 0x1405A3540 (HvpAllocateBin.c)
 *     HvpProtectBin @ 0x1405A3584 (HvpProtectBin.c)
 *     CmpCanGrowHive @ 0x1405A4870 (CmpCanGrowHive.c)
 *     HvpExpandMap @ 0x1405A48E4 (HvpExpandMap.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A4F90 (HvpPointMapEntriesToBuffer.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1405A5FA8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1405A6A0C (HvpViewMapCOWAndUnsealRange.c)
 *     CmpClaimGlobalQuota @ 0x1405A8334 (CmpClaimGlobalQuota.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x1405FC668 (CmpReleaseGlobalQuota.c)
 *     HvpSetRangeProtection @ 0x1405FCD30 (HvpSetRangeProtection.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BB750 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x1406CD840 (HvpViewMapExtendStorage.c)
 *     CmpBoostActiveHiveWriter @ 0x1406D0458 (CmpBoostActiveHiveWriter.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 *     HvpViewMapShrinkStorage @ 0x1407F8330 (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x140807200 (HvpShrinkMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r13d
  unsigned int v5; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r8
  ULONG_PTR v9; // r12
  __int64 *i; // r14
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rcx
  int v15; // eax
  char v16; // cl
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  void *v20; // rdx
  int v21; // eax
  char v22; // dl
  unsigned int v24; // edx
  __int64 v25; // rax
  signed __int64 v26; // rax
  __int64 *v27; // rax
  __int64 **v28; // rcx
  int v29; // edi
  unsigned int v30; // r10d
  unsigned int v31; // ebx
  __int64 CellMap; // rax
  unsigned int v33; // r10d
  _QWORD *v34; // r11
  __int64 v35; // rax
  int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  ULONG v44; // eax
  __int64 v45; // rax
  __int64 *v46; // rax
  char v47; // [rsp+30h] [rbp-48h]
  unsigned int j; // [rsp+34h] [rbp-44h]
  size_t Size; // [rsp+38h] [rbp-40h]
  void *v50; // [rsp+40h] [rbp-38h] BYREF
  void *v51; // [rsp+48h] [rbp-30h] BYREF
  __int64 v52; // [rsp+50h] [rbp-28h]
  __int64 v53; // [rsp+58h] [rbp-20h]
  __int64 *v54; // [rsp+60h] [rbp-18h]
  char v55; // [rsp+C0h] [rbp+48h]
  char v56; // [rsp+C8h] [rbp+50h]
  char v57; // [rsp+D0h] [rbp+58h]
  char v58; // [rsp+D8h] [rbp+60h]

  v3 = a3;
  v4 = -1;
  Size = 0LL;
  j = -1;
  v5 = (a2 + 4127) & 0xFFFFF000;
  v47 = 0;
  v50 = 0LL;
  v52 = 0LL;
  v7 = 0;
  v51 = 0LL;
  v57 = 0;
  v56 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  v8 = 632LL * a3;
  v9 = 632 * v3 + BugCheckParameter2 + 880;
  v53 = 632 * v3;
  v54 = (__int64 *)v9;
  for ( i = *(__int64 **)v9; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v9 )
    {
      i = 0LL;
      goto LABEL_7;
    }
    v24 = *((_DWORD *)i + 4);
    if ( v24 >= v5 && v24 + *((_DWORD *)i + 5) <= *(_DWORD *)(v8 + BugCheckParameter2 + 272) )
      break;
  }
  v7 = *((_DWORD *)i + 4);
LABEL_7:
  if ( i )
  {
    v27 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i )
      goto LABEL_93;
    v28 = (__int64 **)i[1];
    if ( *v28 != i )
      goto LABEL_93;
    *v28 = v27;
    v27[1] = (__int64)v28;
    v29 = (_DWORD)v3 << 31;
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
    {
      v30 = 0;
      v4 = v29 + *((_DWORD *)i + 5);
      for ( j = v4; v30 < v7; *v34 = v35 )
      {
        v31 = v30 + v4;
        CellMap = HvpGetCellMap(BugCheckParameter2, v30 + v4);
        v34 = (_QWORD *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v31, 0x267uLL);
        *(_QWORD *)(CellMap + 8) &= ~2uLL;
        v35 = v33;
        v30 = v33 + 4096;
      }
    }
LABEL_55:
    if ( !i )
      return j;
    if ( v4 != -1 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(BugCheckParameter2 + 32))(i, 24LL);
      return j;
    }
    v46 = *(__int64 **)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 )
    {
      *i = (__int64)v46;
      i[1] = v9;
      v46[1] = (__int64)i;
      *(_QWORD *)v9 = i;
      return j;
    }
LABEL_93:
    __fastfail(3u);
  }
  v11 = *(_DWORD *)(v8 + BugCheckParameter2 + 272);
  v12 = v11;
  v13 = v5 + v11;
  if ( !(_DWORD)v3 && v5 <= 0x40000 && (((v11 + 4096) ^ (v13 + 4095)) & 0xFFFC0000) != 0 )
  {
    v12 = ((v11 + 266239) & 0xFFFC0000) - 4096;
    LODWORD(Size) = v12 - v11;
    v13 = v5 + v12;
  }
  if ( v13 < v11 || !CmpCanGrowHive(BugCheckParameter2, v13) || (int)HvpExpandMap(BugCheckParameter2, v3, v11, v13) < 0 )
    return j;
  *(_DWORD *)(v53 + BugCheckParameter2 + 272) = v13;
  if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, (unsigned int)v3) < 0 )
  {
LABEL_77:
    HvpShrinkMap(BugCheckParameter2, (unsigned int)v3, v13, v11);
    *(_DWORD *)(v53 + BugCheckParameter2 + 272) = v11;
    if ( v47 )
    {
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v11 >> 9;
      v43 = *(_DWORD *)(BugCheckParameter2 + 104);
      v44 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = v44;
      _InterlockedExchangeAdd(&CmpDirtySectorCount, v44 - v43);
      v45 = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v11 >> 9;
      *(_QWORD *)(BugCheckParameter2 + 120) = v45;
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    }
    if ( v56 )
      HvpViewMapShrinkStorage(BugCheckParameter2 + 216, v11);
    if ( v50 && !v57 )
      HvpFreeBin(BugCheckParameter2, v12 - v11, v50);
    if ( v52 )
      (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v52, 24LL);
    if ( v51 && !v57 )
      HvpFreeBin(BugCheckParameter2, v13 - v12, v51);
    if ( !HIDWORD(Size) )
      return j;
    CmpReleaseGlobalQuota(HIDWORD(Size));
    v9 = (ULONG_PTR)v54;
    v4 = -1;
    goto LABEL_55;
  }
  v55 = 1;
  v58 = 1;
  if ( (_DWORD)v3 )
    goto LABEL_24;
  v15 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v15 & 1) == 0 )
  {
    if ( (int)HvpGrowDirtyVectors(BugCheckParameter2, v13) < 0 )
      goto LABEL_76;
    v15 = *(_DWORD *)(BugCheckParameter2 + 160);
    v47 = 1;
  }
  if ( (v15 & 0x8001) == 0 )
  {
    CmpBoostActiveHiveWriter(v14, BugCheckParameter2 + 4256);
    if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v13 + 4096, 1LL) < 0 )
      goto LABEL_76;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4284) )
      *(_DWORD *)(BugCheckParameter2 + 4284) = v11;
  }
  v55 = 1;
  v58 = 1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
    goto LABEL_24;
  if ( (*(_BYTE *)(BugCheckParameter2 + 248) & 1) != 0 )
    v25 = *(_QWORD *)(BugCheckParameter2 + 232);
  else
    v25 = 0x7FFFFFFFFFFFFFFFLL;
  v26 = v25 & 0xFFFFFFFFFFFFF000uLL;
  v55 = 1;
  v58 = 1;
  if ( v26 >= 2147479552 )
    LODWORD(v26) = 2147479552;
  if ( v13 > (int)v26 - 4096 )
  {
LABEL_24:
    v16 = 0;
  }
  else
  {
    if ( (int)HvpViewMapExtendStorage(BugCheckParameter2 + 216, v13) < 0 )
      goto LABEL_76;
    v16 = 1;
    v55 = 0;
    v57 = 1;
    v58 = 0;
  }
  if ( (_DWORD)Size )
  {
    if ( v16 )
    {
      v56 = v16;
      if ( !(unsigned __int8)CmpClaimGlobalQuota((unsigned int)Size) )
        goto LABEL_76;
      v56 = v57;
      HIDWORD(Size) = Size;
      if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v11, (unsigned int)Size, &v50) < 0 )
        goto LABEL_76;
      v56 = v57;
      v36 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v11, (unsigned int)Size);
    }
    else
    {
      v56 = 0;
      if ( (int)HvpAllocateBin(BugCheckParameter2, (unsigned int)Size, v3, 0x30324D43u, (__int64 *)&v50) < 0 )
        goto LABEL_76;
      v56 = 0;
      v36 = HvpProtectBin(v42, Size, (__int64)v50, 1);
    }
    if ( v36 < 0 )
      goto LABEL_76;
    memset(v50, 0, (unsigned int)Size);
    v37 = v50;
    *((_DWORD *)v50 + 7) = 0;
    v37[1] = v11 & 0x7FFFFFFF;
    v37[2] = Size;
    *v37 = 1852400232;
    v37[8] = Size - 32;
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 825380163LL);
    v16 = v57;
    v56 = v57;
    v52 = v38;
    if ( !v38 )
      goto LABEL_76;
    *(_DWORD *)(v38 + 16) = Size;
    *(_DWORD *)(v38 + 20) = v11;
  }
  if ( !v16 )
  {
    v56 = 0;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v5, v3, 0x36314D43u, (__int64 *)&v51) >= 0 )
    {
      v56 = 0;
      v18 = HvpProtectBin(v17, v5, (__int64)v51, 1);
      goto LABEL_29;
    }
LABEL_76:
    HvpAdjustHiveFreeDisplay(BugCheckParameter2, v11, (unsigned int)v3);
    goto LABEL_77;
  }
  v56 = v16;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(v5) )
    goto LABEL_76;
  HIDWORD(Size) += v5;
  v56 = v57;
  if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v12, v5, &v51) < 0 )
    goto LABEL_76;
  v56 = v57;
  v18 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v12, v5);
LABEL_29:
  if ( v18 < 0 )
    goto LABEL_76;
  memset(v51, 0, v5);
  v19 = v51;
  v20 = v50;
  *((_DWORD *)v51 + 7) = 0;
  v19[1] = v12 & 0x7FFFFFFF;
  *v19 = 1852400232;
  v19[2] = v5;
  v19[8] = v5 - 32;
  v21 = (_DWORD)v3 << 31;
  if ( v20 )
  {
    HvpPointMapEntriesToBuffer(BugCheckParameter2, v55, v52);
    v39 = v54;
    v40 = *v54;
    if ( *(__int64 **)(*v54 + 8) != v54 )
      goto LABEL_93;
    v41 = v52;
    *(_QWORD *)v52 = v40;
    *(_QWORD *)(v41 + 8) = v39;
    *(_QWORD *)(v40 + 8) = v41;
    *v39 = v41;
    v21 = (_DWORD)v3 << 31;
    v22 = v55;
  }
  else
  {
    v22 = v58;
  }
  v12 += v21;
  HvpPointMapEntriesToBuffer(BugCheckParameter2, v22, 0LL);
  if ( !(_DWORD)v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0
      || (v56 = v57, (unsigned __int8)HvpMarkDirty(BugCheckParameter2)) )
    {
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v13, v11);
      HvpSetRangeProtection(BugCheckParameter2, v11);
      return v12;
    }
    goto LABEL_76;
  }
  return v12;
}
