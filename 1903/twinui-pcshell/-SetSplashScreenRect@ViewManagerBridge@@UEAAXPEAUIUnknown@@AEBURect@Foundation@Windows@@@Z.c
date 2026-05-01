/*
 * XREFs of ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x18028A510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAH111@Z @ 0x180283108 (--$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenRect(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct Windows::Foundation::Rect *a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v7; // eax
  int v8[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v10; // [rsp+60h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v4 = *(float *)a3;
    v8[0] = (int)*(float *)a3;
    v5 = *((float *)a3 + 1);
    v8[1] = (int)v5;
    v8[2] = (int)(float)(v4 + *((float *)a3 + 2));
    v8[3] = (int)(float)(v5 + *((float *)a3 + 3));
    v10 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v10);
    v11 = v10;
    ViewManagerInteropTraceLogging::ChangeSplashScreenRect<Navigation::Server::IShellView *,int &,int &,int &,int &>(
      &v11,
      v8,
      &v8[1],
      &v8[2],
      &v8[3]);
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 216LL))(v10, v8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1FE,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
}
