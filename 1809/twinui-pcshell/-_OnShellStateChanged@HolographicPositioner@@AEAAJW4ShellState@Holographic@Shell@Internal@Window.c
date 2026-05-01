/*
 * XREFs of ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1801B7A98
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___::Invoke @ 0x1801B3F00 (CAsyncCallbackWithLambda__lambda_84a34e4095d1745ec45b032db64765f5___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B604C (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6CC4 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     _LogEventWithApplicationViewData @ 0x1801B7870 (_LogEventWithApplicationViewData.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B7DE4 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall HolographicPositioner::_OnShellStateChanged(__int64 a1, int a2)
{
  struct IApplicationView **v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 416) == a2 )
    return 0LL;
  *(_DWORD *)(a1 + 416) = a2;
  if ( a2 )
  {
    if ( a2 != 1 )
      return 0LL;
    v3 = (struct IApplicationView **)(a1 + 392);
    v4 = *(_QWORD *)(a1 + 392);
    if ( !v4 )
      return 0LL;
    LogEventWithApplicationViewData(
      v4,
      (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::TerminatePendingAppViewForOOBE<unsigned short const *>);
    v5 = HolographicPositioner::_CloseView((HolographicPositioner *)a1, *v3);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73A,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    goto LABEL_12;
  }
  v3 = (struct IApplicationView **)(a1 + 392);
  v8 = *(_QWORD *)(a1 + 392);
  if ( v8 )
  {
    LogEventWithApplicationViewData(
      v8,
      (void (__fastcall *)(LPVOID *))HolographicPositionerTelemetry::ReplayPendingAppView<unsigned short const *>);
    v9 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)a1, *v3, 0LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1830LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
    v10 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)a1, *v3);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1833LL,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v3);
  }
  return 0LL;
}
