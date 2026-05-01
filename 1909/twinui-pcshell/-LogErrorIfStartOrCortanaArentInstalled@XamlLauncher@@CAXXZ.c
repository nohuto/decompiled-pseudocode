/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x180312AA0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___::Run @ 0x180313EA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___--Run.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18017B93C (--$GetActivationFactory@V-$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Mi.c)
 *     ??$CortanaNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x18031001C (--$CortanaNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180310840 (--$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180310978 (--$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  __int64 v0; // rbx
  __int64 (__fastcall *v1)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, _BYTE *); // rdi
  _BYTE v6[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-48h] BYREF
  int v8; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+44h] [rbp-3Ch] BYREF
  int v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h]

  v11 = -2LL;
  v7 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Application",
    0x2Du,
    0x2Cu);
  if ( (int)Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IApplicationStatics>>(
              v13,
              &v7) >= 0 )
  {
    v6[0] = 0;
    v0 = v7;
    v1 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v7 + 184LL);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v8 = v1(v0, 0LL, v13, v6);
    if ( v8 < 0 || !v6[0] )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>((__int64)&v8);
    v2 = v7;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v7 + 184LL);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App",
      0x3Cu,
      0x3Bu);
    v9 = v3(v2, 0LL, v13, v6);
    if ( v9 < 0 || !v6[0] )
      StartWindowTelemetry::StartMenuExperienceHostNotInstalled<long const &>((__int64)&v9);
    v4 = v7;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v7 + 184LL);
    v13 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
      0x32u,
      0x31u);
    v10 = v5(v4, 0LL, v13, v6);
    if ( v10 < 0 || !v6[0] )
      StartWindowTelemetry::CortanaNotInstalled<long const &>((__int64)&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
