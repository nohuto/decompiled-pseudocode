/*
 * XREFs of RtlStringCchCopyNW @ 0x1C0086424
 * Callers:
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C00861A4 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C00862C0 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00F0D20 (NtUserLoadKeyboardLayoutEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_16:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_16;
  }
  if ( cchDest )
  {
    v5 = cchToCopy - cchDest;
    v6 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v5 + cchDest) )
        break;
      v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --cchDest;
    }
    while ( cchDest );
  }
  v8 = pszDest - 1;
  if ( cchDest )
    v8 = pszDest;
  v4 = cchDest == 0 ? 0x80000005 : 0;
  *v8 = 0;
  return v4;
}
