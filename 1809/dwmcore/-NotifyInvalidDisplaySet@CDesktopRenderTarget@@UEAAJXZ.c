/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x18015A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800D82D8 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
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
  *((_BYTE *)this + 104) = 1;
  return 0LL;
}
