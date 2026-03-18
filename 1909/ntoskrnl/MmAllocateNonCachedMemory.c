/*
 * XREFs of MmAllocateNonCachedMemory @ 0x140888E30
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiAllocatePagesForMdl @ 0x1400DCB14 (MiAllocatePagesForMdl.c)
 *     MmFreePagesFromMdl @ 0x1400DD350 (MmFreePagesFromMdl.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
                                 (__int64)&MiSystemPartition,
                                 0LL,
                                 0xFFFFFFFFFFFFFFFFuLL,
                                 0LL,
                                 NumberOfBytes,
                                 0,
                                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor]
                                                                 + 192)
                                                     + 146LL),
                                 4u);
  if ( !PagesForMdl )
    return 0LL;
  v3 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)(unsigned int)v1);
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
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_15;
      v9 = (v8 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_15;
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 )
      v6 |= 0x8000000000000000uLL;
LABEL_15:
    *(_QWORD *)v3 = v6;
    if ( v7 )
      MiWritePteShadow(v3);
    v3 += 8LL;
    --v1;
  }
  while ( v1 );
  return (PVOID)v5;
}
