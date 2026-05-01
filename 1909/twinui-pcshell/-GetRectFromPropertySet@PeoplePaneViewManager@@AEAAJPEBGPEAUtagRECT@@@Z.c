/*
 * XREFs of ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180240210
 * Callers:
 *     ?GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z @ 0x180240180 (-GetRectForFlyoutButton@PeoplePaneViewManager@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x1802401D0 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023D64 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006DCF0 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017B870 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z @ 0x180240118 (-GetRect@Accessor@RoVariant@@QEBAJPEAURect@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PeoplePaneViewManager::GetRectFromPropertySet(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  PVOID Reserved1; // rdx
  __int64 v12; // rbx
  PVOID v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  BOOL WindowRect; // eax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v21; // [rsp+20h] [rbp-79h] BYREF
  __int64 v22; // [rsp+28h] [rbp-71h] BYREF
  __int64 v23; // [rsp+30h] [rbp-69h] BYREF
  __int64 v24; // [rsp+38h] [rbp-61h] BYREF
  void *v25; // [rsp+40h] [rbp-59h] BYREF
  int v26; // [rsp+48h] [rbp-51h]
  const WCHAR *v27[2]; // [rsp+50h] [rbp-49h] BYREF
  float v28; // [rsp+60h] [rbp-39h] BYREF
  float v29; // [rsp+64h] [rbp-35h]
  float v30; // [rsp+68h] [rbp-31h]
  float v31; // [rsp+6Ch] [rbp-2Dh]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  __int64 v33; // [rsp+88h] [rbp-11h]
  struct tagRECT Rect; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v35; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v27[1] = (const WCHAR *)-2LL;
  v27[0] = a2;
  SetRectEmpty(a3);
  if ( *((_QWORD *)this + 73) )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v5 = CoreQueryWindowService(
           *((_QWORD *)this + 73),
           &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
           &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
           &v24);
    if ( v5 < 0 )
    {
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      return (unsigned int)v5;
    }
    v23 = 0LL;
    v33 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v33,
           &v23);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_27;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v7 = RoCreatePropertySetSerializer(&v22);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 360LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_26;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 56LL))(v22, v23, v24);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 361LL;
      goto LABEL_10;
    }
    v21 = 0LL;
    v9 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           &v23,
           &v21);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      goto LABEL_25;
    }
    v25 = 0LL;
    v26 = 0;
    v10 = v21;
    hstringHeader.Reserved.Reserved1 = &v25;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, v27)[1].Reserved.Reserved1;
    LOBYTE(v10) = (*(int (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v10 + 48LL))(
                    v10,
                    Reserved1,
                    &hstringHeader.Reserved.Reserved2[8]) < 0;
    v36 = 0LL;
    RoVariant::Attach(
      (RoVariant *)hstringHeader.Reserved.Reserved1,
      *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]);
    if ( (_BYTE)v10
      && (v12 = v21,
          hstringHeader.Reserved.Reserved1 = &v25,
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0LL,
          v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)off_180487E20)[1].Reserved.Reserved1,
          v5 = (*(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v12 + 48LL))(
                 v12,
                 v13,
                 &hstringHeader.Reserved.Reserved2[8]),
          v36 = 0LL,
          RoVariant::Attach(
            (RoVariant *)hstringHeader.Reserved.Reserved1,
            *(struct IInspectable **)&hstringHeader.Reserved.Reserved2[8]),
          v5 < 0) )
    {
      v14 = (unsigned int)v5;
      v15 = 373LL;
    }
    else
    {
      hstringHeader.Reserved.Reserved1 = v25;
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v26;
      v16 = RoVariant::Accessor::GetRect(
              (RoVariant::Accessor *)&hstringHeader,
              (struct Windows::Foundation::Rect *)&v28);
      v5 = v16;
      if ( v16 >= 0 )
      {
        WindowRect = GetWindowRect(*((HWND *)this + 73), &Rect);
        v18 = v28;
        if ( WindowRect )
        {
          v18 = v28 + (float)Rect.left;
          v28 = v18;
          v19 = v29 + (float)Rect.top;
          v29 = v19;
        }
        else
        {
          v19 = v29;
        }
        a3->left = (int)v18;
        a3->top = (int)v19;
        a3->right = (int)v18 + (int)v30;
        a3->bottom = (int)v19 + (int)v31;
        v5 = 0;
        goto LABEL_23;
      }
      v14 = (unsigned int)v16;
      v15 = 375LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v14);
LABEL_23:
    RoVariant::~RoVariant((RoVariant *)&v25);
    goto LABEL_24;
  }
  v5 = -2147467259;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)0x80004005LL);
  return (unsigned int)v5;
}
