/*
 * XREFs of ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800CD568
 * Callers:
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800CD0A8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800CD540 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801A8C7C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 * Callees:
 *     ?QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z @ 0x1800CD5B4 (-QueuePostPresentResponse@CLegacySurfaceManager@@QEAAJPEAVCResponseItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResponseItem::QueueResponse(CResponseItem *this)
{
  unsigned int v1; // edi
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 32) && !*((_BYTE *)this + 33) )
  {
    v3 = CLegacySurfaceManager::QueuePostPresentResponse((CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 104LL), this);
    v1 = v3;
    if ( v3 < 0 )
      (*(void (__fastcall **)(CResponseItem *, _QWORD))(*(_QWORD *)this + 48LL))(this, (unsigned int)v3);
    else
      *((_BYTE *)this + 32) = 1;
  }
  return v1;
}
