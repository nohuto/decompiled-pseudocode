/*
 * XREFs of ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00DC218
 * Callers:
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall vDIBPatBlt(struct SURFACE *a1, struct _CLIPOBJ *a2, struct _RECTL *a3, struct _BRUSHOBJ *a4)
{
  int v6; // edi
  int v7; // r15d
  unsigned int i; // ebx
  LONG *v9; // rdx
  LONG left; // ecx
  LONG right; // r8d
  LONG top; // eax
  LONG v13; // r9d
  LONG bottom; // r10d
  _DWORD v15[84]; // [rsp+A0h] [rbp-198h] BYREF

  memset(v15, 0, 0x144uLL);
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( a2->iDComplexity == 1 )
    {
      v7 = 1;
      v15[0] = 1;
      *(RECTL *)&v15[1] = a2->rclBounds;
    }
    else if ( a2->iDComplexity == 3 )
    {
      v6 = 1;
      v7 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
    }
  }
  if ( v7 )
  {
    if ( !v6 )
      goto LABEL_10;
    do
    {
      v6 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)v15, 0LL);
LABEL_10:
      for ( i = 0; i < v15[0]; ++i )
      {
        v9 = &v15[4 * i + 1];
        left = a3->left;
        if ( *v9 < a3->left )
          *v9 = left;
        else
          left = v15[4 * i + 1];
        right = a3->right;
        if ( v9[2] > right )
          v9[2] = right;
        else
          right = v9[2];
        top = a3->top;
        if ( v9[1] < top )
          v9[1] = top;
        else
          top = v9[1];
        v13 = v9[3];
        bottom = a3->bottom;
        if ( v13 > bottom )
        {
          v9[3] = bottom;
          v13 = bottom;
        }
        if ( top < v13 && left < right )
          _guard_dispatch_icall_fptr();
      }
    }
    while ( v6 );
  }
  else
  {
    _guard_dispatch_icall_fptr();
  }
}
