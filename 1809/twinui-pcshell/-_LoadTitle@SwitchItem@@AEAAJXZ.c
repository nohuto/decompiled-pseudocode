/*
 * XREFs of ?_LoadTitle@SwitchItem@@AEAAJXZ @ 0x1802FFCC8
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x1802FF958 (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@QEAAAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@$$QEAV123@@Z @ 0x1802F3AB4 (--4-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows.c)
 *     ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x1802FFD80 (-_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z.c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD030 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

__int64 __fastcall SwitchItem::_LoadTitle(SwitchItem *this)
{
  ApplicationViewHelpers *v2; // rcx
  unsigned __int16 **v3; // r8
  int ViewTitle; // eax
  unsigned int v5; // ebx
  unsigned __int16 *v7; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+28h] [rbp-18h]
  __int64 v9; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  v8 = -1LL;
  v9 = -1LL;
  if ( (int)SwitchItem::_LoadTitleFromWinRTFrame(this, &v7) >= 0
    || (Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7),
        v2 = (ApplicationViewHelpers *)*((_QWORD *)this + 12),
        v8 = -1LL,
        v9 = -1LL,
        ViewTitle = ApplicationViewHelpers::GetViewTitle(v2, (struct IApplicationView *)&v7, v3),
        v5 = ViewTitle,
        ViewTitle >= 0) )
  {
    ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::operator=(
      (_QWORD *)this + 2,
      (__int64 *)&v7);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
      (const char *)(unsigned int)ViewTitle);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v7);
  return v5;
}
