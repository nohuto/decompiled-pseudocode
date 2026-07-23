/*
 * XREFs of RtlPrefixString @ 0x14067A950
 * Callers:
 *     IopCheckDiskName @ 0x14017FC80 (IopCheckDiskName.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 * Callees:
 *     RtlUpperChar @ 0x14067AA60 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // rdi
  char *v4; // rsi
  char *v5; // r14
  CHAR v6; // bp
  CHAR v7; // cl
  CHAR v9; // bl
  char *v10; // rdx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = &Buffer[String1->Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v4 )
      {
        v5 = (char *)(String2->Buffer - Buffer);
        while ( 1 )
        {
          v6 = *Buffer;
          v7 = Buffer[(_QWORD)v5];
          if ( *Buffer != v7 )
          {
            v9 = RtlUpperChar(v7);
            if ( RtlUpperChar(v6) != v9 )
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
      v10 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v10] )
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
