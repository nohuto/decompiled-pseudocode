/*
 * XREFs of ?OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x18006EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ @ 0x18006ECC0 (-GetGestureDirection@BamoEdgyControllerClientProxy@@UEAAAEBUD2D_VECTOR_2F@@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnGestureDirectionChanged(EdgyControllerClientProxy *this)
{
  __int64 v1; // rbx
  const struct D2D_VECTOR_2F *GestureDirection; // rax

  v1 = *((_QWORD *)this + 15);
  GestureDirection = BamoEdgyControllerClientProxy::GetGestureDirection((EdgyControllerClientProxy *)((char *)this + 8));
  return Edges::OnControllerGestureDirectionChanged((Edges *)(v1 + 72), this, GestureDirection);
}
