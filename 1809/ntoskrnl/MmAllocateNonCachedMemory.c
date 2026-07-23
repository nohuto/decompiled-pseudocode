/*
 * XREFs of MmAllocateNonCachedMemory @ 0x14084EEA0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MmFreePagesFromMdl @ 0x1401374D0 (MmFreePagesFromMdl.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

PVOID __stdcall MmAllocateNonCachedMemory(SIZE_T NumberOfBytes)
{
  SIZE_T v1; // rsi
  struct _MDL *PagesForMdl; // rdi
  ULONG_PTR v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // r8d
  char v8; // r11
  bool v9; // zf

  if ( NumberOfBytes >= 0x100000000LL )
    return 0LL;
  v1 = (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0);
  PagesForMdl = (struct _MDL *)MiAllocatePagesForMdl(
                                 (unsigned __int64)&MiSystemPartition,
                                 0LL,
                                 0xFFFFFFFFFFFFFFFFuLL,
                                 0LL,
                                 NumberOfBytes,
                                 0,
                                 *(_WORD *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192)
                                          + 146LL),
                                 4u);
  if ( !PagesForMdl )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v1);
  if ( !v3 )
  {
    MmFreePagesFromMdl(PagesForMdl);
    ExFreePoolWithTag(PagesForMdl, 0);
    return 0LL;
  }
  *(_QWORD *)(48 * (__int64)PagesForMdl[1].Next - 0x57FFFFFFFF0LL) = PagesForMdl;
  v5 = (__int64)(v3 << 25) >> 16;
  MiMakeValidPte(v3, 0LL, -1610612724);
  do
  {
    if ( !MiPteInShadowRange(v3) )
      goto LABEL_15;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v7 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_15;
      v9 = (v8 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_15;
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 )
      v6 |= 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v3 = v6;
    if ( v7 )
      MiWritePteShadow(v3, v6);
    v3 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v5;
}
