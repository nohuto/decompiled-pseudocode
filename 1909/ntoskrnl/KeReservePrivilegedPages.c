/*
 * XREFs of KeReservePrivilegedPages @ 0x1402A44C4
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140712694 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140749928 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408876B0 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140852474 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
