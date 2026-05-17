/*
 * XREFs of sub_1800621C4 @ 0x1800621C4
 * Callers:
 *     sub_180061DC4 @ 0x180061DC4 (sub_180061DC4.c)
 *     RtlUnicodeToOemN @ 0x180061E60 (RtlUnicodeToOemN.c)
 *     RtlOemToUnicodeN @ 0x180061F00 (RtlOemToUnicodeN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x180061FB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180062010 (RtlUpcaseUnicodeToOemN.c)
 *     RtlConsoleMultiByteToUnicodeN @ 0x1800E3450 (RtlConsoleMultiByteToUnicodeN.c)
 *     sub_1800F6920 @ 0x1800F6920 (sub_1800F6920.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800621C4(char a1)
{
  int v1; // eax

  v1 = (unsigned __int8)byte_180162796;
  if ( !a1 )
    v1 = (unsigned __int8)byte_180162797;
  return v1 != 0;
}
