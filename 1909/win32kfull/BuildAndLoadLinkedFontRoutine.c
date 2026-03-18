/*
 * XREFs of BuildAndLoadLinkedFontRoutine @ 0x1C008EC60
 * Callers:
 *     <none>
 * Callees:
 *     bAddFlEntry @ 0x1C008ED30 (bAddFlEntry.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall BuildAndLoadLinkedFontRoutine(
        wchar_t *Str1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  void *v9; // rdi

  v6 = a4;
  if ( a4 > 0x7FFFFFFE )
    return 3221225495LL;
  v9 = (void *)PALLOCMEM2(2 * a4 + 2);
  if ( !v9 )
    return 3221225495LL;
  if ( _wcsicmp(Str1, L"SystemDefaultEUDCFont") )
  {
    memmove(v9, a3, (unsigned int)v6);
    *((_WORD *)v9 + (v6 >> 1)) = 0;
    bAddFlEntry(Str1, v9, a6, 0xFFFFFFFFLL, 0LL);
  }
  Win32FreePool(v9);
  return 0LL;
}
