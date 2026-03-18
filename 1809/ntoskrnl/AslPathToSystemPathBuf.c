/*
 * XREFs of AslPathToSystemPathBuf @ 0x1408EA39C
 * Callers:
 *     SdbpGetPathAppPatch @ 0x1408E8980 (SdbpGetPathAppPatch.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1408EC0F0 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1400F4F98 (RtlStringCchCatW.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 */

NTSTATUS __fastcall AslPathToSystemPathBuf(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  int v6; // ebx
  size_t v7; // rdx
  NTSTRSAFE_PWSTR i; // rcx
  wchar_t v9; // ax
  NTSTRSAFE_PWSTR v10; // rax
  NTSTATUS result; // eax

  memset(pszDest, 0, 2 * cchDest);
  v6 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v7 = cchDest;
    for ( i = pszDest; v7; --v7 )
    {
      if ( !(2147483646 - cchDest + v7) )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)i + (char *)L"\\SystemRoot" - (char *)pszDest);
      if ( !v9 )
        break;
      *i++ = v9;
    }
    v10 = i - 1;
    v6 = -2147483643;
    if ( v7 )
    {
      v10 = i;
      v6 = 0;
    }
    *v10 = 0;
  }
  if ( v6 >= 0 )
  {
    result = RtlStringCchCatW(pszDest, cchDest, pszSrc);
    if ( result < 0 )
    {
      AslLogCallPrintf(1LL);
      return -1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
    return v6;
  }
  return result;
}
