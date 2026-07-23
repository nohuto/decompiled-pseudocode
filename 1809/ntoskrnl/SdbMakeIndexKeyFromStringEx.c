/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x14067E600
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14067DDCC (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(const WCHAR *a1, char a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rbx
  int v4; // edx
  unsigned __int16 *v5; // rsi
  const WCHAR *v6; // rdx
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int16 v10; // ax
  __int16 v11; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-30h] BYREF
  char v15; // [rsp+60h] [rbp-20h] BYREF

  v2 = -1LL;
  v3 = (char *)&SourceString.MaximumLength + 5;
  do
    ++v2;
  while ( a1[v2] );
  v4 = a2 & 2;
  v5 = (unsigned __int16 *)v14;
  if ( v2 > 8 && v4 )
    v6 = &a1[v2 - 8];
  else
    v6 = a1;
  RtlInitUnicodeString(&DestinationString, v6);
  SourceString.Buffer = (wchar_t *)&v15;
  SourceString.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceString, &DestinationString);
  DestinationString.MaximumLength = 16;
  DestinationString.Buffer = (wchar_t *)v14;
  if ( RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbMakeIndexKeyFromStringEx",
      1209,
      (unsigned int)"Failed to upcase unicode string \"%ws\"");
    return 0LL;
  }
  else
  {
    result = 0LL;
    v8 = (unsigned __int64)DestinationString.Length >> 1;
    if ( v8 <= 8 )
    {
      *(_QWORD *)&SourceString.Length = 0LL;
      v9 = 0LL;
      if ( v8 )
      {
        do
        {
          v10 = *v5++;
          *v3-- = v10;
          v11 = HIBYTE(v10);
          if ( (_BYTE)v11 )
          {
            if ( v9 < 7 )
            {
              *v3-- = v11;
              ++v9;
            }
          }
          ++v9;
        }
        while ( v9 < v8 );
        return *(_QWORD *)&SourceString.Length;
      }
    }
  }
  return result;
}
