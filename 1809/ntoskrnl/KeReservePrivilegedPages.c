/*
 * XREFs of KeReservePrivilegedPages @ 0x14028DB0C
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140683154 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14070F598 (MiReleasePrivilegedPtes.c)
 *     MiUnlockHotPatchPages @ 0x1408583BC (MiUnlockHotPatchPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140818D7C (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
