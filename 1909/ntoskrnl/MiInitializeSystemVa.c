/*
 * XREFs of MiInitializeSystemVa @ 0x1409EFD10
 * Callers:
 *     MmInitSystem @ 0x1409F0CD4 (MmInitSystem.c)
 * Callees:
 *     MiAssignSoftwareWsleRegion @ 0x140188508 (MiAssignSoftwareWsleRegion.c)
 *     MiRebaseDynamicRelocationRegions @ 0x1409EFDA4 (MiRebaseDynamicRelocationRegions.c)
 *     MiSetSystemRegionTypes @ 0x1409F04E0 (MiSetSystemRegionTypes.c)
 *     MiAssignTopLevelRanges @ 0x1409F05B0 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x1409F09EC (MiInitializeTopLevelBitmap.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  int v4; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 8) != 0 )
    MiFlags |= 0x200000u;
  v7 = 0LL;
  v2 = 16;
  v3 = 8;
  do
  {
    while ( 1 )
    {
      MiInitializeTopLevelBitmap();
      v4 = MiAssignTopLevelRanges(v2, &v7);
      if ( v4 )
        goto LABEL_5;
      if ( !v3 )
        break;
      --v3;
    }
    v3 = 8;
LABEL_5:
    v2 >>= 1;
  }
  while ( !v4 );
  v5 = v7;
  if ( !v7 )
    v5 = 0xFFFFF78000000000uLL;
  MiAssignSoftwareWsleRegion(a1, v5);
  MiSetSystemRegionTypes();
  return MiRebaseDynamicRelocationRegions(a1);
}
