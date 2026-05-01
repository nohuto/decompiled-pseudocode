/*
 * XREFs of ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180194500
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18003A0B4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18004527C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x180069780 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18015C5C0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801947B4 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x180194F14 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging(
        CShoulderTapExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64, struct IInspectable **); // rdi
  bool v7; // dl
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64, struct IInspectable **); // rdi
  __int64 v10; // rbx
  int (__fastcall *v11)(__int64, __int64, struct IInspectable **); // rdi
  int v12; // eax
  struct IInspectable *v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  int v17; // [rsp+40h] [rbp-40h]
  __int64 v18; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18 = -2LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    v15 = 0LL;
    v3 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (_QWORD *)a2 + 4,
           &v15);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
LABEL_14:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return v4;
    }
    v16 = 0LL;
    v17 = 0;
    v5 = v15;
    v6 = *(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v15 + 48LL);
    v14 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"FirstLoadComplete", 0x12u, 0x11u);
    LOBYTE(v5) = v6(v5, v20, &v14) >= 0;
    v20 = 0LL;
    RoVariant::Attach((RoVariant *)&v16, v14);
    if ( (_BYTE)v5 )
    {
      v7 = 0;
LABEL_9:
      v4 = CShoulderTapExperienceManager::Reactivate((CShoulderTapExperienceManager *)((char *)this - 32), v7);
LABEL_13:
      RoVariant::~RoVariant((RoVariant *)&v16);
      goto LABEL_14;
    }
    v8 = v15;
    v9 = *(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v15 + 48LL);
    v14 = 0LL;
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"PositionShoulderTap", 0x14u, 0x13u);
    LOBYTE(v8) = v9(v8, v20, &v14) >= 0;
    v20 = 0LL;
    RoVariant::Attach((RoVariant *)&v16, v14);
    if ( (_BYTE)v8 )
    {
      if ( (int)CShoulderTapExperienceManager::PositionShoulderTap((CShoulderTapExperienceManager *)((char *)this - 32)) < 0 )
      {
        v7 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      v10 = v15;
      v11 = *(int (__fastcall **)(__int64, __int64, struct IInspectable **))(*(_QWORD *)v15 + 48LL);
      v14 = 0LL;
      v20 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AnimationComplete", 0x12u, 0x11u);
      LOBYTE(v10) = v11(v10, v20, &v14) >= 0;
      v20 = 0LL;
      RoVariant::Attach((RoVariant *)&v16, v14);
      if ( (_BYTE)v10 )
      {
        v12 = CSingleViewShellExperience::Hide((__int64)this + 8, 0LL);
        v4 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x104,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
            (const char *)(unsigned int)v12);
          goto LABEL_13;
        }
      }
    }
    RoVariant::~RoVariant((RoVariant *)&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  return 0LL;
}
