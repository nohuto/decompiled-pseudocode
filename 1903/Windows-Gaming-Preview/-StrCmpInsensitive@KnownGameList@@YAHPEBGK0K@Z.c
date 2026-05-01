/*
 * XREFs of ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180040E44
 * Callers:
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E3C0 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003ED74 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?ValidateKGL@CQueryKnownGameList@@AEAAJK@Z @ 0x18003F360 (-ValidateKGL@CQueryKnownGameList@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KnownGameList::StrCmpInsensitive(
        KnownGameList *this,
        const unsigned __int16 *a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned int v8; // r14d
  struct localeinfo_struct *locale; // r15
  int v11; // ebx
  wint_t v12; // ax

  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = 0LL;
  v8 = (unsigned int)a4;
  locale = _create_locale(0, "C");
  do
  {
    if ( (unsigned int)v7 >= v4 )
      break;
    if ( (unsigned int)v7 >= v8 )
      break;
    v11 = _towlower_l(*((_WORD *)this + v7), locale);
    v12 = _towlower_l(*(_WORD *)(a3 + 2 * v7), locale);
    v7 = (unsigned int)(v7 + 1);
    v6 = v11 - v12;
  }
  while ( !v6 );
  if ( !v6 )
  {
    if ( (_DWORD)v7 == v4 )
    {
      if ( (_DWORD)v7 != v8 )
        v6 = -1;
    }
    else
    {
      v6 = 1;
    }
  }
  _free_locale(locale);
  return v6;
}
