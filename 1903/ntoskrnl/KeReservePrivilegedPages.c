/*
 * XREFs of KeReservePrivilegedPages @ 0x1402A4764
 * Callers:
 *     MiReservePrivilegedPtes @ 0x1407108B4 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140747A28 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x140887E90 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140852D74 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
