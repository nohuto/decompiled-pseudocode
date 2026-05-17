/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180022080
 * Callers:
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_1800220EC @ 0x1800220EC (sub_1800220EC.c)
 *     RtlOemStringToUnicodeString @ 0x180061CE0 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1800220B0 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return (unsigned int)(v2 + 2);
}
