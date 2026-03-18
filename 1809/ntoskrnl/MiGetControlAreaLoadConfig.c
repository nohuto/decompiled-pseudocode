/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1400D94F4
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1405F01D0 (MiMarkSharedImageCfgBits.c)
 *     MiAllowImageMap @ 0x1405F48B8 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x14064F5C0 (MiRelocateImageAgain.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406513D4 (MiMarkPrivateImageCfgBits.c)
 *     MmGetSectionInformation @ 0x14066D870 (MmGetSectionInformation.c)
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
