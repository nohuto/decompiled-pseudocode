/*
 * XREFs of ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18018071C
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18017FEA0 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007C204 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18007C250 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_18007C250.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x18017C7A8 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaSharedExperienceManager::_CreateShellExperienceView(CortanaSharedExperienceManager *this)
{
  _QWORD *v2; // r12
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rdi
  _OWORD *v8; // rdi
  _OWORD *v9; // rax
  _OWORD *v10; // rbx
  _OWORD *v11; // r14
  int v12; // eax
  char *v13; // rdi
  char *v14; // rax
  char *v15; // rbx
  char *v16; // rsi
  int v17; // eax
  int v19; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-71h] BYREF
  __int128 v21; // [rsp+58h] [rbp-59h] BYREF
  int v22[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-31h] BYREF
  __int64 v25; // [rsp+98h] [rbp-19h]
  HSTRING_HEADER v26; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+7h]
  HSTRING_HEADER v28; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+D8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v23[1] = -2LL;
  v19 = 13;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Cortana",
    0x29u,
    0x28u);
  *(_QWORD *)v22 = v25;
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v26,
    L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI",
    0x2Au,
    0x29u);
  v23[0] = v27;
  v29 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v28,
    L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
    0x32u,
    0x31u);
  *(_QWORD *)v20 = v29;
  *(_QWORD *)&v21 = *((_QWORD *)this + 51);
  v2 = (_QWORD *)((char *)this + 504);
  v3 = *((_QWORD *)this + 63);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (volatile signed __int64 **)this + 63,
         &v21,
         v20,
         v23,
         v22,
         &v19);
  if ( v4 < 0 )
  {
    v5 = 751LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  v7 = **(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 62);
  v4 = v7(v6, &GUID_0af05558_d7f8_465e_977e_67af403ddef2, (char *)this + 496);
  if ( v4 < 0 )
  {
    v5 = 753LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v21 = CortanaSharedExperienceManager::_OnViewChangedHandler;
  DWORD2(v21) = 0;
  *(_QWORD *)v20 = this;
  *(_OWORD *)&v20[8] = v21;
  v8 = 0LL;
  v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v11 = 0LL;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>((__int64)v9);
    v10[1] = *(_OWORD *)v20;
    *((_QWORD *)v10 + 4) = *(_QWORD *)&v20[16];
    *(_QWORD *)v10 = off_180439498;
    v8 = v10;
    v11 = v10;
  }
  *(_QWORD *)&v21 = v8;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v11, (char *)this + 512);
  v4 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)v20 = CortanaSharedExperienceManager::_OnViewEventHandler;
    *(_DWORD *)&v20[8] = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)v20;
    v13 = 0LL;
    v14 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v16 = 0LL;
    if ( v14 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v14);
      *(HSTRING_HEADER *)(v15 + 16) = hstringHeader;
      *(_QWORD *)v15 = off_1804394C0;
      v13 = v15;
      v16 = v15;
    }
    *(_QWORD *)v20 = v13;
    v17 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v16, (char *)this + 520);
    v4 = v17;
    if ( v17 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    if ( v16 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v11 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v4;
}
