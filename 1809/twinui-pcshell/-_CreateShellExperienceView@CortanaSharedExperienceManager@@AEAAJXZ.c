/*
 * XREFs of ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154744
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x180153EE8 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180078338 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180078384 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180078384.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1801506A4 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaSharedExperienceManager::_CreateShellExperienceView(CortanaSharedExperienceManager *this)
{
  _QWORD *v2; // r12
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  _OWORD *v6; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rbx
  _OWORD *v9; // r14
  int v10; // eax
  char *v11; // rdi
  char *v12; // rax
  char *v13; // rbx
  char *v14; // rsi
  int v15; // eax
  int v17; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-71h] BYREF
  __int128 v19; // [rsp+58h] [rbp-59h] BYREF
  int v20[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v21[2]; // [rsp+70h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-31h] BYREF
  __int64 v23; // [rsp+98h] [rbp-19h]
  HSTRING_HEADER v24; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+7h]
  HSTRING_HEADER v26; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+D8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v21[1] = -2LL;
  v17 = 13;
  v23 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Cortana",
    0x29u,
    0x28u);
  *(_QWORD *)v20 = v23;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v24,
    L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI",
    0x2Au,
    0x29u);
  v21[0] = v25;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
    0x32u,
    0x31u);
  *(_QWORD *)v18 = v27;
  *(_QWORD *)&v19 = *((_QWORD *)this + 48);
  v2 = (_QWORD *)((char *)this + 480);
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (_QWORD *)this + 60,
         &v19,
         v18,
         v21,
         v20,
         &v17);
  if ( v4 < 0 )
  {
    v5 = 742LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 59);
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2)(
         *v2,
         &GUID_0af05558_d7f8_465e_977e_67af403ddef2,
         (char *)this + 472);
  if ( v4 < 0 )
  {
    v5 = 744LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v19 = CortanaSharedExperienceManager::_OnViewChangedHandler;
  DWORD2(v19) = 0;
  *(_QWORD *)v18 = this;
  *(_OWORD *)&v18[8] = v19;
  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>((__int64)v7);
    v8[1] = *(_OWORD *)v18;
    *((_QWORD *)v8 + 4) = *(_QWORD *)&v18[16];
    *(_QWORD *)v8 = off_1803D3BF8;
    v6 = v8;
    v9 = v8;
  }
  *(_QWORD *)&v19 = v6;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v9, (char *)this + 488);
  v4 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)v18 = CortanaSharedExperienceManager::_OnViewEventHandler;
    *(_DWORD *)&v18[8] = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)v18;
    v11 = 0LL;
    v12 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v14 = 0LL;
    if ( v12 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v12);
      *(HSTRING_HEADER *)(v13 + 16) = hstringHeader;
      *(_QWORD *)v13 = off_1803D3BA8;
      v11 = v13;
      v14 = v13;
    }
    *(_QWORD *)v18 = v11;
    v15 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v14, (char *)this + 496);
    v4 = v15;
    if ( v15 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
    if ( v14 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v4;
}
