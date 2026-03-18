/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14033ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084BF40 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall ExpResourceTimeoutCaptureLiveDump(ULONG_PTR BugCheckParameter2)
{
  DbgkWerCaptureLiveKernelDump(
    L"ResourceTimeout",
    *(unsigned int *)(BugCheckParameter2 + 48),
    *(unsigned int *)(BugCheckParameter2 + 52),
    0LL,
    0LL,
    0);
  return ExFreeHeapPool(BugCheckParameter2);
}
