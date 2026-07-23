/*
 * XREFs of RtlPrefixUnicodeString @ 0x180071EA0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x180001B80 (RtlNtPathNameToDosPathName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x180071CF4 (RtlpDetermineDosPathNameType4.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007949C (RtlpProcessIFEOKeyFilter.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800CF658 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // r9
  wchar_t *v4; // r10
  char *v5; // r11
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  char *v9; // rcx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = (wchar_t *)((char *)Buffer + String1->Length);
    if ( CaseInSensitive )
    {
      if ( Buffer < v4 )
      {
        v5 = (char *)((char *)String2->Buffer - (char *)Buffer);
        while ( 1 )
        {
          v6 = *Buffer;
          v7 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v5);
          if ( (_DWORD)v6 != (_DWORD)v7 )
          {
            if ( (unsigned int)v6 >= 0x61 )
            {
              if ( (unsigned int)v6 > 0x7A )
                LODWORD(v6) = (unsigned __int16)(v6
                                               + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                          + 2
                                                          * ((v6 & 0xF)
                                                           + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                 + 2LL
                                                                                 * (((unsigned __int8)v6 >> 4)
                                                                                  + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v6 >> 8)))))));
              else
                LODWORD(v6) = v6 - 32;
            }
            if ( (unsigned int)v7 >= 0x61 )
            {
              if ( (unsigned int)v7 > 0x7A )
                LODWORD(v7) = (unsigned __int16)(v7
                                               + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                          + 2
                                                          * ((v7 & 0xF)
                                                           + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                 + 2LL
                                                                                 * (((unsigned __int8)v7 >> 4)
                                                                                  + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v7 >> 8)))))));
              else
                LODWORD(v7) = v7 - 32;
            }
            if ( (_DWORD)v6 != (_DWORD)v7 )
              break;
          }
          if ( ++Buffer >= v4 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v4 )
    {
      v9 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v9) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
