/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x14033E710
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
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
