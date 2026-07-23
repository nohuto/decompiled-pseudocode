/*
 * XREFs of RtlCompareString @ 0x18008D440
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180075070 (RtlUpperChar.c)
 */

LONG __cdecl RtlCompareString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // esi
  unsigned int v4; // r12d
  __int64 v5; // rdi
  char *Buffer; // rbx
  char *v7; // rdi
  char *v8; // r14
  CHAR v9; // bp
  unsigned __int8 v11; // r15
  int v12; // eax
  int v13; // ecx
  char *v14; // rax
  unsigned __int8 v15; // dl

  Length = String1->Length;
  v4 = String2->Length;
  v5 = String1->Length;
  Buffer = String1->Buffer;
  if ( Length > v4 )
    v5 = String2->Length;
  v7 = &Buffer[v5];
  if ( !CaseInSensitive )
  {
    if ( Buffer < v7 )
    {
      v14 = (char *)(String2->Buffer - Buffer);
      while ( 1 )
      {
        LOBYTE(v13) = *Buffer;
        v15 = Buffer[(_QWORD)v14];
        if ( *Buffer != v15 )
          break;
        if ( ++Buffer >= v7 )
          return Length - v4;
      }
      v12 = v15;
      v13 = (unsigned __int8)v13;
      return v13 - v12;
    }
    return Length - v4;
  }
  if ( Buffer >= v7 )
    return Length - v4;
  v8 = (char *)(String2->Buffer - Buffer);
  while ( 1 )
  {
    v9 = Buffer[(_QWORD)v8];
    if ( *Buffer != v9 )
    {
      v11 = RtlUpperChar(*Buffer);
      LOBYTE(v12) = RtlUpperChar(v9);
      if ( v11 != (_BYTE)v12 )
        break;
    }
    if ( ++Buffer >= v7 )
      return Length - v4;
  }
  v12 = (unsigned __int8)v12;
  v13 = v11;
  return v13 - v12;
}
