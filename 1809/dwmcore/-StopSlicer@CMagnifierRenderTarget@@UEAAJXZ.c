/*
 * XREFs of ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015DE50
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015D46C (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18015D998 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015DC10 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18001C788 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 */

__int64 __fastcall CMagnifierRenderTarget::StopSlicer(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 692) )
  {
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 169) = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xq(
        (__int64)this,
        &EVTDESC_ETWGUID_SLICER_CAPTURE_Stop,
        *((_QWORD *)this + 44),
        *((_DWORD *)this + 168));
    COffScreenRenderTarget::SetNeedsFlush(this);
  }
  return *((unsigned int *)this + 174);
}
