/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x1406C75C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C7770 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  bool v3; // cc
  POEM_STRING v5; // rbx
  char v6; // si
  BOOLEAN v7; // bp
  unsigned __int16 Length; // cx
  unsigned int v10; // edx
  char *v11; // r10
  unsigned __int8 v12; // r8
  int v13; // eax
  char *Buffer; // rdx
  __int64 v15; // [rsp+20h] [rbp-58h] BYREF
  char *v16; // [rsp+28h] [rbp-50h]
  char v17; // [rsp+30h] [rbp-48h] BYREF

  v3 = Name->Length <= 0x18u;
  v5 = OemName;
  v15 = 0LL;
  v6 = 0;
  v16 = 0LL;
  v7 = 0;
  if ( !v3 )
    return 0;
  if ( !OemName )
  {
    LODWORD(v15) = 786432;
    v16 = &v17;
    v5 = (POEM_STRING)&v15;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(v5, Name, 0) < 0 )
    return 0;
  Length = v5->Length;
  if ( v5->Length == 1 && *v5->Buffer == 46 || Length == 2 && (Buffer = v5->Buffer, *Buffer == 46) && Buffer[1] == 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v10 = 0;
  if ( Length )
  {
    v11 = v5->Buffer;
    do
    {
      v12 = v11[v10];
      if ( (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v12] )
      {
        if ( !v6 && v10 >= 7 || v10 == Length - 1 )
          return 0;
        ++v10;
      }
      else
      {
        if ( v12 < 0x80u )
        {
          v13 = RtlFatIllegalTable[(unsigned __int64)v12 >> 5];
          if ( _bittest(&v13, v12 & 0x1F) )
            return 0;
        }
        if ( v12 == 32 )
          v7 = 1;
        if ( v12 == 46 )
        {
          if ( v6 || !v10 || v11[v10 - 1] == 32 || Length - v10 - 1 > 3 )
            return 0;
          v6 = 1;
        }
        if ( v10 >= 8 && !v6 )
          return 0;
      }
      ++v10;
    }
    while ( v10 < Length );
    if ( v12 == 32 || v12 == 46 )
      return 0;
  }
  if ( NameContainsSpaces )
    *NameContainsSpaces = v7;
  return 1;
}
