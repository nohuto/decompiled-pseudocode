/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BB0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180165F60 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016D4EC (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CJumpViewExperienceManager::OnViewPropertiesChanging(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  PVOID Reserved1; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int String; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  RoVariant *v15; // [rsp+28h] [rbp-58h] BYREF
  struct IInspectable *v16; // [rsp+30h] [rbp-50h] BYREF
  RoVariant *v17; // [rsp+38h] [rbp-48h] BYREF
  int v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19 = -2LL;
  v14 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)((char *)this - 64), a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 511LL;
      goto LABEL_5;
    }
    v17 = 0LL;
    v18 = 0;
    v7 = v14;
    v15 = (RoVariant *)&v17;
    v16 = 0LL;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &v20,
                  (const WCHAR **)&JumpViewExperienceEvents::Param_Title)[1].Reserved.Reserved1;
    v5 = (*(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v7 + 48LL))(v7, Reserved1, &v16);
    v21 = 0LL;
    RoVariant::Attach(v15, v16);
    if ( v5 >= 0 )
    {
      if ( !v17
        || (WindowsDeleteString(*((HSTRING *)this + 43)),
            *((_QWORD *)this + 43) = 0LL,
            v15 = v17,
            LODWORD(v16) = v18,
            String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v15, (HSTRING *)this + 43),
            v5 = String,
            String >= 0) )
      {
        if ( *((_BYTE *)this + 428) )
        {
          *((_BYTE *)this + 428) = 0;
          v12 = CSingleViewShellExperience::Show(
                  (__int64)this + 88,
                  (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
          v5 = v12;
          if ( v12 < 0 && v12 != -2147467259 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              532LL,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
              (const char *)(unsigned int)v12);
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_17;
      }
      v9 = (unsigned int)String;
      v10 = 517LL;
    }
    else
    {
      v9 = (unsigned int)v5;
      v10 = 514LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v9);
LABEL_17:
    RoVariant::~RoVariant((RoVariant *)&v17);
    goto LABEL_18;
  }
  v6 = 495LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return (unsigned int)v5;
}
