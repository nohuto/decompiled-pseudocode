/*
 * XREFs of ?RaiseTabTransferStarting@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@@Z @ 0x18024C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ShellTabId__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_9e0ae8d731b4f3e7b636b1866b829d88___ @ 0x18024A9D8 (Microsoft--WRL--EventSource_Windows--Foundation--ITypedEventHandler_Windows--Intern_ea_18024A9D8.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::RaiseTabTransferStarting(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v9 = 0LL;
  *(_QWORD *)v6 = &v9;
  *(_QWORD *)&v6[2] = &v7;
  v7 = v2;
  v3 = Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ShellTabId__Microsoft::WRL::InvokeModeOptions__2___::DoInvoke__lambda_9e0ae8d731b4f3e7b636b1866b829d88___(
         a1 + 56,
         (__int128 *)v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x69,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
