/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14010CD94
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14068FEA4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406901D0 @ 0x1406901D0 (sub_1406901D0.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
