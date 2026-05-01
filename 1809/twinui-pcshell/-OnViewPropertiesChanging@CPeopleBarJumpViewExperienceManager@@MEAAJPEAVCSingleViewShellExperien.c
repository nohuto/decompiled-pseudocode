/*
 * XREFs of ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180166370
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x18002688C (-Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x1800648B8 (--1RoVariant@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180132BB0 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ?GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z @ 0x180165F60 (-GetString@Accessor@RoVariant@@QEBAJPEAPEAUHSTRING__@@@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x180166804 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPeopleBarJumpViewExperienceManager::OnViewPropertiesChanging(
        CPeopleBarJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  __int64 v4; // rbx
  PCWSTR StringRawBuffer; // r9
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // rbx
  PVOID Reserved1; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int String; // eax
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  RoVariant *v16; // [rsp+28h] [rbp-58h] BYREF
  int v17; // [rsp+30h] [rbp-50h]
  RoVariant *v18; // [rsp+38h] [rbp-48h] BYREF
  struct IInspectable *v19[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v19[1] = (struct IInspectable *)-2LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    *((_DWORD *)this + 72) = (int)*((float *)a2 + 11);
    *((_DWORD *)this + 73) = (int)*((float *)a2 + 12);
    v4 = *((_QWORD *)this + 26);
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 31), 0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, char *))(*(_QWORD *)v4 + 112LL))(
           v4,
           StringRawBuffer,
           (char *)this + 256);
    if ( v6 < 0 )
    {
      v7 = 264LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = CPeopleBarJumpViewExperienceManager::PositionJumpView((CPeopleBarJumpViewExperienceManager *)((char *)this - 48));
    if ( v6 < 0 )
    {
      v7 = 265LL;
      goto LABEL_4;
    }
    v15 = 0LL;
    v9 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
           (_QWORD *)a2 + 4,
           &v15);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return (unsigned int)v6;
    }
    v16 = 0LL;
    v17 = 0;
    v10 = v15;
    v18 = (RoVariant *)&v16;
    v19[0] = 0LL;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)&off_180400088)[1].Reserved.Reserved1;
    v6 = (*(__int64 (__fastcall **)(__int64, PVOID, struct IInspectable **))(*(_QWORD *)v10 + 48LL))(
           v10,
           Reserved1,
           v19);
    v21 = 0LL;
    RoVariant::Attach(v18, v19[0]);
    if ( v6 < 0 )
    {
      v12 = (unsigned int)v6;
      v13 = 271LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)v12);
      RoVariant::~RoVariant((RoVariant *)&v16);
      goto LABEL_19;
    }
    if ( v16 )
    {
      WindowsDeleteString(*((HSTRING *)this + 37));
      *((_QWORD *)this + 37) = 0LL;
      v18 = v16;
      LODWORD(v19[0]) = v17;
      String = RoVariant::Accessor::GetString((RoVariant::Accessor *)&v18, (HSTRING *)this + 37);
      v6 = String;
      if ( String < 0 )
      {
        v13 = 274LL;
LABEL_17:
        v12 = (unsigned int)String;
        goto LABEL_18;
      }
    }
    String = CSingleViewShellExperience::Show(
               (__int64)this + 8,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
    v6 = String;
    if ( String < 0 )
    {
      v13 = 277LL;
      goto LABEL_17;
    }
    RoVariant::~RoVariant((RoVariant *)&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  return 0LL;
}
