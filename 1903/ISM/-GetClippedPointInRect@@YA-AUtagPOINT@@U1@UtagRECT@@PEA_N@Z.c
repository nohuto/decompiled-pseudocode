/*
 * XREFs of ?GetClippedPointInRect@@YA?AUtagPOINT@@U1@UtagRECT@@PEA_N@Z @ 0x1801256A8
 * Callers:
 *     ?ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z @ 0x180125548 (-ConvertDisplayRelativeMicrometersToScreen@GazeProcessor@@IEAAJUtagPOINT@@PEAU2@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall GetClippedPointInRect(struct tagPOINT a1, struct tagRECT *a2, bool *a3)
{
  LONG right; // edx
  LONG left; // eax
  LONG v7; // edx
  LONG x; // eax
  LONG top; // r9d
  LONG y; // edx
  __int64 v11; // [rsp+18h] [rbp+18h]

  if ( a1.x < a2->left )
    goto LABEL_8;
  right = a2->right;
  if ( a1.x < right && a1.y >= a2->top && a1.y < a2->bottom )
    return a1;
  if ( a2->left > a1.x )
  {
LABEL_8:
    left = a2->left;
    right = a2->right;
  }
  else
  {
    left = a1.x;
  }
  v7 = right - 1;
  if ( v7 >= left )
  {
    x = a1.x;
    if ( a2->left > a1.x )
      x = a2->left;
    LODWORD(v11) = x;
  }
  else
  {
    LODWORD(v11) = v7;
  }
  top = a2->top;
  a1.x = a1.y;
  y = a1.y;
  if ( top > a1.y )
    y = a2->top;
  if ( a2->bottom - 1 >= y )
  {
    if ( top > a1.y )
      a1.x = a2->top;
    HIDWORD(v11) = a1.x;
  }
  else
  {
    HIDWORD(v11) = a2->bottom - 1;
  }
  return (struct tagPOINT)v11;
}
