/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140097C20
 * Callers:
 *     MiAllowImageMap @ 0x1405EB884 (MiAllowImageMap.c)
 *     MiMarkSharedImageCfgBits @ 0x140608C18 (MiMarkSharedImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x140648DF4 (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x1406C7100 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406DEE14 (MiMarkPrivateImageCfgBits.c)
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
