/*
 * XREFs of ?vOrder@EXFORMOBJ@@QEBAXAEAU_RECTL@@@Z @ 0x1C0019DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vOrder(float **this, struct _RECTL *a2)
{
  float *v3; // rdx
  LONG *p_right; // rax
  BOOL v6; // r10d
  LONG left; // ecx
  LONG v8; // r9d
  float v9; // xmm0_4
  LONG *p_top; // rcx
  LONG *p_bottom; // rdx
  LONG v12; // eax
  LONG v13; // r8d

  v3 = *this;
  p_right = &a2->right;
  v6 = **this < 0.0;
  if ( **this >= 0.0 )
  {
LABEL_2:
    left = a2->left;
    v8 = *p_right;
    if ( a2->left <= *p_right )
      goto LABEL_3;
    goto LABEL_11;
  }
  left = a2->left;
  v8 = *p_right;
  if ( a2->left >= *p_right )
  {
    if ( v6 )
      goto LABEL_3;
    goto LABEL_2;
  }
LABEL_11:
  a2->left = v8;
  *p_right = left;
  v3 = *this;
LABEL_3:
  v9 = v3[3];
  p_top = &a2->top;
  p_bottom = &a2->bottom;
  if ( v9 < 0.0 && (v12 = *p_top, v13 = *p_bottom, *p_top < *p_bottom)
    || v9 >= 0.0 && (v12 = *p_top, v13 = *p_bottom, *p_top > *p_bottom) )
  {
    *p_top = v13;
    *p_bottom = v12;
  }
}
