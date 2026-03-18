/*
 * XREFs of RtlSuffixUnicodeString @ 0x1408CE490
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     NLS_UPCASE @ 0x140092980 (NLS_UPCASE.c)
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // r10
  __int64 v5; // r9
  wchar_t *v6; // r11
  wchar_t *v7; // rax
  unsigned __int64 v8; // rcx
  signed __int64 v9; // rbx
  unsigned __int16 *v10; // r10
  unsigned __int16 v11; // ax
  __int64 v12; // r10
  unsigned __int64 v13; // r11
  __int16 v14; // r9
  signed __int64 v15; // rdx

  Length = String1->Length;
  if ( String2->Length >= String1->Length )
  {
    Buffer = String1->Buffer;
    v5 = Length;
    v6 = &Buffer[(unsigned __int64)Length >> 1];
    if ( Buffer >= v6 )
      return 1;
    v7 = String2->Buffer;
    v8 = ((unsigned __int64)String2->Length - v5) >> 1;
    if ( CaseInSensitive )
    {
      v9 = (char *)&v7[v8] - (char *)Buffer;
      while ( 1 )
      {
        NLS_UPCASE(*(wchar_t *)((char *)Buffer + v9));
        v11 = NLS_UPCASE(*v10);
        if ( v11 != v14 )
          break;
        Buffer = (wchar_t *)(v12 + 2);
        if ( (unsigned __int64)Buffer >= v13 )
          return 1;
      }
    }
    else
    {
      v15 = (char *)&v7[v8] - (char *)Buffer;
      while ( *Buffer == *(wchar_t *)((char *)Buffer + v15) )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
    }
  }
  return 0;
}
