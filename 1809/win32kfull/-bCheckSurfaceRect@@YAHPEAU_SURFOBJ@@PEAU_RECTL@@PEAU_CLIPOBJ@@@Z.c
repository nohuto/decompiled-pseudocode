/*
 * XREFs of ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C008FCA0
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngCopyBits @ 0x1C01475B0 (NtGdiEngCopyBits.c)
 *     NtGdiEngBitBlt @ 0x1C0147840 (NtGdiEngBitBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngAlphaBlend @ 0x1C0296030 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02966A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C0297120 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02972D0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C0297DC0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfaceRect(struct _SURFOBJ *a1, struct _RECTL *p_rclBounds, struct _CLIPOBJ *a3)
{
  unsigned int v5; // edi
  BOOL v6; // eax
  HDEV hdev; // rax
  int v9; // ecx
  int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v5 = 1;
  if ( a1 )
  {
    if ( a3 )
      v6 = a3->iDComplexity == 0;
    else
      v6 = 1;
    if ( !v6 )
      p_rclBounds = &a3->rclBounds;
    if ( p_rclBounds )
    {
      if ( p_rclBounds->left > p_rclBounds->right || p_rclBounds->top > p_rclBounds->bottom )
        v5 = 0;
      v11 = (__int128)*p_rclBounds;
      if ( *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0 )
      {
        hdev = a1->hdev;
        if ( hdev )
        {
          if ( ((_DWORD)hdev[10] & 0x20000) != 0 )
          {
            v9 = *((_DWORD *)hdev + 646);
            p_rclBounds = (struct _RECTL *)&v11;
            LODWORD(v11) = v11 - v9;
            DWORD2(v11) -= v9;
            v10 = *((_DWORD *)hdev + 647);
            DWORD1(v11) -= v10;
            HIDWORD(v11) -= v10;
          }
        }
      }
      if ( v5
        && (p_rclBounds->right > a1->sizlBitmap.cx
         || p_rclBounds->left < 0
         || p_rclBounds->bottom > a1->sizlBitmap.cy
         || p_rclBounds->top < 0) )
      {
        return 0;
      }
    }
  }
  return v5;
}
