/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x1800A9FDC
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x1800A8DB8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800AC82C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_SETINPUTSI.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x1800AA018 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  if ( CVisual::GetInputHandle(this) )
    *((_QWORD *)this + 56) = 0LL;
  CVisual::PropagateFlags((__int64)this, 0x10u, 0);
  *((_BYTE *)this + 92) |= 0x80u;
}
