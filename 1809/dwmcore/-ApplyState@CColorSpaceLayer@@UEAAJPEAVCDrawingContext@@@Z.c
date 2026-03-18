/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18017B1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 6350);
  *((_BYTE *)a2 + 6350) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
