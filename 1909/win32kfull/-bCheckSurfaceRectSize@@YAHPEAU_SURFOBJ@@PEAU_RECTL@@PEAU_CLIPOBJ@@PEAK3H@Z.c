/*
 * XREFs of ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C014AFD4
 * Callers:
 *     NtGdiEngStretchBlt @ 0x1C00A1240 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C014A3D0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C014A650 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C014AB20 (NtGdiEngBitBlt.c)
 *     NtGdiEngPlgBlt @ 0x1C02ABEE0 (NtGdiEngPlgBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckSurfaceRectSize(
        struct _SURFOBJ *a1,
        struct _RECTL *a2,
        struct _CLIPOBJ *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  int left; // r12d
  LONG top; // ebp
  LONG right; // r15d
  LONG bottom; // r14d
  RECTL *p_rclBounds; // rbx
  BOOL v13; // eax
  RECTL *v14; // rax
  LONG v15; // r8d
  LONG v16; // edx
  LONG v17; // r11d
  LONG v18; // ebx
  LONG v19; // r9d
  LONG v20; // r10d
  int v21; // r8d
  int v22; // ebx
  int v24; // ecx
  int v25; // ecx
  HDEV hdev; // rax
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx

  v5 = 0;
  left = 0;
  top = 0;
  right = 0;
  bottom = 0;
  p_rclBounds = 0LL;
  if ( !a1 )
    return 1;
  if ( a3 )
    v13 = a3->iDComplexity == 0;
  else
    v13 = 1;
  if ( !v13 )
  {
    p_rclBounds = &a3->rclBounds;
    top = a3->rclBounds.top;
    v14 = &a3->rclBounds;
    right = a3->rclBounds.right;
    bottom = a3->rclBounds.bottom;
LABEL_6:
    left = v14->left;
    if ( v14->left > right || top > bottom )
      return v5;
    goto LABEL_8;
  }
  if ( a2 )
  {
    top = a2->top;
    v14 = a2;
    right = a2->right;
    bottom = a2->bottom;
    goto LABEL_6;
  }
LABEL_8:
  if ( *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0 )
  {
    hdev = a1->hdev;
    if ( hdev )
    {
      if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
      {
        v27 = *((_DWORD *)hdev + 646);
        left -= v27;
        right -= v27;
        v28 = *((_DWORD *)hdev + 647);
        top -= v28;
        bottom -= v28;
      }
    }
  }
  if ( right <= a1->sizlBitmap.cx && left >= 0 && bottom <= a1->sizlBitmap.cy && top >= 0 )
  {
    if ( p_rclBounds )
    {
      if ( a2 )
      {
        v15 = p_rclBounds->right;
        v16 = p_rclBounds->left;
        v17 = p_rclBounds->top;
        v18 = p_rclBounds->bottom;
        v19 = a2->top;
        if ( v15 >= a2->right )
          v15 = a2->right;
        v20 = a2->bottom;
        if ( v16 <= a2->left )
          v16 = a2->left;
        v21 = v15 - v16;
        if ( v21 <= 0 )
          v21 = 0;
        *a4 = v21;
        if ( v17 <= v19 )
          v17 = v19;
        if ( v18 >= v20 )
          v18 = v20;
        v22 = v18 - v17;
        if ( v22 <= 0 )
          v22 = 0;
        *a5 = v22;
        return 1;
      }
      v29 = p_rclBounds->right - p_rclBounds->left;
      if ( v29 <= 0 )
        v29 = 0;
      *a4 = v29;
      v25 = p_rclBounds->bottom - p_rclBounds->top;
LABEL_36:
      if ( v25 <= 0 )
        v25 = 0;
      *a5 = v25;
      return 1;
    }
    if ( a2 )
    {
      v24 = a2->right - a2->left;
      if ( v24 <= 0 )
        v24 = 0;
      *a4 = v24;
      v25 = a2->bottom - a2->top;
      goto LABEL_36;
    }
    return 1;
  }
  return v5;
}
