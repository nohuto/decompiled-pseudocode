/*
 * XREFs of RtlEqualString @ 0x140093CF0
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x140A39FEC (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x140657130 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  char *Buffer; // rdi
  char *v4; // rsi
  char *v5; // rbp
  signed __int64 v6; // rsi
  CHAR v8; // r14
  CHAR v9; // bl

  if ( String1->Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v4 = String2->Buffer;
    v5 = &Buffer[String1->Length];
    if ( Buffer >= v5 )
      return 1;
    if ( CaseInSensitive )
    {
      while ( 1 )
      {
        v8 = *v4;
        if ( *Buffer != *v4 )
        {
          v9 = RtlUpperChar(*Buffer);
          if ( v9 != RtlUpperChar(v8) )
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
      v6 = v4 - Buffer;
      while ( *Buffer == Buffer[v6] )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
