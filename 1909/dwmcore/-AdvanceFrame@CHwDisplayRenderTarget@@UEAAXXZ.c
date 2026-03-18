/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ @ 0x1800626F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180064D10 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rax

  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 144)) >= 0 )
  {
    v2 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v2 + 313) )
    {
      if ( *(_BYTE *)(v2 + 314) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 288LL))(*((_QWORD *)this + 4));
    }
  }
}
