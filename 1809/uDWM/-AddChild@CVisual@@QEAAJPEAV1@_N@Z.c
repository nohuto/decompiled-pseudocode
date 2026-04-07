/*
 * XREFs of ?AddChild@CVisual@@QEAAJPEAV1@_N@Z @ 0x1800883C4
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CVisual::AddChild(CVisual *this, struct CVisual *a2, bool a3)
{
  return VisualCollection::InsertRelative((CVisual *)((char *)this + 32), a2, 0LL, 0, a3);
}
