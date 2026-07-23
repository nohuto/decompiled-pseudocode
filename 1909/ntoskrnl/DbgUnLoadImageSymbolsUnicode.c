/*
 * XREFs of DbgUnLoadImageSymbolsUnicode @ 0x140181554
 * Callers:
 *     MiSegmentDelete @ 0x14064E778 (MiSegmentDelete.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiSwitchBaseAddress @ 0x1406DBD18 (MiSwitchBaseAddress.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1401554A4 (DbgUnicodeStringToAnsiString.c)
 *     DebugService2 @ 0x1401CC540 (DebugService2.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2, __int64 a3)
{
  _STRING v6; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString(&v6, SourceString) )
    return 0LL;
  v8 = 0;
  v9 = 0;
  v7[0] = a2;
  v7[1] = a3;
  DebugService2(&v6, v7, 4LL);
  ExFreePoolWithTag(v6.Buffer, 0);
  return 1LL;
}
