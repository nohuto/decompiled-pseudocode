/*
 * XREFs of RtlPrefixUnicodeString @ 0x180019FB0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     sub_180077094 @ 0x180077094 (sub_180077094.c)
 *     sub_1800CDE60 @ 0x1800CDE60 (sub_1800CDE60.c)
 * Callees:
 *     sub_18001A234 @ 0x18001A234 (sub_18001A234.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  PWCH Buffer; // r10
  WCHAR *v4; // r11
  char *v5; // rbx
  __int64 v6; // rcx
  unsigned __int16 *v8; // r10
  __int16 v9; // ax
  __int16 v10; // r9
  char *v11; // rcx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = (PWCH)((char *)Buffer + String1->Length);
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
          sub_18001A234(v6);
          v9 = sub_18001A234(*v8);
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
      while ( *Buffer == *(PWCH)((char *)Buffer + (_QWORD)v11) )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
