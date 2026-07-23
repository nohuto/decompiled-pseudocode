/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x14067D140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067D2E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  POEM_STRING v4; // rbx
  char v5; // si
  BOOLEAN v6; // bp
  unsigned __int16 Length; // cx
  unsigned int v9; // edx
  char *v10; // r10
  unsigned __int8 v11; // r8
  int v12; // eax
  char *Buffer; // rdx
  int v14; // [rsp+20h] [rbp-58h] BYREF
  char *v15; // [rsp+28h] [rbp-50h]
  char v16; // [rsp+30h] [rbp-48h] BYREF

  v4 = OemName;
  v5 = 0;
  v6 = 0;
  if ( Name->Length > 0x18u )
    return 0;
  if ( !OemName )
  {
    v14 = 786432;
    v15 = &v16;
    v4 = (POEM_STRING)&v14;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(v4, Name, 0) < 0 )
    return 0;
  Length = v4->Length;
  if ( v4->Length == 1 && *v4->Buffer == 46 || Length == 2 && (Buffer = v4->Buffer, *Buffer == 46) && Buffer[1] == 46 )
  {
    if ( NameContainsSpaces )
      *NameContainsSpaces = 0;
    return 1;
  }
  v9 = 0;
  if ( Length )
  {
    v10 = v4->Buffer;
    do
    {
      v11 = v10[v9];
      if ( (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v11] )
      {
        if ( !v5 && v9 >= 7 || v9 == Length - 1 )
          return 0;
        ++v9;
      }
      else
      {
        if ( v11 < 0x80u )
        {
          v12 = RtlFatIllegalTable[(unsigned __int64)v11 >> 5];
          if ( _bittest(&v12, v11 & 0x1F) )
            return 0;
        }
        if ( v11 == 32 )
          v6 = 1;
        if ( v11 == 46 )
        {
          if ( v5 || !v9 || v10[v9 - 1] == 32 || Length - v9 - 1 > 3 )
            return 0;
          v5 = 1;
        }
        if ( v9 >= 8 && !v5 )
          return 0;
      }
      ++v9;
    }
    while ( v9 < Length );
    if ( v11 == 32 || v11 == 46 )
      return 0;
  }
  if ( NameContainsSpaces )
    *NameContainsSpaces = v6;
  return 1;
}
