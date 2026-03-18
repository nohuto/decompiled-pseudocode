/*
 * XREFs of ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18017ED60
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801C127C (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801C2DD4 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x18017ECF4 (--1CMoveRenderPassInfo@@UEAA@XZ.c)
 */

void **__fastcall CMoveRenderPassInfo::`scalar deleting destructor'(void **this, char a2)
{
  CMoveRenderPassInfo::~CMoveRenderPassInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
