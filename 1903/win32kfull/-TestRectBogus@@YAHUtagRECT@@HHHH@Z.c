/*
 * XREFs of ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C01D3AA4
 * Callers:
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01D37A8 (-IsRectBogus@@YAHHHHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TestRectBogus(struct tagRECT *a1, LONG a2, LONG a3, int a4, int a5)
{
  LONG left; // ebx
  LONG top; // ecx
  _BOOL8 result; // rax
  int v9; // esi

  left = a1->left;
  result = 0;
  if ( a2 > a1->left || (top = a1->top, a3 > top) || a4 < a1->right - left || a5 < a1->bottom - top )
  {
    v9 = a1->right - a4;
    if ( (int)abs32(a2 - (v9 + left) / 2) <= 8 && (int)abs32(a3 - (a1->top + a1->bottom - a5) / 2) <= 8 )
      return 1;
    if ( a2 == left || a3 == a1->top || a2 == v9 || a3 == a1->bottom - a5 )
      return 1;
  }
  return result;
}
