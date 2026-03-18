/*
 * XREFs of ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x18023BBB0
 * Callers:
 *     ??_ECInteractionRoot@@W7EAAPEAXI@Z @ 0x1800ED710 (--_ECInteractionRoot@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18002936C (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CInteractionRoot *__fastcall CInteractionRoot::`scalar deleting destructor'(CInteractionRoot *this, char a2)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 32));
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 3);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
