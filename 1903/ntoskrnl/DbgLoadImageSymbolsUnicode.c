/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x140154D4C
 * Callers:
 *     MiDriverLoadSucceeded @ 0x14070E4FC (MiDriverLoadSucceeded.c)
 *     MiHandleBootImage @ 0x1409EF704 (MiHandleBootImage.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140154DB0 (DbgLoadImageSymbols.c)
 *     DbgUnicodeStringToAnsiString @ 0x140154E04 (DbgUnicodeStringToAnsiString.c)
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
