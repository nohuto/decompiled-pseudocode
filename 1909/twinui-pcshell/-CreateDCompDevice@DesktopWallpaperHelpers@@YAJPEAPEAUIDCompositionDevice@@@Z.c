/*
 * XREFs of ?CreateDCompDevice@DesktopWallpaperHelpers@@YAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801B6604
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1801B888C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDCompDevice(
        DesktopWallpaperHelpers *this,
        struct IDCompositionDevice **a2)
{
  unsigned int v3; // edi
  D3D_DRIVER_TYPE *v4; // rsi
  HRESULT Device2; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  ID3D11Device *v8; // rbx
  HRESULT (__stdcall *QueryInterface)(ID3D11Device *, const IID *const, void **); // rdi
  _DWORD v11[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+90h] [rbp+30h] BYREF
  ID3D11Device *ppDevice; // [rsp+98h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  ID3D11DeviceContext *ppImmediateContext; // [rsp+A8h] [rbp+48h] BYREF

  v12 = -2LL;
  *(_QWORD *)this = 0LL;
  v16 = 0LL;
  ppDevice = 0LL;
  ppImmediateContext = 0LL;
  v11[0] = 1;
  v11[1] = 5;
  v3 = 0;
  v4 = (D3D_DRIVER_TYPE *)v11;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppImmediateContext);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppDevice);
    Device2 = D3D11CreateDevice(0LL, *v4, 0LL, 0x20u, 0LL, 0, 7u, &ppDevice, &pFeatureLevel, &ppImmediateContext);
    v6 = Device2;
    if ( Device2 >= 0 )
      break;
    ++v3;
    ++v4;
    if ( v3 >= 2 )
    {
      v7 = 107LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"internal\\pcshellshell\\private\\inc\\desktopwallpaperhelpers.h",
        (const char *)(unsigned int)Device2);
      goto LABEL_11;
    }
  }
  v8 = ppDevice;
  QueryInterface = ppDevice->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Device2 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, __int64 *))QueryInterface)(
              v8,
              &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c,
              &v16);
  v6 = Device2;
  if ( Device2 < 0 )
  {
    v7 = 108LL;
    goto LABEL_7;
  }
  Device2 = DCompositionCreateDevice2(v16, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, this);
  v6 = Device2;
  if ( Device2 < 0 )
  {
    v7 = 109LL;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppImmediateContext);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppDevice);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v6;
}
