/*
 * XREFs of ?SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x180234F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$SetSplashScreenDismissed@PEAUIShellView@Server@Navigation@@AEA_N@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEA_N@Z @ 0x18022E914 (--$SetSplashScreenDismissed@PEAUIShellView@Server@Navigation@@AEA_N@ViewManagerInteropTraceLoggi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenDismissed(ViewManagerBridge *this, struct IUnknown *a2, char a3)
{
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a3;
  if ( !*((_BYTE *)this + 145) )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v7);
    v9 = v7;
    ViewManagerInteropTraceLogging::SetSplashScreenDismissed<Navigation::Server::IShellView *,bool &>(&v9, (__int64)&v8);
    LOBYTE(v4) = v8;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 728LL))(v7, v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        491LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
}
