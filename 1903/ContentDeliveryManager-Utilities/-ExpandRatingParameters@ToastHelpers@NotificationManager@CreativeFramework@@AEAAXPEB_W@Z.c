/*
 * XREFs of ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x18009BE00
 * Callers:
 *     ?EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009B27C (-EnforceSchemaAndValidate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012FD4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067CBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009BF8C (-EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ.c)
 *     ?ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x18009C4AC (-ResolveRatingImage@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x18009C680 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::ExpandRatingParameters(
        CreativeFramework::NotificationManager::ToastHelpers *this,
        const wchar_t *a2)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  _QWORD *v7; // rax
  void *v8; // rbx
  unsigned __int64 v9; // r8
  LPVOID v10; // [rsp+30h] [rbp-50h] BYREF
  LPVOID pv[4]; // [rsp+38h] [rbp-48h] BYREF
  void *v12[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  pv[3] = (LPVOID)-2LL;
  CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(this);
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const wchar_t *, LPVOID *))(**((_QWORD **)this + 7) + 48LL))(
         *((_QWORD *)this + 7),
         *((_QWORD *)this + 8),
         L"ms-resource://Microsoft.Windows.ContentDeliveryManager/Ratings/Rating_AccessibilityString",
         &v10);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18009BF85LL);
  }
  memset(pv, 0, 24);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         (const wchar_t *)v10,
         a2);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x197,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v13 = 7LL;
  v12[2] = 0LL;
  LOWORD(v12[0]) = 0;
  std::wstring::assign(v12, (char *)L"rating_accessible", aRatingAccessib[0] != 0 ? 0x11 : 0);
  v7 = (_QWORD *)std::map<std::wstring,std::wstring>::operator[]((char *)this + 32, v12);
  v8 = pv[0];
  if ( *(_WORD *)pv[0] )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_WORD *)pv[0] + v9) );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign(v7, (char *)pv[0], v9);
  if ( v13 >= 8 )
    operator delete(v12[0]);
  CoTaskMemFree(v8);
  if ( v10 )
    CoTaskMemFree(v10);
  CreativeFramework::NotificationManager::ToastHelpers::ResolveRatingImage(this, a2);
}
