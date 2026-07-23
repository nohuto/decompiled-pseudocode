/*
 * XREFs of AslPathToNetworkPathNt @ 0x14072367C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140722D14 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x14019BD60 (wcscat_s.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, _WORD *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int16 v7; // ax
  const wchar_t *v8; // r14
  __int16 v9; // ax
  __int16 v10; // ax
  rsize_t v11; // rdi
  wchar_t *v12; // rax
  wchar_t *v13; // rsi

  v2 = 0;
  v4 = -1LL;
  *a1 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( v5 > 4
    && (*a2 == 92 || *a2 == 47)
    && ((v7 = a2[1], v7 == 92) || v7 == 47)
    && ((v8 = a2 + 2, v9 = a2[2], v9 != 46) && v9 != 63 || (v10 = a2[3], v10 != 92) && v10 != 47 && v10) )
  {
    do
      ++v4;
    while ( a2[v4] );
    v11 = v4 + 9;
    v12 = (wchar_t *)AslAlloc((__int64)a1, 2 * v11);
    v13 = v12;
    if ( v12 )
    {
      wcscpy_s(v12, v11, L"\\??\\UNC\\");
      wcscat_s(v13, v11, v8);
      *a1 = v13;
    }
    else
    {
      v2 = -1073741801;
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
