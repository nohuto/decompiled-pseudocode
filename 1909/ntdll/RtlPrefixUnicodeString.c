/*
 * XREFs of RtlPrefixUnicodeString @ 0x180019FB0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180073914 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180077514 (RtlpDetermineDosPathNameType4.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CDF20 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     NLS_UPCASE @ 0x18001A234 (NLS_UPCASE.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r10
  wchar_t *v4; // r11
  char *v5; // rbx
  __int64 v6; // rcx
  unsigned __int16 *v8; // r10
  __int16 v9; // ax
  __int16 v10; // r9
  char *v11; // rcx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = (wchar_t *)((char *)Buffer + String1->Length);
    if ( Buffer >= v4 )
      return 1;
    if ( CaseInSensitive )
    {
      v5 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v6 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v5);
        if ( *Buffer != (_WORD)v6 )
        {
          NLS_UPCASE(v6);
          v9 = NLS_UPCASE(*v8);
          if ( v9 != v10 )
            break;
        }
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
    else
    {
      v11 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v11) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
