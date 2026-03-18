/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAA_NPEAVCRenderTarget@@@Z @ 0x180077164
 * Callers:
 *     ?DetachFromChannel@COverlayRenderTargetEngine@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180020860 (-DetachFromChannel@COverlayRenderTargetEngine@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18007D540 (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800C8740 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x18020B690 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18020C3F0 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SET.c)
 * Callees:
 *     ?NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z @ 0x1800772A4 (-NotifyIndirectSwapchainsOfTargetOcclusion@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r8
  char v7; // si
  char v8; // bp
  __int64 v9; // rax

  v4 = 0LL;
  v5 = *((_DWORD *)this + 12);
  v6 = *((_QWORD *)this + 3);
  v7 = 1;
  if ( v5 )
  {
    do
    {
      if ( a2 == *(struct CRenderTarget **)(v6 + 8 * v4) )
        break;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v5 );
  }
  if ( (unsigned int)v4 >= v5 )
    return 0;
  while ( (unsigned int)v4 < v5 - 1 )
  {
    *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8LL * (unsigned int)(v4 + 1));
    v4 = (unsigned int)(v4 + 1);
    v5 = *((_DWORD *)this + 12);
  }
  *((_DWORD *)this + 12) = v5 - 1;
  v8 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64, __int64))(*(_QWORD *)a2 + 48LL))(
         a2,
         76LL,
         v6) )
  {
    --*((_DWORD *)this + 24);
    v8 = 1;
    CRenderTargetManager::NotifyIndirectSwapchainsOfTargetOcclusion(this, a2, 0);
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 224LL))(a2) )
    {
      if ( (*((_DWORD *)this + 25))-- == 1 )
        DwmGenerateMoveData(0LL);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 80LL) )
    --*((_DWORD *)this + 26);
  if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 69LL) )
    --*((_DWORD *)this + 27);
  (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v8 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 360LL);
    if ( v9 )
      *(_BYTE *)(v9 + 20) = 1;
  }
  return v7;
}
