/*
 * XREFs of ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x180235050
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAH111@Z @ 0x18022DE14 (--$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropT.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenRect(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct Windows::Foundation::Rect *a3)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  int v6; // eax
  int v7[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v4 = *(float *)a3;
    v7[0] = (int)*(float *)a3;
    v5 = *((float *)a3 + 1);
    v7[1] = (int)v5;
    v7[2] = (int)(float)(v4 + *((float *)a3 + 2));
    v7[3] = (int)(float)(v5 + *((float *)a3 + 3));
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v9);
    v10 = v9;
    ViewManagerInteropTraceLogging::ChangeSplashScreenRect<Navigation::Server::IShellView *,int &,int &,int &,int &>(
      &v10,
      v7,
      &v7[1],
      &v7[2],
      &v7[3]);
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 216LL))(v9, v7);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        510LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  }
}
