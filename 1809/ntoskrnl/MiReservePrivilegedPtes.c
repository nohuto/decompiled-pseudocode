/*
 * XREFs of MiReservePrivilegedPtes @ 0x1406842F4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140684100 (MiGetSystemAddressForImage.c)
 *     MiGetNewAddressForBootImage @ 0x1409B95F4 (MiGetNewAddressForBootImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x14028DDFC (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
