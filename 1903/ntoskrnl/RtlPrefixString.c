/*
 * XREFs of RtlPrefixString @ 0x140657230
 * Callers:
 *     IopCheckDiskName @ 0x140189768 (IopCheckDiskName.c)
 *     MiSnapThunk @ 0x14070F2B8 (MiSnapThunk.c)
 * Callees:
 *     RtlUpperChar @ 0x140657130 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // rdi
  char *v4; // rsi
  char *v5; // rbp
  CHAR v6; // r14
  CHAR v8; // bl
  signed __int64 v9; // rsi

  Buffer = String1->Buffer;
  v4 = String2->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v5 = &Buffer[String1->Length];
    if ( Buffer >= v5 )
      return 1;
    if ( CaseInSensitive )
    {
      while ( 1 )
      {
        v6 = *Buffer;
        if ( *Buffer != *v4 )
        {
          v8 = RtlUpperChar(*v4);
          if ( RtlUpperChar(v6) != v8 )
            break;
        }
        ++Buffer;
        ++v4;
        if ( Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v9 = v4 - Buffer;
      while ( *Buffer == Buffer[v9] )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
