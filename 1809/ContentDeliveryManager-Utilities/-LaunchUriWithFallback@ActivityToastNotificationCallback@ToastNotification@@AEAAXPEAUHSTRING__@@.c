/*
 * XREFs of ?LaunchUriWithFallback@ActivityToastNotificationCallback@ToastNotification@@AEAAXPEAUHSTRING__@@0@Z @ 0x1800476D0
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180046668 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA?AV?$com_ptr_t@UIUriRuntimeClassFactory@Foundation@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180049F28 (--$GetActivationFactory@UIUriRuntimeClassFactory@Foundation@Windows@@@wil@@YA-AV-$com_ptr_t@UIUr.c)
 *     ??$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherOptions@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180049FF0 (--$ActivateInstance@UILauncherOptions@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherOptions@S.c)
 *     ??$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UILauncherStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004A0F4 (--$GetActivationFactory@UILauncherStatics@System@Windows@@@wil@@YA-AV-$com_ptr_t@UILauncherStati.c)
 *     ??$WaitForCompletion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004A1BC (--$WaitForCompletion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType@E.c)
 *     ??$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QEA_N0$$QEAPEBG@Z @ 0x18004A220 (--$ReportLaunchStatus@_N_NPEBG@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAX$$QE.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x18004B690 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback(
        ToastNotification::ActivityToastNotificationCallback *this,
        HSTRING a2,
        HSTRING a3)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  PCWSTR v12; // rcx
  __int64 v13; // rdi
  HRESULT v14; // eax
  char v15; // bl
  HSTRING v16; // rcx
  __int64 v17; // rcx
  char v18; // [rsp+28h] [rbp-29h] BYREF
  char v19; // [rsp+29h] [rbp-28h] BYREF
  bool v20[6]; // [rsp+2Ah] [rbp-27h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-21h] BYREF
  HSTRING v22; // [rsp+38h] [rbp-19h] BYREF
  __int64 v23; // [rsp+40h] [rbp-11h] BYREF
  __int64 v24; // [rsp+48h] [rbp-9h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1h] BYREF
  __int64 v26; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v27[1] = -2LL;
  LODWORD(StringRawBuffer) = 0;
  wil::GetActivationFactory<Windows::Foundation::IUriRuntimeClassFactory>(&v26);
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, a2, &v24);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_31;
  wil::ActivateInstance<Windows::System::ILauncherOptions>(&v25);
  if ( WindowsGetStringLen(a3) )
  {
    StringRawBuffer = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING, PCWSTR *))(*(_QWORD *)v26 + 48LL))(v26, a3, &StringRawBuffer);
    v8 = retaddr;
    if ( v7 < 0 )
      goto LABEL_32;
    v9 = (*(__int64 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)v25 + 128LL))(v25, StringRawBuffer);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_34;
    }
    if ( StringRawBuffer )
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
  }
  wil::GetActivationFactory<Windows::System::ILauncherStatics>(v27);
  StringRawBuffer = 0LL;
  v10 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(v27[0], v24, v25, &StringRawBuffer);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x65B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800479C2LL);
  }
  wil::WaitForCompletion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(&v18, StringRawBuffer);
  v12 = StringRawBuffer;
  if ( StringRawBuffer )
  {
    StringRawBuffer = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v23 = 0LL;
  v22 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 120LL))(v24, &v23) < 0 )
    goto LABEL_15;
  v13 = v23;
  string = 0LL;
  v14 = WindowsCreateStringReference(L"mmx-scid", 8u, &hstringHeader, &string);
  if ( v14 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0xF5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v5);
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0xFC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v15 = 1;
  LODWORD(StringRawBuffer) = 1;
  WindowsDeleteString(v22);
  v22 = 0LL;
  if ( (*(int (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v13 + 48LL))(v13, string, &v22) < 0 )
  {
LABEL_15:
    v16 = v22;
    goto LABEL_16;
  }
  v16 = v22;
  if ( !v22 )
LABEL_16:
    v15 = 0;
  if ( v15 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(v16, 0LL);
    v19 = 0;
    v20[0] = v18 != 0;
    MobilityExperience::Telemetry::MobilityExperienceTelemetry::ReportLaunchStatus<bool,bool,unsigned short const *>(
      v20,
      &v19,
      &StringRawBuffer);
    v16 = v22;
  }
  WindowsDeleteString(v16);
  v22 = 0LL;
  v17 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v27[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[0] + 16LL))(v27[0]);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
}
