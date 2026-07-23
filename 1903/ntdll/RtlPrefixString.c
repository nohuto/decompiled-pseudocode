/*
 * XREFs of RtlPrefixString @ 0x1800619B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800621B0 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  PCHAR Buffer; // rdi
  CHAR *v4; // rsi
  CHAR *v5; // r14
  CHAR v6; // cl
  CHAR v8; // bl
  CHAR *v9; // rdx

  Buffer = String1->Buffer;
  if ( String2->Length >= String1->Length )
  {
    v4 = &Buffer[String1->Length];
    if ( Buffer >= v4 )
      return 1;
    if ( CaseInSensitive )
    {
      v5 = (CHAR *)(String2->Buffer - Buffer);
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
      v9 = (CHAR *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v9] )
      {
        if ( ++Buffer >= v4 )
          return 1;
      }
    }
  }
  return 0;
}
