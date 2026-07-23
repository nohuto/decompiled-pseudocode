/*
 * XREFs of RtlEqualString @ 0x1400F2E50
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x1409CCA80 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x14067AA60 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // rdi
  char *v4; // rsi
  char *v5; // rdx
  char *v7; // r14
  CHAR v8; // bp
  CHAR v9; // cl
  CHAR v10; // bl

  if ( String1->Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v4 = &Buffer[String1->Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v4 )
      {
        v7 = (char *)(String2->Buffer - Buffer);
        while ( 1 )
        {
          v8 = *Buffer;
          v9 = Buffer[(_QWORD)v7];
          if ( *Buffer != v9 )
          {
            v10 = RtlUpperChar(v9);
            if ( RtlUpperChar(v8) != v10 )
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
      v5 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v5] )
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
