/*
 * XREFs of ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z @ 0x18041164C
 * Callers:
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180410924 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180411878 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::_)(Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_ab240ed3dc4198c77e747878b2117c89___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_ab240ed3dc4198c77e747878b2117c89___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___ @ 0x1804103F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1804103F0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSingleViewShellExperience::RegisterAumid(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct EventRegistrationToken *a3)
{
  char v6; // si
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r15
  int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rbx
  void *v14; // rax
  int v15; // edi
  __int64 v17; // [rsp+48h] [rbp-29h] BYREF
  __int64 v18[4]; // [rsp+50h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  __int64 v20; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v18[2] = -2LL;
  v6 = 0;
  LODWORD(v17) = 0;
  a3->value = 0LL;
  v7 = *((_QWORD *)this + 12);
  v17 = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v8 = *((_DWORD *)this + 33);
  if ( (v8 & 2) != 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShellExperience", 0x10u, 0xFu);
    v6 = 1;
    v9 = v20;
    v10 = v20;
    v8 = *((_DWORD *)this + 33);
  }
  else
  {
    v10 = 0LL;
    v9 = v20;
  }
  if ( (v6 & 1) != 0 )
    v9 = 0LL;
  v20 = v9;
  v11 = (v8 >> 3) & 1;
  if ( (v8 & 0x10) != 0 )
    goto LABEL_19;
  v12 = *((_QWORD *)this + 13);
  v18[0] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 8LL))(v7, 0LL);
  v18[1] = (__int64)this;
  v13 = 0LL;
  v14 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v14 )
    v13 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceDispatcher____Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::___Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_ab240ed3dc4198c77e747878b2117c89___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs_____lambda_ab240ed3dc4198c77e747878b2117c89___1_Windows::Internal::Shell::Experience::IShellExperienceDispatcher___Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs___(
            (__int64)v14,
            v18);
  v18[3] = v13;
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _QWORD, int, __int64, struct EventRegistrationToken *))(*(_QWORD *)v12 + 48LL))(
          v12,
          a2,
          v10,
          *((_QWORD *)this + 2),
          v11,
          v13,
          a3);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  if ( v15 == -2147483629 )
    v15 = 0;
  if ( v15 >= 0 )
LABEL_19:
    v15 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return (unsigned int)v15;
}
