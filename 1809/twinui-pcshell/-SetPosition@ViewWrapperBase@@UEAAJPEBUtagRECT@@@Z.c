/*
 * XREFs of ?SetPosition@ViewWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x1802441E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802439D8 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 */

__int64 __fastcall ViewWrapperBase::SetPosition(ViewWrapperBase *this, const struct tagRECT *a2)
{
  ViewWrapperBase::SetDesiredPosition(this, a2->left, a2->top, a2->right - a2->left, a2->bottom - a2->top, 3, 0LL);
  return 0LL;
}
