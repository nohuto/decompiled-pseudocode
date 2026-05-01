/*
 * XREFs of ?get_ActiveExperience@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJPEAPEAUICustomShellExperience@2345@@Z @ 0x18008BB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **a2)
{
  __int64 i; // rbx
  __int64 v4; // r14
  const WCHAR *v5; // rax
  HSTRING_HEADER *v6; // rdi
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v7; // rcx
  PVOID Reserved1; // rcx
  int v9; // edi
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[8]; // [rsp+20h] [rbp-58h] BYREF
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v19; // [rsp+28h] [rbp-50h] BYREF
  struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *v20; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v21[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v22; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v21[1] = (const WCHAR *)-2LL;
  *a2 = 0LL;
  v4 = *((_QWORD *)&Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds + 1);
  for ( i = Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds; ; i += 32LL )
  {
    if ( i == v4 )
      return 0LL;
    v19 = 0LL;
    v5 = (const WCHAR *)i;
    if ( *(_QWORD *)(i + 24) >= 8uLL )
      v5 = *(const WCHAR **)i;
    v21[0] = v5;
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v21);
    v7 = v19;
    v19 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, _QWORD))(*(_QWORD *)v7 + 16LL))(
        v7,
        *(_QWORD *)v7);
    Reserved1 = v6[1].Reserved.Reserved1;
    v19 = 0LL;
    v9 = RoActivateInstance(Reserved1, &v20);
    if ( v9 < 0 )
      goto LABEL_12;
    if ( *(_QWORD *)&GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data1 != *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      || *(_QWORD *)GUID_6ff11408_7eca_429b_8440_22c10384b01d.Data4 != *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v9 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, GUID *, struct Windows::Internal::Shell::CustomShell::ICustomShellExperience **))v20)(
             v20,
             &GUID_6ff11408_7eca_429b_8440_22c10384b01d,
             &v19);
      (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_12:
      v10 = v19;
      goto LABEL_13;
    }
    v10 = v20;
    v19 = v20;
LABEL_13:
    if ( v9 != -2147221164 )
    {
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          61LL,
          (__int64)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
          (const char *)(unsigned int)v9);
LABEL_25:
        wil::details::in1diag3::Throw_Hr(
          v12,
          64LL,
          (__int64)"pcshell\\twinui\\customshellexperiencerepository\\lib\\customshellexperiencerepository.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
        return Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::get_ActiveExperience_::_1_::dtor_0(
                 v16,
                 v15,
                 v17);
      }
      v18[0] = 0;
      v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *, _BYTE *))(*(_QWORD *)v10 + 56LL))(
              v10,
              v18);
      v12 = retaddr;
      if ( v11 < 0 )
        goto LABEL_25;
      if ( v18[0] )
        break;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  }
  v13 = v19;
  if ( v19 )
  {
    *a2 = v19;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::CustomShell::ICustomShellExperience *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  return 0LL;
}
