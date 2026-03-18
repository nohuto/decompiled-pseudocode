/*
 * XREFs of HvpTruncateBins @ 0x14065DB20
 * Callers:
 *     HvStoreModifiedData @ 0x14065D6F0 (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400FDEC0 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1405D5440 (HvpGetCellMap.c)
 *     HvpMapEntryGetFreeBin @ 0x14062EAA8 (HvpMapEntryGetFreeBin.c)
 *     HvFreeHivePartial @ 0x14065DBD4 (HvFreeHivePartial.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  _BYTE *CellMap; // rax
  unsigned int v7; // r10d
  __int64 FreeBin; // rax

  v2 = (int *)(BugCheckParameter2 + 272);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v5 + v4 - 4096);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x138FuLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( i
      || (unsigned int)(v4 + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 1784)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
