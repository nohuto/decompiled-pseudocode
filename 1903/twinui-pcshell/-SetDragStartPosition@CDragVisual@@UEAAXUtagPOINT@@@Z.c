/*
 * XREFs of ?SetDragStartPosition@CDragVisual@@UEAAXUtagPOINT@@@Z @ 0x1803D8B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_CheckDragStartBounds@CDragVisual@@AEAAXXZ @ 0x1803D95C0 (-_CheckDragStartBounds@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::SetDragStartPosition(struct tagPOINT *this, struct tagPOINT a2)
{
  this[19] = a2;
  if ( this[27].x < this[28].x && this[27].y < this[28].y )
    CDragVisual::_CheckDragStartBounds((CDragVisual *)&this[-3]);
  this[39] = a2;
}
