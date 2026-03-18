/*
 * XREFs of MiEndingOffset @ 0x1400B89BC
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MiEndingOffsetWithLock @ 0x1400B88C0 (MiEndingOffsetWithLock.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400BF254 (MiCanFileBeTruncatedInternal.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEndingOffset(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(unsigned int *)(a1 + 36);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x20) != 0 )
    v2 = (v1 + *(unsigned int *)(a1 + 40)) << 9;
  else
    v2 = (*(unsigned int *)(a1 + 40) + (v1 | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26))) << 12;
  return v2 + ((unsigned __int64)*(unsigned __int16 *)(a1 + 34) >> 4);
}
