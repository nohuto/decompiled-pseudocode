/*
 * XREFs of ?IsOpaqueRect@CColorBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180065DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CColorBrush::IsOpaqueRect(CColorBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  float v3; // xmm2_4
  bool result; // al
  struct D2D_RECT_F v5; // [rsp+0h] [rbp-18h]

  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 21) - 1.0)) & _xmm);
  if ( v3 >= 0.0000011920929 )
    return 0;
  result = 1;
  *(_QWORD *)&v5.left = 0LL;
  *(struct D2D_SIZE_F *)&v5.right = *a2;
  *a3 = v5;
  return result;
}
