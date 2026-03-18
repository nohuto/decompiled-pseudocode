/*
 * XREFs of RtlCompareString @ 0x140657D30
 * Callers:
 *     KsepGetModuleInfoByName @ 0x14088405C (KsepGetModuleInfoByName.c)
 * Callees:
 *     RtlUpperChar @ 0x140657130 (RtlUpperChar.c)
 */

LONG __stdcall RtlCompareString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  unsigned int Length; // esi
  unsigned int v4; // r12d
  unsigned int v5; // eax
  char *Buffer; // rbx
  char *v7; // rdi
  char *v8; // rbp
  CHAR v9; // r14
  unsigned __int8 v11; // r15
  unsigned __int8 v12; // al
  int v13; // ecx
  signed __int64 v14; // rdi

  Length = String1->Length;
  v4 = String2->Length;
  v5 = Length;
  Buffer = String1->Buffer;
  v7 = String2->Buffer;
  if ( Length > v4 )
    v5 = String2->Length;
  v8 = &Buffer[v5];
  if ( Buffer >= v8 )
    return Length - v4;
  if ( CaseInSensitive )
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( *Buffer != *v7 )
      {
        v11 = RtlUpperChar(*Buffer);
        v12 = RtlUpperChar(v9);
        if ( v11 != v12 )
          break;
      }
      ++Buffer;
      ++v7;
      if ( Buffer >= v8 )
        return Length - v4;
    }
    v13 = v11;
  }
  else
  {
    v14 = v7 - Buffer;
    while ( 1 )
    {
      LOBYTE(v13) = *Buffer;
      v12 = Buffer[v14];
      if ( *Buffer != v12 )
        break;
      if ( ++Buffer >= v8 )
        return Length - v4;
    }
    v13 = (unsigned __int8)v13;
  }
  return v13 - v12;
}
