/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B1E60
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
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1801B2304 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, PCWSTR, char *); // rbx
  PCWSTR StringRawBuffer; // rax
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, struct IInspectable **); // rdi
  HSTRING_HEADER *v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int String; // eax
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  RoVariant *v18; // [rsp+28h] [rbp-58h] BYREF
  struct IInspectable *v19; // [rsp+30h] [rbp-50h] BYREF
  RoVariant *v20; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22 = -2LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 72) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 73) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 26);
    v5 = *(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 112LL);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 31), 0LL);
    v7 = v5(v4, StringRawBuffer, (char *)this + 256);
    if ( v7 < 0 )
    {
      v8 = 264LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v7 = CPeopleBarJumpViewExperienceManager::PositionJumpView((CPeopleBarJumpViewExperienceManager *)((char *)this - 48));
    if ( v7 < 0 )
    {
      v8 = 265LL;
      goto LABEL_4;
    }
    v17 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
            (_QWORD *)a2 + 4,
            &v17);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      return (unsigned int)v7;
    }
    v20 = 0LL;
    v21 = 0;
    v11 = v17;
    v12 = *(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v17 + 48LL);
    v18 = (RoVariant *)&v20;
    v19 = 0LL;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)off_180487B08);
    v7 = v12(v11, v13[1].Reserved.Reserved1, &v19);
    v24 = 0LL;
    RoVariant::Attach(v18, v19);
    if ( v7 < 0 )
    {
      v14 = (unsigned int)v7;
      v15 = 271LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)v14);
      RoVariant::~RoVariant((RoVariant *)&v20);
      goto LABEL_19;
    }
    if ( v20 )
    {
      v18 = v20;
      LODWORD(v19) = v21;
      WindowsDeleteString(*((HSTRING *)this + 37));
      *((_QWORD *)this + 37) = 0LL;
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v18, (HSTRING *)this + 37);
      v7 = String;
      if ( String < 0 )
      {
        v15 = 274LL;
LABEL_17:
        v14 = (unsigned int)String;
        goto LABEL_18;
      }
    }
    String = CSingleViewShellExperience::Show(
               (__int64)this + 8,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
    v7 = String;
    if ( String < 0 )
    {
      v15 = 277LL;
      goto LABEL_17;
    }
    RoVariant::~RoVariant((RoVariant *)&v20);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  return 0LL;
}
