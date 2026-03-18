/*
 * XREFs of MiReturnSystemImageAddress @ 0x140746F00
 * Callers:
 *     MiReturnImageBase @ 0x140609554 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140746F3C (MiReleaseDriverPtes.c)
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
