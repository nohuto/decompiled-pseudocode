/*
 * XREFs of ?SetAlphaMode@CHwCompSwapChainTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802404A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwCompSwapChainTarget::SetAlphaMode(CHwCompSwapChainTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rax
  _DWORD v5[4]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF

  (*(void (__fastcall **)(CHwCompSwapChainTarget *, _DWORD *))(*(_QWORD *)this + 24LL))(this, v5);
  if ( v5[1] != a2 )
  {
    v6[0] = v5[0];
    v6[2] = v5[2];
    v4 = *(_QWORD *)this;
    v6[1] = a2;
    (*(void (__fastcall **)(CHwCompSwapChainTarget *, _DWORD *))(v4 + 240))(this, v6);
  }
}
