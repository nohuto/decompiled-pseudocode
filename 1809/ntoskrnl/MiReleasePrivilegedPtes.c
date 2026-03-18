/*
 * XREFs of MiReleasePrivilegedPtes @ 0x14070F598
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140682F60 (MiGetSystemAddressForImage.c)
 *     MiReleaseNewAddressForBootImage @ 0x1409F773C (MiReleaseNewAddressForBootImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x14028DB0C (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
