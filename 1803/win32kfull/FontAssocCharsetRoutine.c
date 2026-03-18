/*
 * XREFs of FontAssocCharsetRoutine @ 0x1C0267C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FontAssocCharsetRoutine(wchar_t *Str1, __int64 a2, const wchar_t *a3)
{
  char v5; // bl
  int v6; // ecx

  if ( _wcsicmp(a3, L"YES") )
  {
    v5 = 0;
    if ( _wcsicmp(a3, L"CODEPAGECOMPAT") )
      return 0LL;
  }
  else
  {
    v5 = 1;
  }
  if ( _wcsicmp(Str1, L"ANSI(00)") )
  {
    if ( _wcsicmp(Str1, L"SYMBOL(02)") )
      v6 = _wcsicmp(Str1, L"OEM(FF)") == 0;
    else
      v6 = 4;
  }
  else
  {
    v6 = 2;
  }
  if ( v5 )
    fFontAssocStatus |= v6;
  else
    gForceFontAssocCodePage &= ~v6;
  return 0LL;
}
