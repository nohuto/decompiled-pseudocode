/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45___::Run @ 0x1802B8D00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_01545e3462c885316a734816cc3d9dbf___ @ 0x1802B3A10 (Microsoft--WRL--EventSource_Windows--Internal--Shell--Popups--IPopupPropertyChangedEventHandler_.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(RTL_SRWLOCK **)(a1 + 16);
  v4 = 0;
  v2 = Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_01545e3462c885316a734816cc3d9dbf___(
         v1 + 40,
         (__int64)&v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
}
