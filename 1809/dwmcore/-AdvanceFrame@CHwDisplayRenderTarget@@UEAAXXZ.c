/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18005AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18005B20C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this)
{
  __int64 v2; // rax

  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 208)) >= 0 )
  {
    v2 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v2 + 321) )
    {
      if ( *(_BYTE *)(v2 + 322) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 280LL))(*((_QWORD *)this + 4));
    }
  }
}
