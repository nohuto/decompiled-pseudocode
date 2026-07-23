/*
 * XREFs of RtlEqualString @ 0x180062110
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1800621B0 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  PCHAR Buffer; // rdi
  CHAR *v5; // rsi
  CHAR *v6; // r14
  CHAR v7; // cl
  CHAR v8; // bl
  CHAR *v9; // rdx

  if ( String1->Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v5 = &Buffer[String1->Length];
  if ( Buffer < v5 )
  {
    if ( CaseInSensitive )
    {
      v6 = (CHAR *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        v7 = Buffer[(_QWORD)v6];
        if ( *Buffer != v7 )
        {
          v8 = RtlUpperChar(v7);
          if ( RtlUpperChar(*Buffer) != v8 )
            break;
        }
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    else
    {
      v9 = (CHAR *)(String2->Buffer - Buffer);
      while ( *Buffer == Buffer[(_QWORD)v9] )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}
