/*
 * XREFs of MiReturnSystemImageAddress @ 0x140745000
 * Callers:
 *     MiReturnImageBase @ 0x140607A44 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x14074503C (MiReleaseDriverPtes.c)
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
