/*
 * XREFs of ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1800C2CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C2D48 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetLogicalBackBuffer(CSwapChainBase **this, struct CD3DSurface **a2)
{
  int LogicalBackBuffer; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((unsigned __int8 (__fastcall **)(char *))*(this - 18) + 4))((char *)this - 144) )
  {
    LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(this[4], a2);
    if ( LogicalBackBuffer >= 0 )
      return 0LL;
    v6 = 656LL;
  }
  else
  {
    LogicalBackBuffer = -2003304307;
    v6 = 653LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwdisplayrendertarget.cpp",
    (const char *)(unsigned int)LogicalBackBuffer,
    v7);
  return (unsigned int)LogicalBackBuffer;
}
