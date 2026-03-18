/*
 * XREFs of ??_ECChannelContext@@UEAAPEAXI@Z @ 0x18004B140
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x18004C6C0 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1CChannelContext@@UEAA@XZ @ 0x18004B180 (--1CChannelContext@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
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
