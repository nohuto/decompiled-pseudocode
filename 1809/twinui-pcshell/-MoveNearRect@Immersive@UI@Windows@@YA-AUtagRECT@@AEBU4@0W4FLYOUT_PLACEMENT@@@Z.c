/*
 * XREFs of ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1803B3950
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1803B39D8 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::MoveNearRect(
        struct tagRECT *a1,
        struct tagRECT *a2,
        _DWORD *a3,
        int a4)
{
  int v6; // edx
  int v8; // r8d

  v6 = 0;
  if ( a4 < 0 )
    goto LABEL_10;
  if ( a4 <= 1 )
  {
    v8 = a3[1] - a2->bottom;
    goto LABEL_11;
  }
  if ( a4 == 2 )
  {
    v8 = a3[3] - a2->top;
    goto LABEL_11;
  }
  if ( a4 == 3 )
  {
    v8 = 0;
    v6 = *a3 - a2->right;
    goto LABEL_11;
  }
  if ( a4 != 4 )
  {
LABEL_10:
    v8 = 0;
    v6 = 0;
    goto LABEL_11;
  }
  v8 = 0;
  v6 = a3[2] - a2->left;
LABEL_11:
  *a1 = *a2;
  OffsetRect(a1, v6, v8);
  return a1;
}
