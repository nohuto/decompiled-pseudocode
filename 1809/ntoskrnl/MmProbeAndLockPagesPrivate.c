/*
 * XREFs of MmProbeAndLockPagesPrivate @ 0x14010CE14
 * Callers:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140691064 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 */

void __fastcall MmProbeAndLockPagesPrivate(__int64 a1)
{
  MiProbeAndLockPages(a1, 1, 3);
}
