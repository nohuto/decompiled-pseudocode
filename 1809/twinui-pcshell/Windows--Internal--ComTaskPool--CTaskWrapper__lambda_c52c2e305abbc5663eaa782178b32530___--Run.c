/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c52c2e305abbc5663eaa782178b32530___::Run @ 0x1802436E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___ @ 0x18023E3F0 (Microsoft--WRL--EventSource_Windows--Internal--Shell--Popups--IPopupPropertyChangedEventHandler_.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c52c2e305abbc5663eaa782178b32530___::Run(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16) + 320LL;
  v4 = 1;
  v2 = Microsoft::WRL::EventSource_Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_1236e2c0be9b000750d1b0bdd8ae8f82___(
         v1,
         (__int64)&v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      868LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
}
