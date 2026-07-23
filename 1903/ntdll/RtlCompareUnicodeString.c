/*
 * XREFs of RtlCompareUnicodeString @ 0x180019EE0
 * Callers:
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 *     sub_180021B60 @ 0x180021B60 (sub_180021B60.c)
 *     sub_18002715C @ 0x18002715C (sub_18002715C.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18006DB18 @ 0x18006DB18 (sub_18006DB18.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 *     sub_18007A324 @ 0x18007A324 (sub_18007A324.c)
 *     sub_180083BCC @ 0x180083BCC (sub_180083BCC.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D553C @ 0x1800D553C (sub_1800D553C.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 *     sub_1800F70E4 @ 0x1800F70E4 (sub_1800F70E4.c)
 *     sub_1800F71AC @ 0x1800F71AC (sub_1800F71AC.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  PWCH Buffer; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  WCHAR *v7; // rbx
  char *v8; // r11
  __int64 v9; // rcx
  unsigned __int16 v11; // r10
  unsigned __int16 v12; // bp
  unsigned __int16 v13; // ax
  char *v14; // r8
  unsigned __int16 v15; // ax

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v9 = *Buffer;
      if ( (_WORD)v9 != *(PWCH)((char *)Buffer + (_QWORD)v8) )
      {
        v12 = sub_18001A234(v9);
        v13 = sub_18001A234(v11);
        if ( v12 != v13 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return v12 - v13;
  }
  else
  {
    v14 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v15 = *(PWCH)((char *)Buffer + (_QWORD)v14);
      if ( *Buffer != v15 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return *Buffer - v15;
  }
}
