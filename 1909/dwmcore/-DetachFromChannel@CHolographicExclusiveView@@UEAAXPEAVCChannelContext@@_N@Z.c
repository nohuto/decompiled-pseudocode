/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180243780
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x1802406FC (-ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x180240864 (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180243BF4 (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DetachFromChannel(
        CHolographicExclusiveView *this,
        struct CChannelContext *a2)
{
  void *v3; // rcx
  CHolographicInteropTaskQueue **v4; // rcx

  CHolographicExclusiveView::ReleaseSwapChain(this);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  v4 = (CHolographicInteropTaskQueue **)*((_QWORD *)this + 7);
  if ( v4 )
  {
    CHolographicManager::ReleaseExclusivePresentData(v4, *((_DWORD *)this + 16));
    CHolographicManager::RemoveExclusiveView(*((CHolographicManager **)this + 7), (struct IUnknown *)this);
  }
}
