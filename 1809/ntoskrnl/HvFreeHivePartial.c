/*
 * XREFs of HvFreeHivePartial @ 0x1405A9240
 * Callers:
 *     HvpTruncateBins @ 0x1405A918C (HvpTruncateBins.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1405A34F4 (CmpUpdateSystemHiveHysteresis.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1405A5FA8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpMapEntryGetFreeBin @ 0x1405FAC1C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x1405FC668 (CmpReleaseGlobalQuota.c)
 *     HvpFreeMap @ 0x1406C9CC8 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 *     HvpViewMapShrinkStorage @ 0x1407F8330 (HvpViewMapShrinkStorage.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v5; // r15
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // ebx
  __int64 CellMap; // rax
  __int64 v12; // rsi
  _QWORD *FreeBin; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // edx
  ULONG v22; // r14d
  ULONG v23; // ebx
  int v24; // ebx
  unsigned int v25; // [rsp+68h] [rbp+10h]

  v5 = 632LL * a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 272);
  v25 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7 + v9;
      CellMap = HvpGetCellMap(BugCheckParameter2, v7 + v9);
      v12 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x165uLL);
      FreeBin = (_QWORD *)HvpMapEntryGetFreeBin(CellMap);
      v14 = FreeBin;
      if ( FreeBin )
      {
        v15 = *FreeBin;
        if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v16 = (_QWORD *)FreeBin[1], (_QWORD *)*v16 != v14) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        (*(void (__fastcall **)(_QWORD *, __int64))(BugCheckParameter2 + 32))(v14, 24LL);
      }
      v17 = *(_QWORD *)(v12 + 8);
      v18 = *(unsigned int *)(v12 + 16);
      if ( (v17 & 8) != 0 )
        HvpFreeBin(BugCheckParameter2, (unsigned int)v18, v17 & 0xFFFFFFFFFFFFFFF0uLL);
      else
        CmpReleaseGlobalQuota(v18);
      v7 += *(_DWORD *)(v12 + 16);
      do
      {
        v19 = (_QWORD *)HvpGetCellMap(BugCheckParameter2, v10);
        if ( !v19 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x19EuLL);
        v10 += 4096;
        *v19 = 0LL;
        v19[1] = 0LL;
        v19[2] = 0LL;
      }
      while ( v10 - v9 < v7 );
    }
    while ( v7 < v25 );
    if ( a2 )
      v20 = (a2 - 1) >> 21;
    else
      v20 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 280),
      v20 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 272) >> 12) - 1) >> 9);
    if ( !a3 )
    {
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, a2 & 0x7FFFFFFF, *(_DWORD *)(v5 + BugCheckParameter2 + 272));
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 216, a2 & 0x7FFFFFFF);
    }
    v21 = a2 & 0x7FFFFFFF;
    *(_DWORD *)(v5 + BugCheckParameter2 + 272) = a2 & 0x7FFFFFFF;
    if ( !a3 )
    {
      v22 = a2 >> 9;
      v23 = *(_DWORD *)(BugCheckParameter2 + 88) - v22;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v22, v23);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v22, v23);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v22;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v22;
      v24 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedExchangeAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 104) - v24);
      v21 = *(_DWORD *)(v5 + BugCheckParameter2 + 272);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, v21, a3);
  }
  return result;
}
