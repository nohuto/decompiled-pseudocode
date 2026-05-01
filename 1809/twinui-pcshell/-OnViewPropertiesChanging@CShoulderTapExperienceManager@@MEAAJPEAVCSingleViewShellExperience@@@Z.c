/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180167AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180017C5C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BB0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x180167D84 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1801684E4 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  bool v3; // di
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  CShoulderTapExperienceManager *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // eax
  struct IInspectable *v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h] BYREF
  int v15; // [rsp+40h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v16 = -2LL;
  v3 = 0;
  if ( *((_QWORD *)a2 + 3) )
  {
    v13 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (_QWORD *)a2 + 4,
           &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      return v5;
    }
    v14 = 0LL;
    v15 = 0;
    v6 = v13;
    v12 = 0LL;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FirstLoadComplete", 0x12u, 0x11u);
    LOBYTE(v6) = (*(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v6 + 48LL))(v6, v18, &v12) >= 0;
    v18 = 0LL;
    RoVariant::Attach((RoVariant *)&v14, v12);
    if ( (_BYTE)v6 )
    {
      v7 = (CShoulderTapExperienceManager *)((char *)this - 32);
LABEL_9:
      v5 = CShoulderTapExperienceManager::Reactivate(v7, v3);
LABEL_13:
      RoVariant::~RoVariant((RoVariant *)&v14);
      goto LABEL_14;
    }
    v8 = v13;
    v12 = 0LL;
    v18 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PositionShoulderTap", 0x14u, 0x13u);
    LOBYTE(v8) = (*(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v8 + 48LL))(v8, v18, &v12) >= 0;
    v18 = 0LL;
    RoVariant::Attach((RoVariant *)&v14, v12);
    if ( (_BYTE)v8 )
    {
      v7 = (CShoulderTapExperienceManager *)((char *)this - 32);
      if ( (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
      {
        v3 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      v9 = v13;
      v12 = 0LL;
      v18 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AnimationComplete", 0x12u, 0x11u);
      LOBYTE(v9) = (*(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v9 + 48LL))(
                     v9,
                     v18,
                     &v12) >= 0;
      v18 = 0LL;
      RoVariant::Attach((RoVariant *)&v14, v12);
      if ( (_BYTE)v9 )
      {
        v10 = CSingleViewShellExperience::Hide((__int64)this + 8, 0LL);
        v5 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_13;
        }
      }
    }
    RoVariant::~RoVariant((RoVariant *)&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  return 0LL;
}
