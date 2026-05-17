/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180022080
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180021B60 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800220EC (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x180061D80 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1800220B0 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return (unsigned int)(v2 + 2);
}
