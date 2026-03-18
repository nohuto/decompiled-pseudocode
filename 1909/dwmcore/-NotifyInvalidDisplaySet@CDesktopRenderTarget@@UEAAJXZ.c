/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x1801A7030
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x18002B42C (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyInvalidDisplaySet(CDesktopRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rdi

  v2 = *((_DWORD *)this + 8) - 1;
  for ( i = v2;
        i >= 0;
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                            + 8 * i--)
                                                                                + 64LL)) )
  {
    ;
  }
  CDesktopRenderTarget::ReleaseRenderTargets((CDesktopRenderTarget *)((char *)this - 168));
  *((_BYTE *)this + 152) = 1;
  return 0LL;
}
