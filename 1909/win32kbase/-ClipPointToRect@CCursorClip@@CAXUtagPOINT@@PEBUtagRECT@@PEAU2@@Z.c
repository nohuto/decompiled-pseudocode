/*
 * XREFs of ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C0052D50
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU2@@Z @ 0x1C0052AC0 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositio.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C0052BF4 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z @ 0x1C0052CFC (-ApplyShellClip@CCursorClip@@AEAAXUtagPOINT@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorClip::ClipPointToRect(struct tagPOINT a1, const struct tagRECT *a2, struct tagPOINT *a3)
{
  LONG left; // eax
  LONG right; // eax
  LONG y; // ecx
  LONG top; // eax
  LONG bottom; // eax

  *a3 = a1;
  left = a2->left;
  if ( a1.x >= a2->left )
  {
    right = a2->right;
    if ( a1.x < right )
      goto LABEL_3;
    left = right - 1;
  }
  a3->x = left;
LABEL_3:
  y = a3->y;
  top = a2->top;
  if ( y < top )
  {
LABEL_9:
    a3->y = top;
    return;
  }
  bottom = a2->bottom;
  if ( y >= bottom )
  {
    top = bottom - 1;
    goto LABEL_9;
  }
}
