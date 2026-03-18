/*
 * XREFs of ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x1C001B04C
 * Callers:
 *     ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x1C001B020 (-Release@CCompositionFrameCollection@@UEAAJXZ.c)
 * Callees:
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C001B110 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 */

CCompositionFrameCollection *__fastcall CCompositionFrameCollection::`scalar deleting destructor'(
        CCompositionFrameCollection *P)
{
  *(_QWORD *)P = &CCompositionFrameCollection::`vftable';
  CCompositionFrameCollection::DiscardAllCompositionFrames(P);
  ExFreePoolWithTag(P, 0);
  return P;
}
