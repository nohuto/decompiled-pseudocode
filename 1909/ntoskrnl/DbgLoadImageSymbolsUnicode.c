/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x1401553EC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407102DC (MiDriverLoadSucceeded.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140155450 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x1401554A4 (DbgUnicodeStringToAnsiString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, PVOID Base)
{
  STRING Name; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&Name.Length = 0LL;
  Name.Buffer = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&Name, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&Name, Base, 0xFFFFFFFFFFFFFFFFuLL);
  ExFreePoolWithTag(Name.Buffer, 0);
  return 1LL;
}
