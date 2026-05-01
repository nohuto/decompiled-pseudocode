/*
 * XREFs of ?ResumeAndNavigateView@ViewManagerBridge@@UEAAXIIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A8FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A2B4C (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     ??$ResumeAndNavigateView@AEAIAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAXAEAI0AEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802A2EDC (--$ResumeAndNavigateView@AEAIAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@.c)
 */

void __fastcall ViewManagerBridge::ResumeAndNavigateView(__int64 a1, int a2, int a3, int a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v6 = a2;
  if ( !*(_BYTE *)(a1 + 145) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 120LL))(*(_QWORD *)(a1 + 104));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    ViewManagerInteropTraceLogging::ResumeAndNavigateView<unsigned int &,unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
      &v6,
      &v7,
      &v8);
    ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
      &v6,
      &v8);
  }
}
