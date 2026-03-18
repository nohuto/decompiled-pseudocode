/*
 * XREFs of ?ReleaseExclusivePresentData@CHolographicManager@@QEAAXI@Z @ 0x18020B650
 * Callers:
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18020CA10 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x18020CD50 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEX.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ReleaseExclusivePresentData(CHolographicInteropTaskQueue **this, unsigned int a2)
{
  if ( this[5] )
  {
    if ( *((_BYTE *)this + 216) )
      CHolographicInteropTaskQueue::PostMessageW(this[5], 0x17u, 0LL, (void *)a2, 0LL, 0LL, 0LL);
  }
}
