/*
 * XREFs of ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BC270
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180012C34 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4 (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006DCF0 (--1RoVariant@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017B870 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x1801B1A50 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BAD7C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
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
  __int64 (__fastcall *v8)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int String; // eax
  int v13; // eax
  int v14; // edi
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  RoVariant *v17; // [rsp+28h] [rbp-58h] BYREF
  struct IInspectable *v18; // [rsp+30h] [rbp-50h] BYREF
  RoVariant *v19; // [rsp+38h] [rbp-48h] BYREF
  int v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v22; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21 = -2LL;
  v16 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = CJumpViewExperienceManager::EnsureWindowPosition((CJumpViewExperienceManager *)((char *)this - 64), a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 564LL;
      goto LABEL_5;
    }
    v19 = 0LL;
    v20 = 0;
    v7 = v16;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v16 + 48LL);
    v17 = (RoVariant *)&v19;
    v18 = 0LL;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &v22,
           (const WCHAR **)&JumpViewExperienceEvents::Param_Title);
    v5 = v8(v7, v9[1].Reserved.Reserved1, &v18);
    v23 = 0LL;
    RoVariant::Attach(v17, v18);
    if ( v5 >= 0 )
    {
      if ( !v19
        || (v17 = v19,
            LODWORD(v18) = v20,
            WindowsDeleteString(*((HSTRING *)this + 43)),
            *((_QWORD *)this + 43) = 0LL,
            String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v17, (HSTRING *)this + 43),
            v5 = String,
            String >= 0) )
      {
        if ( *((_BYTE *)this + 428)
          && (*((_BYTE *)this + 428) = 0,
              v13 = CSingleViewShellExperience::Show(
                      (__int64)this + 88,
                      *((_BYTE *)this + 429) == 0
                    ? (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4
                    : 0),
              v14 = v13,
              v13 < 0) )
        {
          v5 = -2147467259;
          if ( v13 != -2147467259 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x248,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
              (const char *)(unsigned int)v13);
            v5 = v14;
          }
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_17;
      }
      v10 = (unsigned int)String;
      v11 = 570LL;
    }
    else
    {
      v10 = (unsigned int)v5;
      v11 = 567LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v10);
LABEL_17:
    RoVariant::~RoVariant((RoVariant *)&v19);
    goto LABEL_18;
  }
  v6 = 548LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)v5;
}
