/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x180096D80
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800947D8 (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x180094D90 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rsi
  rsize_t v11; // rbx
  _QWORD *result; // rax

  v3 = a3;
  v6 = a3;
  if ( a2 )
  {
    v7 = 0x7FFFFFFFLL;
    v8 = a2;
    if ( a3 < 0x7FFFFFFF )
      v7 = a3;
    for ( ; v7; --v7 )
    {
      if ( !*(_WORD *)v8 )
        break;
      v8 += 2;
    }
    v6 = (v8 - a2) >> 1;
  }
  if ( a3 == -1LL )
    v3 = v6;
  v9 = CoTaskMemAlloc(2 * v3 + 2);
  v10 = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = v6;
      memcpy_s(v9, 2 * v3 + 2, a2, v11 * 2);
      v10[v11] = 0;
    }
    else
    {
      *v9 = 0;
    }
    v10[v3] = 0;
  }
  result = a1;
  *a1 = v10;
  return result;
}
