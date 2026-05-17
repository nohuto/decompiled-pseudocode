/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180026720
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800230BC (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x18006A2D0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180026750 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return (unsigned int)(v2 + 2);
}
