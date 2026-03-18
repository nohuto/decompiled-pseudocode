/*
 * XREFs of ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18015FCF0
 * Callers:
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@WJA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800EC9F0 (-SetAlphaMode@CHwDisplayRenderTarget@@WJA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetAlphaMode(CHwDisplayRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx
  _BYTE v5[4]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]

  if ( *((_DWORD *)this + 64) != a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      v4 = *((_QWORD *)this + 17) + 120LL;
      *((_DWORD *)this + 64) = a2;
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v5);
      v6 = *((_DWORD *)this + 64);
      v7 = *((_DWORD *)this + 65);
      (*(void (__fastcall **)(CHwDisplayRenderTarget *, _BYTE *))(*(_QWORD *)this + 240LL))(this, v5);
    }
  }
}
