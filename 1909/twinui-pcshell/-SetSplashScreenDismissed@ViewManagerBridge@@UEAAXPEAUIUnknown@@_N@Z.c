/*
 * XREFs of ?SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x1802A98A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$SetSplashScreenDismissed@PEAUIShellView@Server@Navigation@@AEA_N@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEA_N@Z @ 0x1802A3030 (--$SetSplashScreenDismissed@PEAUIShellView@Server@Navigation@@AEA_N@ViewManagerInteropTraceLoggi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenDismissed(ViewManagerBridge *this, struct IUnknown *a2, char a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a3;
  if ( !*((_BYTE *)this + 145) )
  {
    v8 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v8);
    v10 = v8;
    ViewManagerInteropTraceLogging::SetSplashScreenDismissed<Navigation::Server::IShellView *,bool &>(
      &v10,
      (__int64)&v9);
    LOBYTE(v5) = v9;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 728LL))(v8, v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1EB,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
}
