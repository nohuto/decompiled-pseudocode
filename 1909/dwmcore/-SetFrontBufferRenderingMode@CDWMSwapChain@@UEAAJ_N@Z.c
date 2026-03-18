/*
 * XREFs of ?SetFrontBufferRenderingMode@CDWMSwapChain@@UEAAJ_N@Z @ 0x180162F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDWMSwapChain::SetFrontBufferRenderingMode(CDWMSwapChain *this, unsigned __int8 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 53) + 272LL))(*((_QWORD *)this + 53), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x521,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\dwmswapchain.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
