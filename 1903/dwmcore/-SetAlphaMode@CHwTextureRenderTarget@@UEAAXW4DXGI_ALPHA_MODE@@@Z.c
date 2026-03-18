/*
 * XREFs of ?SetAlphaMode@CHwTextureRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800CFFB0
 * Callers:
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WJA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800ECC90 (-SetAlphaMode@CHwTextureRenderTarget@@WJA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WJI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800ECCA0 (-SetAlphaMode@CHwTextureRenderTarget@@WJI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwTextureRenderTarget::SetAlphaMode(CHwTextureRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 47) != a2 )
  {
    v3[0] = *((_DWORD *)this + 46);
    v3[2] = *((_DWORD *)this + 48);
    v2 = *(_QWORD *)this;
    v3[1] = a2;
    (*(void (__fastcall **)(CHwTextureRenderTarget *, _DWORD *))(v2 + 240))(this, v3);
  }
}
