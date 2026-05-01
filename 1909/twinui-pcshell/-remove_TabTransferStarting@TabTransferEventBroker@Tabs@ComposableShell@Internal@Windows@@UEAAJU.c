/*
 * XREFs of ?remove_TabTransferStarting@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18026BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1801671DC (-Remove@-$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U-$Invok.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::remove_TabTransferStarting(
        RTL_SRWLOCK *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         this + 7,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x93,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
