/*
 * XREFs of KeReservePrivilegedPages @ 0x14028DDFC
 * Callers:
 *     MiReservePrivilegedPtes @ 0x1406842F4 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140710818 (MiReleasePrivilegedPtes.c)
 *     MiUnlockHotPatchPages @ 0x1408595FC (MiUnlockHotPatchPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140819F5C (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
