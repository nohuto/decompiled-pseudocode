/*
 * XREFs of ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1800BE190
 * Callers:
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1800BD774 (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1800BE244 (StringVPrintfWorkerW.c)
 */

__int64 __fastcall StringCchVPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t a2,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        const unsigned __int16 *pszFormat,
        va_list argList)
{
  HRESULT v8; // r8d
  size_t pcchNewDestLength; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)a4;
  v8 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v8 = -2147024809;
  if ( v8 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v8;
    goto LABEL_11;
  }
  v8 = 0;
  if ( a2 )
  {
    pcchNewDestLength = 0LL;
    v8 = StringVPrintfWorkerW(pszDest, a2, &pcchNewDestLength, pszFormat, argList);
    if ( v8 >= 0 || (a2 & 0x7FFFFFFFFFFFFFFFLL) == 0 )
      return (unsigned int)v8;
LABEL_11:
    *pszDest = 0;
    return (unsigned int)v8;
  }
  if ( *pszFormat )
    return (unsigned int)(pszDest != 0LL ? -2147024774 : -2147024809);
  return (unsigned int)v8;
}
