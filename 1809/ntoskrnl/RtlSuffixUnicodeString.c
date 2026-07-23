/*
 * XREFs of RtlSuffixUnicodeString @ 0x140891320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // r10
  unsigned __int16 v4; // ax
  wchar_t *Buffer; // r9
  wchar_t *v6; // rbx
  char *v7; // rdi
  wchar_t v8; // r10
  unsigned __int16 v9; // r11
  char *v10; // rdx

  Length = String2->Length;
  v4 = String1->Length;
  if ( String2->Length >= String1->Length )
  {
    Buffer = String1->Buffer;
    v6 = &Buffer[(unsigned __int64)v4 >> 1];
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = (char *)((char *)&String2->Buffer[(Length - (unsigned __int64)v4) >> 1] - (char *)Buffer);
        while ( 1 )
        {
          v8 = *Buffer;
          if ( *Buffer >= 0x61u )
          {
            if ( v8 > 0x7Au )
              v8 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v8 & 0xF)
                                                                            + 2
                                                                            * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v8 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v8 >> 8)]]];
            else
              v8 -= 32;
          }
          v9 = *(wchar_t *)((char *)Buffer + (_QWORD)v7);
          if ( v9 >= 0x61u )
          {
            if ( v9 > 0x7Au )
              v9 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v9 & 0xF)
                                                                            + 2
                                                                            * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v9 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v9 >> 8)]]];
            else
              v9 -= 32;
          }
          if ( v8 != v9 )
            break;
          if ( ++Buffer >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v6 )
    {
      v10 = (char *)((char *)&String2->Buffer[(Length - (unsigned __int64)v4) >> 1] - (char *)Buffer);
      while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v10) )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
