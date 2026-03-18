/*
 * XREFs of DbgUnicodeStringToAnsiString @ 0x140154E04
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x140154D4C (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140180E64 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLoadUserSymbols @ 0x140787880 (MiLoadUserSymbols.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14070FB40 (RtlxUnicodeStringToAnsiSize.c)
 */

__int64 __fastcall DbgUnicodeStringToAnsiString(PANSI_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v4; // eax
  char *PoolWithTag; // rax

  v4 = RtlxUnicodeStringToAnsiSize(SourceString);
  if ( v4 <= 0xFFFF )
  {
    DestinationString->MaximumLength = v4;
    DestinationString->Length = v4 - 1;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x644C6D4Du);
    DestinationString->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, SourceString, 0) >= 0 )
        return 1LL;
      ExFreePoolWithTag(DestinationString->Buffer, 0);
    }
  }
  return 0LL;
}
