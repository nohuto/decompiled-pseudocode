/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1400D9594
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1405F11D0 (MiMarkSharedImageCfgBits.c)
 *     MiAllowImageMap @ 0x1405F58B8 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     MiMarkPrivateImageCfgBits @ 0x140652574 (MiMarkPrivateImageCfgBits.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
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
