/*
 * XREFs of CcFlushCache @ 0x14012D1A0
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 */

void __stdcall CcFlushCache(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PIO_STATUS_BLOCK IoStatus)
{
  CcFlushCachePriv((__int64)SectionObjectPointer, FileOffset, Length, 0LL, 0, (unsigned int *)IoStatus);
}
