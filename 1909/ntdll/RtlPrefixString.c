/*
 * XREFs of RtlPrefixString @ 0x180061A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180062250 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // rdi
  char *v4; // rsi
  char *v5; // r14
  CHAR v6; // cl
  CHAR v8; // bl
  char *v9; // rdx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = &Buffer[String1->Length];
    if ( Buffer >= v4 )
      return 1;
    if ( CaseInSensitive )
    {
      v5 = (char *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v6 = Buffer[(_QWORD)v5];
        if ( *Buffer != v6 )
        {
          v8 = RtlUpperChar(v6);
          if ( RtlUpperChar(*Buffer) != v8 )
            break;
        }
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
    else
    {
      v9 = (char *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v9] )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
