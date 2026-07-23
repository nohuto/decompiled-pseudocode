/*
 * XREFs of AslpPathWildcardMakeLeaves @ 0x1408ECDF8
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpPathWildcardMakeLeaves(WCHAR *SourceString)
{
  WCHAR *v1; // rdi
  wchar_t *Buffer; // rbp
  unsigned __int16 v3; // si
  int v4; // ebx
  WCHAR v5; // cx
  int v6; // ebx
  WCHAR *v7; // rax
  __int16 v8; // ax
  WCHAR v9; // ax
  _WORD *v10; // rdx
  int v11; // ebx
  UNICODE_STRING v13; // [rsp+30h] [rbp-28h] BYREF

  v1 = SourceString;
  if ( !SourceString || !*SourceString )
    return 0LL;
  RtlInitUnicodeString(&v13, SourceString);
  if ( v13.Length < 2u || (Buffer = v13.Buffer, !*v13.Buffer) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v3 = v13.Length >> 1;
  if ( (unsigned __int16)(v13.Length >> 1) < 8u || wcsnicmp(v13.Buffer, L"\\??\\UNC\\", 8uLL) )
  {
    if ( v3 >= 4u )
    {
      if ( !wcsncmp(Buffer, L"\\??\\", 4uLL) )
      {
        v4 = 2;
        goto LABEL_17;
      }
      if ( !wcsncmp(Buffer, L"\\\\?\\", 4uLL) || !wcsncmp(Buffer, L"\\\\.\\", 4uLL) )
      {
        v4 = 3;
        goto LABEL_17;
      }
    }
    if ( v3 <= 2u || (v4 = 3, wcsncmp(Buffer, L"\\\\", 2uLL)) )
      v4 = 0;
  }
  else
  {
    v4 = 4;
  }
LABEL_17:
  v5 = *v1;
  v6 = -v4;
  v7 = v1;
  while ( v5 )
  {
    if ( v5 == 92 )
    {
      if ( v6 >= 0 )
        *v7 = 0;
      ++v6;
    }
    v5 = *++v7;
  }
  v7[1] = 0;
  v8 = *v1;
  if ( *v1 )
  {
LABEL_25:
    if ( v8 )
    {
      do
        ++v1;
      while ( *v1 );
    }
    v9 = v1[1];
    if ( v9 )
    {
      v10 = v1 + 1;
      while ( v9 != 42 && v9 != 63 )
      {
        v9 = *++v10;
        if ( !*v10 )
        {
          --v6;
          *v1 = 92;
          v8 = 92;
          if ( v1[1] )
            goto LABEL_25;
          break;
        }
      }
    }
  }
  v11 = v6 + 1;
  if ( v11 >= 0 )
    return (unsigned int)v11;
  return 0LL;
}
