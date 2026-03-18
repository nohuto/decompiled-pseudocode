/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800CD650
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800CD538 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800CD678 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CDirtyRegion::Release(this);
}
