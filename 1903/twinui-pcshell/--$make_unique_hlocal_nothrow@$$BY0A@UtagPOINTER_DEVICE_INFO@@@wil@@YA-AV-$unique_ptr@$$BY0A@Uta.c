/*
 * XREFs of ??$make_unique_hlocal_nothrow@$$BY0A@UtagPOINTER_DEVICE_INFO@@@wil@@YA?AV?$unique_ptr@$$BY0A@UtagPOINTER_DEVICE_INFO@@U?$function_deleter@P6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@Z@wil@@@wistd@@_K@Z @ 0x1802EFCD8
 * Callers:
 *     ?GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z @ 0x1802F07B4 (-GetPrimaryTouchEnabledMonitorIfAny@VirtualTouchpadUriHandler@@CAJPEAPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

_QWORD *__fastcall wil::make_unique_hlocal_nothrow<tagPOINTER_DEVICE_INFO [0]>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rsi
  char *v6; // rax
  __int64 v7; // rcx
  char *v8; // rbx
  char *v9; // rsi
  void *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 0x3CAE759203CAE7LL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3746LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      a4);
    __debugbreak();
  }
  v5 = 1080 * a2;
  v6 = (char *)LocalAlloc(0, 1080 * a2);
  *a1 = v6;
  v8 = v6;
  if ( v6 )
  {
    v9 = &v6[v5];
    if ( v6 != v9 )
    {
      do
      {
        v10 = operator new(v7, v8);
        memset_0(v10, 0, 0x438uLL);
        v8 += 1080;
      }
      while ( v8 != v9 );
    }
  }
  return a1;
}
