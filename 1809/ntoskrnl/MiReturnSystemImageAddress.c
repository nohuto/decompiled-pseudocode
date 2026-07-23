/*
 * XREFs of MiReturnSystemImageAddress @ 0x14070F2A0
 * Callers:
 *     MiReturnImageBase @ 0x1405F1514 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  int SystemRegionType; // eax
  unsigned int v3; // r9d
  __int64 v4; // rdx

  MiGetPteAddress(a1);
  SystemRegionType = MiGetSystemRegionType(v1);
  return MiReleaseDriverPtes(SystemRegionType == 1, v4, v3);
}
