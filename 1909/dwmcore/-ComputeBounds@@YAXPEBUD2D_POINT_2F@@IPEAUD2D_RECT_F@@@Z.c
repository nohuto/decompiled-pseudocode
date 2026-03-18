/*
 * XREFs of ?ComputeBounds@@YAXPEBUD2D_POINT_2F@@IPEAUD2D_RECT_F@@@Z @ 0x18021C44C
 * Callers:
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x18021C584 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ComputeBounds(const struct D2D_POINT_2F *a1, __int64 a2, struct D2D_RECT_F *a3)
{
  FLOAT x; // xmm0_4
  __int64 v4; // rax
  float y; // xmm2_4
  const struct D2D_POINT_2F *v6; // rcx
  float v7; // xmm1_4
  float v8; // xmm0_4

  x = a1->x;
  v4 = 3LL;
  y = a1->y;
  v6 = a1 + 1;
  a3->right = x;
  a3->left = x;
  a3->bottom = y;
  a3->top = y;
  do
  {
    v7 = v6->x;
    if ( a3->left <= v6->x )
    {
      if ( v7 > a3->right )
        a3->right = v7;
    }
    else
    {
      a3->left = v7;
    }
    v8 = v6->y;
    if ( y <= v8 )
    {
      if ( v8 > a3->bottom )
        a3->bottom = v8;
    }
    else
    {
      y = v6->y;
    }
    ++v6;
    --v4;
  }
  while ( v4 );
  a3->top = y;
}
