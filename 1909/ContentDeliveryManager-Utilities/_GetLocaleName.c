/*
 * XREFs of _GetLocaleName @ 0x1800B7698
 * Callers:
 *     _Getctype @ 0x1800AF598 (_Getctype.c)
 *     _Getcvt @ 0x1800AF7BC (_Getcvt.c)
 *     _Getcoll @ 0x1800CA074 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(int a1)
{
  __int64 v1; // rsi
  wchar_t *wlocale; // rbx
  _locale_t current_locale; // rax
  struct localeinfo_struct *v4; // rdi

  v1 = a1;
  wlocale = 0LL;
  current_locale = _get_current_locale();
  v4 = current_locale;
  if ( current_locale )
  {
    wlocale = current_locale->locinfo->lc_category[v1].wlocale;
    if ( wlocale )
      wlocale = _wcsdup(current_locale->locinfo->lc_category[v1].wlocale);
    _free_locale(v4);
  }
  return wlocale;
}
