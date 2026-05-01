/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad33d73e1ecf9087493325ab2e1dbde5___::Run @ 0x180030910
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_e6e0eff2c801ccf50926d67388532b90___ @ 0x1800309AC (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--Vi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1800A8538 (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad33d73e1ecf9087493325ab2e1dbde5___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD v6[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v8; // [rsp+50h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+18h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(&v8, a1 + 32);
  v2 = *(_QWORD *)(a1 + 16) + 160LL;
  v3 = *(_QWORD *)(a1 + 24);
  v10 = v8;
  v9 = v3;
  v6[0] = &v9;
  v6[1] = &v10;
  result = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs____Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_e6e0eff2c801ccf50926d67388532b90___(
             v2,
             v6);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA3D,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)result,
      -2);
    JUMPOUT(0x1800F7812LL);
  }
  v5 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
