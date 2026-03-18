/*
 * XREFs of ??_ECChannelContext@@UEAAPEAXI@Z @ 0x1800CF7A0
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180045548 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x1800CF7E0 (--1CChannelContext@@UEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CChannelContext *__fastcall CChannelContext::`vector deleting destructor'(CChannelContext *this, char a2)
{
  CChannelContext::~CChannelContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
