/*
 * XREFs of ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180203A50
 * Callers:
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@WNA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800F1230 (-SetAlphaMode@CHwDisplayRenderTarget@@WNA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetAlphaMode(CHwDisplayRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx
  _BYTE v5[4]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]

  if ( *((_DWORD *)this + 80) != a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      v4 = *((_QWORD *)this + 25) + 120LL;
      *((_DWORD *)this + 80) = a2;
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v5);
      v6 = *((_DWORD *)this + 80);
      v7 = *((_DWORD *)this + 81);
      (*(void (__fastcall **)(CHwDisplayRenderTarget *, _BYTE *))(*(_QWORD *)this + 240LL))(this, v5);
    }
  }
}
