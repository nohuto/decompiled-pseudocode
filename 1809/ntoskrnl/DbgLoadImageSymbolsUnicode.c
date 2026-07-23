/*
 * XREFs of DbgLoadImageSymbolsUnicode @ 0x1400F4C8C
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1400F4AFC (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1400F4CE0 (DbgLoadImageSymbols.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, PVOID Base)
{
  STRING Name; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&Name, SourceString) )
    return 0LL;
  DbgLoadImageSymbols(&Name, Base, 0xFFFFFFFFFFFFFFFFuLL);
  ExFreePoolWithTag(Name.Buffer, 0);
  return 1LL;
}
