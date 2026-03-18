/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x14065FBBC
 * Callers:
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14076504C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAddDummyBinToHive @ 0x1408303B0 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1408305FC (HvpMapHiveImage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1405D5440 (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int v9; // r10d
  __int64 CellMap; // rax
  unsigned int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  __int64 v15; // rcx

  if ( a3 )
  {
    v9 = 0;
    do
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v9 + a4);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0x20AuLL);
      *(_QWORD *)(CellMap + 8) = a2;
      if ( v12 )
      {
        v14 = 0;
      }
      else
      {
        *(_QWORD *)(CellMap + 8) = a2 | 1;
        v14 = v13;
      }
      *(_DWORD *)(CellMap + 16) = v14;
      if ( a6 )
      {
        *(_QWORD *)(CellMap + 8) |= 2uLL;
        v15 = a6;
      }
      else
      {
        v15 = v12;
      }
      *(_QWORD *)CellMap = v15;
      if ( a5 )
        *(_QWORD *)(CellMap + 8) |= 8uLL;
      v9 = v12 + 4096;
    }
    while ( v9 < v13 );
  }
}
