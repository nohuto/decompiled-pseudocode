/*
 * XREFs of _lambda_49c0b2fb711056d9762ca69f307c87f4_::operator() @ 0x18024A700
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_49c0b2fb711056d9762ca69f307c87f4___::Run @ 0x180256B30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_49c0b2fb711056d9762ca69f307c87f4___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x180250370 (-GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHe.c)
 *     ??$K32GetModuleFileNameExW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0IA@@wil@@YAJPEAXPEAUHINSTANCE__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1802799B0 (--$K32GetModuleFileNameExW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1.c)
 *     ?GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x180279B28 (-GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_49c0b2fb711056d9762ca69f307c87f4_::operator()(__int64 a1)
{
  HWND v2; // rbx
  struct TelemetryHelpers::WindowCharacteristics *v3; // r8
  char *v4; // rbx
  DWORD dwProcessId; // [rsp+20h] [rbp-258h] BYREF
  __int64 v6; // [rsp+28h] [rbp-250h]
  struct HWND__ v7; // [rsp+30h] [rbp-248h] BYREF
  LPVOID pv; // [rsp+258h] [rbp-20h]

  v6 = -2LL;
  memset_0(&v7, 0, 0x226uLL);
  pv = 0LL;
  v2 = *(HWND *)a1;
  TelemetryHelpers::GetWindowCharacteristicsPartial(*(HWND *)a1, &v7, v3);
  dwProcessId = 0;
  GetWindowThreadProcessId(v2, &dwProcessId);
  v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    wil::K32GetModuleFileNameExW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,128>(v4);
    CloseHandle(v4);
  }
  ShellFrameAggregateTelemetry::GetUnmetTabRequirements(
    *(_DWORD *)(a1 + 8),
    (const struct TelemetryHelpers::WindowCharacteristics *)&v7);
  if ( pv )
    CoTaskMemFree(pv);
}
