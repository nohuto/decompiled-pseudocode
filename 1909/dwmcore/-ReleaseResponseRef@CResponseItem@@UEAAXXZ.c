/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800CD540
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800CD428 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800CD568 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CDirtyRegion::Release(this);
}
