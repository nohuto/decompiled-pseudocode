/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x1405FA6A0
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvpAllocateBin @ 0x1405A3540 (HvpAllocateBin.c)
 *     HvpProtectBin @ 0x1405A3584 (HvpProtectBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A4F90 (HvpPointMapEntriesToBuffer.c)
 *     HvpEnlistFreeCells @ 0x1405FA800 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x1405FA8E0 (HvpValidateLoadedBin.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x1405FC668 (CmpReleaseGlobalQuota.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406BB750 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 *     HvIsRangeDirty @ 0x140802124 (HvIsRangeDirty.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(_DWORD *BugCheckParameter2)
{
  __int64 v1; // r15
  unsigned int v2; // ebx
  unsigned int v3; // r12d
  char v4; // r13
  unsigned int v6; // ebp
  unsigned int i; // edi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v13; // rbp
  _DWORD *v14; // r14
  unsigned int v15; // eax
  int v16; // eax
  unsigned int j; // ebx
  const void *v18; // r14
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h] BYREF
  __int64 CellMap; // [rsp+98h] [rbp+20h]

  v23 = 0LL;
  v1 = 0LL;
  v2 = BugCheckParameter2[68];
  v3 = 0;
  v4 = 0;
  v22 = 0LL;
  v21 = v2;
  if ( (BugCheckParameter2[40] & 0x20000) != 0 )
    v6 = BugCheckParameter2[56] - 4096;
  else
    v6 = 0;
  for ( i = 0; i < v6; v2 = v21 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, i);
    v8 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v8, i, v2) )
    {
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        return (unsigned int)-1073741492;
      if ( !(unsigned __int8)HvpMarkDirty((ULONG_PTR)BugCheckParameter2) )
        return (unsigned int)-1073741670;
      memset(v8, 0, 0x1000uLL);
      v8[7] = 0;
      *v8 = 1852400232;
      v8[1] = i & 0x7FFFFFFF;
      v4 = 1;
      v8[2] = 4096;
      v8[8] = 4064;
    }
    v9 = v8[2];
    if ( v9 != 4096 )
    {
      v3 = v8[2];
      if ( i + v9 > v6 )
        break;
      v11 = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 54, i, v9, &v23);
      if ( v11 < 0 )
        return (unsigned int)v11;
      HvpPointMapEntriesToBuffer((ULONG_PTR)BugCheckParameter2, v23, v3, i, 0, 0LL);
      v8 = (_DWORD *)(*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    v10 = HvpEnlistFreeCells((ULONG_PTR)BugCheckParameter2);
    v11 = v10;
    if ( v10 == 1073741833 )
    {
      v4 = 1;
    }
    else if ( v10 < 0 )
    {
      return (unsigned int)v11;
    }
    i += v8[2];
  }
  while ( i < v2 )
  {
    v13 = HvpGetCellMap(BugCheckParameter2, i);
    v14 = (_DWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v14, i, v2) )
    {
      if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
        return (unsigned int)-1073741492;
      if ( !(unsigned __int8)HvpMarkDirty((ULONG_PTR)BugCheckParameter2) )
        return (unsigned int)-1073741670;
      memset(v14, 0, 0x1000uLL);
      v14[7] = 0;
      *v14 = 1852400232;
      v14[1] = i & 0x7FFFFFFF;
      v4 = 1;
      v14[2] = 4096;
      v14[8] = 4064;
    }
    v15 = v14[2];
    if ( v15 != 4096 )
    {
      v3 = v14[2];
      v16 = HvpAllocateBin((__int64)BugCheckParameter2, v15, 0, 0x31334D43u, &v22);
      v1 = v22;
      v11 = v16;
      if ( v16 < 0 )
        goto LABEL_12;
      for ( j = 0; j < v3; *(_DWORD *)(v13 + 16) = 0 )
      {
        v13 = HvpGetCellMap(BugCheckParameter2, j + i);
        v18 = (const void *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        memmove((void *)(v1 + j), v18, 0x1000uLL);
        if ( (*(_BYTE *)(v13 + 8) & 8) != 0 )
          HvpFreeBin(BugCheckParameter2, 4096LL, v18);
        else
          CmpReleaseGlobalQuota(4096LL);
        j += 4096;
        *(_QWORD *)v13 = 0LL;
        *(_QWORD *)(v13 + 8) = 0LL;
      }
      if ( !(unsigned __int8)HvIsRangeDirty(BugCheckParameter2, i, v3) )
      {
        v11 = HvpProtectBin(v19, v3, v1, 0);
        if ( v11 < 0 )
          goto LABEL_12;
      }
      HvpPointMapEntriesToBuffer((ULONG_PTR)BugCheckParameter2, v1, v3, i, 1, 0LL);
      v14 = (_DWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
      v1 = 0LL;
      v22 = 0LL;
    }
    v20 = HvpEnlistFreeCells((ULONG_PTR)BugCheckParameter2);
    v11 = v20;
    if ( v20 == 1073741833 )
    {
      v4 = 1;
    }
    else if ( v20 < 0 )
    {
      return (unsigned int)v11;
    }
    i += v14[2];
    v2 = v21;
  }
  if ( v4 )
    return 1073741833;
  v11 = 0;
LABEL_12:
  if ( v1 )
    HvpFreeBin(BugCheckParameter2, v3, v1);
  return (unsigned int)v11;
}
