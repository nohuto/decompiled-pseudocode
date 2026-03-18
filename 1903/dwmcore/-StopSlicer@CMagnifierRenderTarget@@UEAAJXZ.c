/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801AAFA0
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x1801AA53C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x1801AAAB0 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTAR.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801AAD50 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18019B4B4 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 684) )
  {
    *((_BYTE *)this + 684) = 0;
    *((_DWORD *)this + 167) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(
        (__int64)this,
        &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop,
        *((_QWORD *)this + 44),
        *((_DWORD *)this + 166));
    COffScreenRenderTarget::SetNeedsFlush(this);
  }
  return *((unsigned int *)this + 172);
}
