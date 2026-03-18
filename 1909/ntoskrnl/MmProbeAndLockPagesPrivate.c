/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1400FD81C
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406AFD20 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
