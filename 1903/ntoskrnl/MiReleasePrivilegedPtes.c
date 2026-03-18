/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140747A28
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImageWithLargePage @ 0x14089A11C (MiMapSystemImageWithLargePage.c)
 *     MiUnmapLargeDriver @ 0x14089A82C (MiUnmapLargeDriver.c)
 *     MiReleaseSystemImageVa @ 0x140A3D2A8 (MiReleaseSystemImageVa.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1402A4764 (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
