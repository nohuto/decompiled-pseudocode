/*
 * XREFs of KeReservePrivilegedPages @ 0x14028DC0C
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140683134 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14070F578 (MiReleasePrivilegedPtes.c)
 *     MiUnlockHotPatchPages @ 0x14085839C (MiUnlockHotPatchPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140818D5C (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
