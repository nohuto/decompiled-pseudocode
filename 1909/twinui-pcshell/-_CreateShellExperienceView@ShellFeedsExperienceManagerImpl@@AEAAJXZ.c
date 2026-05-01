/*
 * XREFs of ?_CreateShellExperienceView@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x180094C88
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x1800947E8 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@VShellFeedsExperienceManagerImpl@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewChangedArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@PEAVShellFeedsExperienceManagerImpl@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@5678@@Z@Z @ 0x180091744 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@VShellFeedsExperienceManagerImpl@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@PEAVShellFeedsExperienceManagerImpl@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@5678@@Z@Z @ 0x1800917C4 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Interna_ea_1800917C4.c)
 *     ??$MakeAndInitialize@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180091D00 (--$MakeAndInitialize@VShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UIShellExperienceView@Exp.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellFeedsExperienceManagerImpl::_CreateShellExperienceView(ShellFeedsExperienceManagerImpl *this)
{
  _QWORD *v2; // r14
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v8)(_QWORD, GUID *, char *); // rdi
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdi
  int v13; // eax
  __int128 v14; // [rsp+38h] [rbp-79h] BYREF
  int v15[4]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v16; // [rsp+58h] [rbp-59h] BYREF
  int v17[2]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v18; // [rsp+78h] [rbp-39h] BYREF
  __int64 v19; // [rsp+88h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-21h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-9h]
  HSTRING_HEADER v22; // [rsp+B0h] [rbp-1h] BYREF
  HSTRING_HEADER v23; // [rsp+D0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v19 = -2LL;
  v15[0] = 4;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ShellFeeds",
    0x2Cu,
    0x2Bu);
  *(_QWORD *)v17 = v21;
  *(_QWORD *)&v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_1804514C8)[1].Reserved.Reserved1;
  *(_QWORD *)&v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, (const WCHAR **)off_1804514D0)[1].Reserved.Reserved1;
  *(_QWORD *)&v16 = *((_QWORD *)this + 6);
  v2 = (_QWORD *)((char *)this + 104);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::ShellFeeds::ShellFeedsShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (__int64 *)this + 13,
         &v16,
         &v14,
         &v18,
         v17,
         v15);
  if ( v4 < 0 )
  {
    v5 = 462LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  v8 = **(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  v4 = v8(v7, &GUID_971d912c_a63c_48d9_893e_d169202f1979, (char *)this + 96);
  if ( v4 < 0 )
  {
    v5 = 464LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v16 = ShellFeedsExperienceManagerImpl::_OnViewChangedHandler;
  DWORD2(v16) = 0;
  v14 = v16;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,ShellFeedsExperienceManagerImpl,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>(
    &v16,
    (__int64)this,
    &v14);
  v9 = v16;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v16, (char *)this + 112);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)&v14 = ShellFeedsExperienceManagerImpl::_OnViewEventHandler;
    DWORD2(v14) = 0;
    v18 = v14;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,ShellFeedsExperienceManagerImpl,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>(
      &v14,
      (__int64)this,
      &v18);
    v12 = v14;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v14, (char *)this + 120);
    v11 = v13;
    if ( v13 >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D3,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v11;
}
