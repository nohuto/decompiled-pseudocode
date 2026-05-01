/*
 * XREFs of ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x18029A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180299AD8 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 */

__int64 __fastcall ViewWrapperBase::SetPosition(ViewWrapperBase *this, const struct tagRECT *a2)
{
  ViewWrapperBase::SetDesiredPosition(this, a2->left, a2->top, a2->right - a2->left, a2->bottom - a2->top, 3, 0LL);
  return 0LL;
}
