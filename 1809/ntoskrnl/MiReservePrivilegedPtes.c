/*
 * XREFs of MiReservePrivilegedPtes @ 0x140683154
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140682F60 (MiGetSystemAddressForImage.c)
 *     MiGetNewAddressForBootImage @ 0x1409B85F4 (MiGetNewAddressForBootImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x14028DB0C (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x8000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
