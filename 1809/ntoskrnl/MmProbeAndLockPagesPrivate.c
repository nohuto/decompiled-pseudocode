/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14010CD74
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x14068FEC4 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
