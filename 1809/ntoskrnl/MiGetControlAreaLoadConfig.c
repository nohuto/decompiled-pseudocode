/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1400D9514
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1405F01D0 (MiMarkSharedImageCfgBits.c)
 *     MiAllowImageMap @ 0x1405F48B8 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x14064F5A0 (MiRelocateImageAgain.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406513B4 (MiMarkPrivateImageCfgBits.c)
 *     MmGetSectionInformation @ 0x14066D850 (MmGetSectionInformation.c)
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
