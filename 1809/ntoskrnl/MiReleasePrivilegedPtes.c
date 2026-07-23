/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140710818
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 *     MiReleaseNewAddressForBootImage @ 0x1409F874C (MiReleaseNewAddressForBootImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x14028DDFC (KeReservePrivilegedPages.c)
 */

__int64 MiReleasePrivilegedPtes()
{
  __int64 result; // rax

  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  return result;
}
