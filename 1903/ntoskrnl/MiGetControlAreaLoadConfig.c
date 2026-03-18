/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1400A93C8
 * Callers:
 *     MiAllowImageMap @ 0x1405EB0B4 (MiAllowImageMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140607108 (MiMarkSharedImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x14066F490 (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x14068D080 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DDA24 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( result )
    result += 72LL;
  return result;
}
