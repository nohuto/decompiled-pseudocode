/*
 * XREFs of HvpDropPagedBins @ 0x140737784
 * Callers:
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvpAllocateBin @ 0x1405A3540 (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A4F90 (HvpPointMapEntriesToBuffer.c)
 *     HvpMapEntryGetFreeBin @ 0x1405FAC1C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x1405FC668 (CmpReleaseGlobalQuota.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 *     MmFreeBootRegistry @ 0x1407378C8 (MmFreeBootRegistry.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // r14d
  int v3; // ebp
  unsigned int v4; // r15d
  unsigned int i; // esi
  __int64 CellMap; // rax
  _BYTE *v7; // r12
  __int64 v8; // r13
  _DWORD *v9; // r13
  int Bin; // edi
  __int64 FreeBin; // rax
  void *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v1 = 0;
  v3 = *(_DWORD *)(BugCheckParameter2 + 160) & 0x10;
  if ( v3 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 272);
    if ( v4 )
    {
      for ( i = 0; i < v4; i += v1 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, i);
        v7 = (_BYTE *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0x10F1uLL);
        v8 = *(_QWORD *)(CellMap + 8);
        if ( (v8 & 8) != 0 )
          break;
        v9 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF0uLL);
        v1 = v9[2];
        Bin = HvpAllocateBin(BugCheckParameter2, v1, 0, 0x35324D43u, (__int64 *)&v13);
        if ( Bin < 0 )
          goto LABEL_12;
        memmove(v13, v9, v1);
        FreeBin = HvpMapEntryGetFreeBin(v7);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v13, v1, i, 1, FreeBin);
        v13 = 0LL;
        CmpReleaseGlobalQuota(v1);
      }
    }
  }
  Bin = 0;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
LABEL_12:
    if ( v13 )
      HvpFreeBin(BugCheckParameter2, v1, (unsigned __int64)v13);
  }
  return (unsigned int)Bin;
}
