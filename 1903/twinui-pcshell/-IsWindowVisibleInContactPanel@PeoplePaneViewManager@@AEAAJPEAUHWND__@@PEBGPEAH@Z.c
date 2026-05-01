/*
 * XREFs of ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180221668
 * Callers:
 *     ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x180221480 (-IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18003A0B4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003AD54 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x180069780 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015C5C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180192960 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180208CF0 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x18020C7F8 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18020D218 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180218418 (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PeoplePaneViewManager::IsWindowVisibleInContactPanel(
        PeoplePaneViewManager *this,
        HWND a2,
        const unsigned __int16 *a3,
        int *a4)
{
  int v7; // ebx
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // ebx
  const char *v15; // r9
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rbx
  int v19; // ebx
  int v20; // ebx
  HSTRING v21; // rcx
  __int64 v22; // rax
  const WCHAR *p_lpStringValue; // rbx
  const WCHAR *StringRawBuffer; // rax
  bool v25; // bl
  __int64 v26; // [rsp+30h] [rbp-198h] BYREF
  int v27; // [rsp+38h] [rbp-190h] BYREF
  __int64 v28; // [rsp+40h] [rbp-188h] BYREF
  __int64 v29; // [rsp+48h] [rbp-180h] BYREF
  __int64 v30; // [rsp+50h] [rbp-178h] BYREF
  HSTRING string; // [rsp+58h] [rbp-170h] BYREF
  struct IInspectable *v32; // [rsp+60h] [rbp-168h] BYREF
  void *v33; // [rsp+68h] [rbp-160h] BYREF
  int v34; // [rsp+70h] [rbp-158h]
  __int64 v35; // [rsp+78h] [rbp-150h]
  _BYTE v36[16]; // [rsp+80h] [rbp-148h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v38[128]; // [rsp+98h] [rbp-130h] BYREF
  _BYTE v39[104]; // [rsp+118h] [rbp-B0h] BYREF
  HSTRING_HEADER lpStringValue; // [rsp+180h] [rbp-48h] BYREF
  unsigned __int64 v41; // [rsp+198h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v35 = -2LL;
  *a4 = 0;
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  v7 = CoreQueryWindowService(
         a2,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v26);
  if ( v7 < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    return (unsigned int)v7;
  }
  v28 = 0LL;
  v41 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &lpStringValue,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v9 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v41,
         &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x419,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    return v10;
  }
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v11 = RoCreatePropertySetSerializer(&v29);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41D,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    return v12;
  }
  try
  {
    v13 = (*(__int64 (**)(void))(*(_QWORD *)v29 + 56LL))();
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41E,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      return v14;
    }
    v30 = 0LL;
    v16 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            &v28,
            &v30);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x421,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      return v17;
    }
    v33 = 0LL;
    v34 = 0;
    v18 = v30;
    string = (HSTRING)&v33;
    v32 = 0LL;
    v41 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &lpStringValue,
      L"RunningComponentUIApplicationList",
      0x22u,
      0x21u);
    v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct IInspectable **))(*(_QWORD *)v18 + 48LL))(
            v18,
            v41,
            &v32);
    v41 = 0LL;
    RoVariant::Attach((RoVariant *)string, v32);
    if ( v19 < 0 )
      goto LABEL_12;
    v19 = v34;
    if ( v34 < 0 )
      goto LABEL_12;
    if ( v34 )
    {
      if ( v34 == 1 || v34 == 3 )
      {
        v27 = 13;
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)v33 + 48LL))(v33, &v27);
        if ( v19 < 0 )
          goto LABEL_22;
      }
    }
    else
    {
      v27 = 0;
    }
    v19 = 0;
LABEL_22:
    if ( v19 >= 0 )
    {
      if ( v27 == 12 )
      {
        string = 0LL;
        WindowsDeleteString(0LL);
        string = 0LL;
        lpStringValue.Reserved.Reserved1 = v33;
        *(_DWORD *)&lpStringValue.Reserved.Reserved2[8] = v34;
        v20 = RoVariant::Accessor::GetString((RoVariant::Accessor *)&lpStringValue, &string);
        if ( v20 < 0 )
        {
          WindowsDeleteString(string);
          string = 0LL;
          RoVariant::~RoVariant((RoVariant *)&v33);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          return (unsigned int)v20;
        }
        v21 = string;
        if ( string )
        {
          std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v36);
          v22 = std::operator<<<unsigned short,std::char_traits<unsigned short>>((__int64)v37, (__int64)a3);
          std::operator<<<unsigned short,std::char_traits<unsigned short>>(v22, (__int64)L";");
          std::basic_stringbuf<unsigned short>::str((__int64)v38, (__int64)&lpStringValue);
          p_lpStringValue = (const WCHAR *)&lpStringValue;
          if ( v41 >= 8 )
            p_lpStringValue = (const WCHAR *)lpStringValue.Reserved.Reserved1;
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v25 = FindStringOrdinal(0x400000u, StringRawBuffer, -1, p_lpStringValue, -1, 1) != -1;
          std::wstring::_Tidy_deallocate(&lpStringValue);
          if ( v25 )
            *a4 = 1;
          std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>((__int64)v39);
          std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v39);
          v21 = string;
        }
        WindowsDeleteString(v21);
      }
      RoVariant::~RoVariant((RoVariant *)&v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      return 0LL;
    }
LABEL_12:
    RoVariant::~RoVariant((RoVariant *)&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    result = (unsigned int)v19;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x43A,
                           (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
                           v15);
  }
  return result;
}
