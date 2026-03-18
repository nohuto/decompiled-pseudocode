/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140749928
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089993C (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x14089A04C (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A3D078 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1402A44C4 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
