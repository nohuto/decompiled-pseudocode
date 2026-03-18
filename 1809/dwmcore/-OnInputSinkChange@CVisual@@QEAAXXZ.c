/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x18009FB94
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18009EFE4 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18009FACC (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18002951C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  if ( CVisual::GetInputHandle(this) )
    *((_QWORD *)this + 56) = 0LL;
  CVisual::PropagateFlags(this, 16LL);
  *((_BYTE *)this + 92) |= 0x80u;
}
