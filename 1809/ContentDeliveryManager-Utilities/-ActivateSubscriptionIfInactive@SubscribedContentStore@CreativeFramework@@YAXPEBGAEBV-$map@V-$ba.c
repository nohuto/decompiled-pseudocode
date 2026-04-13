/*
 * XREFs of ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003DD68
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x18003EA00 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180003750 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ @ 0x180004BA8 (-Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ.c)
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x18000A574 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180012CA4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180014BC4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x18001533C (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x18002621C (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ??$?0$0DJ@@StringReference@Internal@Windows@@QEAA@AEAY0DJ@$$CBG@Z @ 0x180034FB8 (--$-0$0DJ@@StringReference@Internal@Windows@@QEAA@AEAY0DJ@$$CBG@Z.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x18003D1B0 (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 *     ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18003D32C (-GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA-AW4SubscriptionState@12@PEBG_.c)
 *     ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x18003D49C (-AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV-$map@V-$basic_s.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x18003D718 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180041034 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x180041198 (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x180041280 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180041C80 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180042408 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??$?0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z @ 0x180042644 (--$-0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z.c)
 *     ??$?0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z @ 0x180042690 (--$-0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800AAE6C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive(
        CreativeFramework::SubscribedContentStore *this,
        __int64 **a2,
        _DWORD *a3)
{
  BOOL SubscriptionState; // eax
  __int64 v7; // r8
  bool v8; // r14
  int ActivationFactory; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  const unsigned __int16 *v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rbx
  const WCHAR *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // eax
  const WCHAR *v20; // r14
  __int64 v21; // rsi
  _QWORD *v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  HSTRING v30; // rax
  __int64 **v31; // rax
  __int64 *j; // rcx
  __int64 i; // rax
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  WCHAR *v36; // rbx
  const unsigned __int16 *v37; // r8
  LPCVOID *lpData; // rcx
  unsigned int v39; // eax
  const unsigned __int16 *v40; // rdx
  int v41; // eax
  wil::details::in1diag3 *v42; // rcx
  int v43; // eax
  wil::details::in1diag3 *v44; // rcx
  int v45; // eax
  wil::details::in1diag3 *v46; // rcx
  WCHAR *v47; // rdi
  struct _FILETIME v48; // r9
  int v49; // eax
  __int64 v50; // rcx
  __int64 (__fastcall ***v51)(_QWORD, GUID *, _QWORD *); // rcx
  Windows::Internal::StringReference *v52; // rax
  HSTRING v53; // rax
  unsigned int v54; // eax
  Windows::Internal::StringReference *v55; // rax
  HSTRING v56; // rax
  unsigned int v57; // eax
  HSTRING *v58; // rax
  HSTRING v59; // rax
  unsigned int v60; // eax
  Windows::Internal::StringReference *v61; // rax
  HSTRING v62; // rax
  unsigned int v63; // eax
  char v64; // [rsp+48h] [rbp-C0h]
  bool v65; // [rsp+49h] [rbp-BFh]
  __int64 (__fastcall ***v66)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v68; // [rsp+60h] [rbp-A8h] BYREF
  const WCHAR *v69; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v70; // [rsp+70h] [rbp-98h]
  __int64 **v71[2]; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v72[2]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v73[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v74[136]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v75[13]; // [rsp+130h] [rbp+28h] BYREF
  HSTRING string; // [rsp+198h] [rbp+90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp+98h] BYREF
  LPCVOID v78[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v79; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v80; // [rsp+1D0h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v72[1] = (HSTRING)-2LL;
  *a3 = 0;
  if ( (unsigned __int64)a2[1] > 5 )
    goto LABEL_68;
  CreativeFramework::SubscribedContentStore::GetSubscriptionContext(v71, (__int64)this);
  SubscriptionState = CreativeFramework::SubscribedContentStore::GetSubscriptionState((__int64)this);
  v8 = SubscriptionState;
  v65 = SubscriptionState;
  if ( !SubscriptionState
    || (v64 = 1, CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(v71, a2, v7)) )
  {
    v64 = 0;
  }
  v66 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v66);
  v10 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_69;
  v67 = 0LL;
  v11 = (**v66)(v66, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v67);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_70:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x374,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v11);
    goto LABEL_71;
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v73);
  v70 = 0LL;
  v14 = *a2;
  v15 = **a2;
  if ( (__int64 *)v15 == *a2 )
    goto LABEL_38;
  do
  {
    if ( !*(_QWORD *)(v15 + 48) )
    {
      v61 = (Windows::Internal::StringReference *)Windows::Internal::StringReference::StringReference(
                                                    &string,
                                                    L"Cloud Query parameter names cannot be empty.");
      v62 = Windows::Internal::StringReference::Get(v61);
      RoOriginateError(2147942487LL, v62);
      v63 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37B,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)v63);
LABEL_77:
      wil::details::in1diag3::Throw_Hr(
        v44,
        (void *)0x3A3,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v43);
      goto LABEL_78;
    }
    if ( *(_QWORD *)(v15 + 48) > 0xDuLL )
    {
      v58 = Windows::Internal::StringReference::StringReference(
              &string,
              L"Cloud Query parameter names cannot exceed 13 characters.");
      v59 = Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)v58);
      RoOriginateError(2147942487LL, v59);
      v60 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37C,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)v60);
      __debugbreak();
    }
    if ( *(_QWORD *)(v15 + 80) > 0x80uLL )
      goto LABEL_74;
    std::operator<<<unsigned short,std::char_traits<unsigned short>>(v74, L"sc-");
    v68 = 0LL;
    v72[0] = 0LL;
    if ( *(_QWORD *)(v15 + 56) < 8uLL )
      v16 = (const WCHAR *)(v15 + 32);
    else
      v16 = *(const WCHAR **)(v15 + 32);
    v69 = v16;
    v17 = v67;
    v18 = *(_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, &v69);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING *))(*(_QWORD *)v17 + 56LL))(v17, v18, &v68);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x384,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v19);
LABEL_74:
      v55 = (Windows::Internal::StringReference *)Windows::Internal::StringReference::StringReference(
                                                    &string,
                                                    (const unsigned __int16 (*)[59])v13);
      v56 = Windows::Internal::StringReference::Get(v55);
      RoOriginateError(2147942487LL, v56);
      v57 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37D,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)v57);
      __debugbreak();
    }
    v20 = (const WCHAR *)(v15 + 64);
    if ( *(_QWORD *)(v15 + 88) >= 8uLL )
      v20 = *(const WCHAR **)v20;
    v69 = v20;
    v21 = v67;
    v22 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, &v69);
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v21 + 56LL))(v21, *v22, v72);
    v24 = retaddr;
    if ( v23 < 0 )
      goto LABEL_72;
    StringRawBuffer = WindowsGetStringRawBuffer(v72[0], 0LL);
    v26 = WindowsGetStringRawBuffer(v68, 0LL);
    v27 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v74, v26);
    v28 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v27, L"=");
    std::operator<<<unsigned short,std::char_traits<unsigned short>>(v28, StringRawBuffer);
    v29 = (unsigned __int64)a2[1] - 1;
    v30 = v70;
    v70 = (HSTRING)((char *)v70 + 1);
    if ( (unsigned __int64)v30 < v29 )
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v74, L"&");
    if ( v72[0] )
      WindowsDeleteString(v72[0]);
    if ( v68 )
      WindowsDeleteString(v68);
    if ( !*(_BYTE *)(v15 + 25) )
    {
      v31 = *(__int64 ***)(v15 + 16);
      if ( *((_BYTE *)v31 + 25) )
      {
        for ( i = *(_QWORD *)(v15 + 8); !*(_BYTE *)(i + 25) && v15 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
          v15 = i;
        v15 = i;
      }
      else
      {
        v15 = *(_QWORD *)(v15 + 16);
        for ( j = *v31; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v15 = (__int64)j;
      }
    }
  }
  while ( (__int64 *)v15 != v14 );
  v8 = v65;
LABEL_38:
  v69 = 0LL;
  string = 0LL;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
  v34 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&string,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          this);
  v35 = retaddr;
  if ( v34 < 0 )
  {
LABEL_71:
    wil::details::in1diag3::Throw_Hr(
      v35,
      (void *)0x30,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstoreshared.h",
      (const char *)(unsigned int)v34);
LABEL_72:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x385,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  v36 = (WCHAR *)string;
  v69 = (const WCHAR *)string;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(v73, v78);
  if ( !a2[1] )
  {
    v43 = CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(v36, L"SubscriptionContext", v37);
    v44 = retaddr;
    if ( v43 >= 0 )
      goto LABEL_48;
    goto LABEL_77;
  }
  lpData = v78;
  if ( v80 >= 8 )
    lpData = (LPCVOID *)v78[0];
  v39 = RegSetKeyValueW(HKEY_CURRENT_USER, v36, L"SubscriptionContext", 1u, lpData, 2 * v79 + 2);
  if ( v39 )
    v41 = wil::details::in1diag3::Return_Win32Msg(
            retaddr,
            (void *)0xCA,
            (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
            (const char *)v39,
            (__int64)"RegKey: %ws %ws",
            (const char *)v36,
            L"SubscriptionContext");
  else
    v41 = 0;
  v42 = retaddr;
  if ( v41 < 0 )
    goto LABEL_67;
LABEL_48:
  if ( !v64 )
    goto LABEL_53;
  v70 = 0LL;
  string = 0LL;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
  v45 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&string,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          this);
  v46 = retaddr;
  if ( v45 < 0 )
  {
LABEL_78:
    wil::details::in1diag3::Throw_Hr(
      v46,
      (void *)0x30,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstoreshared.h",
      (const char *)(unsigned int)v45);
    JUMPOUT(0x18003E55FLL);
  }
  v47 = (WCHAR *)string;
  v70 = string;
  GetSystemTimeAsFileTime((LPFILETIME)&v68);
  v49 = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
          v47,
          L"AccelerateCacheRefreshLastDetected",
          (unsigned __int64)v68,
          v48);
  if ( v49 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v49);
LABEL_67:
    wil::details::in1diag3::Throw_Hr(
      v42,
      (void *)0x39D,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v41);
LABEL_68:
    v52 = (Windows::Internal::StringReference *)Windows::Internal::StringReference::StringReference(
                                                  &string,
                                                  L"Cloud Query parameter count cannot exceed 5.");
    v53 = Windows::Internal::StringReference::Get(v52);
    RoOriginateError(2147942487LL, v53);
    v54 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x36A,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)v54);
LABEL_69:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x372,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_70;
  }
  if ( v47 )
    CoTaskMemFree(v47);
LABEL_53:
  CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed(this, v40);
  if ( !v8 )
    *a3 |= 1u;
  if ( v64 )
    *a3 |= 2u;
  if ( v80 >= 8 )
    operator delete((void *)v78[0]);
  v80 = 7LL;
  v79 = 0LL;
  LOWORD(v78[0]) = 0;
  if ( v36 )
    CoTaskMemFree(v36);
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>(v75);
  v75[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v75);
  v50 = v67;
  if ( v67 )
  {
    v67 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  v51 = v66;
  if ( v66 )
  {
    v66 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v51)[2])(v51);
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    v71,
    v71[0][1]);
  *((__int64 ***)v71[0] + 1) = v71[0];
  *v71[0] = (__int64 *)v71[0];
  *((__int64 ***)v71[0] + 2) = v71[0];
  v71[1] = 0LL;
  operator delete(v71[0]);
}
