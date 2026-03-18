/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x1400FB68C
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406ADDF0 (WbMakeUserExecutablePagesKernelWritable.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(_DWORD *a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
