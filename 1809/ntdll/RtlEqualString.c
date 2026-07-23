/*
 * XREFs of RtlEqualString @ 0x180074FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180075070 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlEqualString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // rdi
  char *v5; // rsi
  char *v6; // r14
  CHAR v7; // cl
  CHAR v8; // bl
  char *v9; // rdx

  if ( String1->Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v5 = &Buffer[String1->Length];
  if ( CaseInSensitive )
  {
    if ( Buffer < v5 )
    {
      v6 = (char *)(String2->Buffer - Buffer);
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
      return 0;
    }
  }
  else if ( Buffer < v5 )
  {
    v9 = (char *)(String2->Buffer - Buffer);
    while ( *Buffer == Buffer[(_QWORD)v9] )
    {
      if ( ++Buffer >= v5 )
        return 1;
    }
    return 0;
  }
  return 1;
}
