/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x1405A4F90
 * Callers:
 *     HvpAddBin @ 0x1405A49BC (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1405FA6A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14073E1CC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAddDummyBinToHive @ 0x1407F8900 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407F8B4C (HvpMapHiveImage.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6)
{
  unsigned int i; // r10d
  __int64 CellMap; // rax
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  __int64 v15; // rcx

  if ( a3 )
  {
    for ( i = 0; i < a3; i = v12 + 4096 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, i + a4);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v13, 0x20AuLL);
      *(_QWORD *)(CellMap + 8) = a2;
      if ( v12 )
      {
        v14 = 0;
      }
      else
      {
        *(_QWORD *)(CellMap + 8) = a2 | 1;
        v14 = a3;
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
    }
  }
}
