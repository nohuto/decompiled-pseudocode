/*
 * XREFs of ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180040B1C
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003DFF0 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E9A4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall KnownGameList::StrStrInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        _WORD *a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rbp
  _WORD *v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  struct localeinfo_struct *locale; // r13
  unsigned int v10; // r15d
  bool v11; // cl
  wint_t v12; // bx
  wint_t v13; // ax

  v4 = -1LL;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  do
    ++v4;
  while ( a3[v4] );
  LODWORD(v8) = 0;
  locale = _create_locale(0, "C");
  if ( *a3 )
  {
    while ( (int)v4 - (int)v8 >= v7 )
    {
      v10 = 0;
      v11 = 1;
      do
      {
        if ( v10 >= v7 )
          break;
        v12 = _towlower_l(a3[v10 + (unsigned int)v8], locale);
        v13 = _towlower_l(*((_WORD *)this + v10), locale);
        v11 = v12 == v13;
        ++v10;
      }
      while ( v12 == v13 );
      v6 = 0LL;
      if ( v11 )
      {
        v6 = &a3[(unsigned int)v8];
        break;
      }
      v8 = (unsigned int)(v8 + 1);
      if ( !a3[v8] )
        break;
    }
  }
  _free_locale(locale);
  return v6;
}
