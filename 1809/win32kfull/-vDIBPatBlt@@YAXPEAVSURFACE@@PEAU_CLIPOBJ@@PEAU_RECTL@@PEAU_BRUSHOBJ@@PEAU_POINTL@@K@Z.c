/*
 * XREFs of ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00F1A70
 * Callers:
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall vDIBPatBlt(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6)
{
  int v9; // edi
  int v10; // r15d
  void (**v11)(struct _PATBLTFRAME *); // r12
  int v12; // ebx
  _QWORD *pvRbrush; // rcx
  unsigned int i; // ebx
  LONG *v15; // rdx
  LONG v16; // ecx
  LONG left; // eax
  LONG v18; // r9d
  LONG right; // eax
  LONG v20; // r8d
  LONG top; // eax
  LONG v22; // eax
  LONG bottom; // r10d
  _QWORD v25[2]; // [rsp+60h] [rbp-1D8h] BYREF
  int v26; // [rsp+70h] [rbp-1C8h]
  int v27; // [rsp+74h] [rbp-1C4h]
  struct _RECTL *v28; // [rsp+78h] [rbp-1C0h]
  int v29; // [rsp+80h] [rbp-1B8h]
  LONG y; // [rsp+84h] [rbp-1B4h]
  int v31; // [rsp+88h] [rbp-1B0h]
  int v32; // [rsp+8Ch] [rbp-1ACh]
  int v33; // [rsp+90h] [rbp-1A8h]
  _DWORD v34[84]; // [rsp+A0h] [rbp-198h] BYREF

  memset(v34, 0, 0x144uLL);
  v9 = 0;
  v10 = 0;
  v11 = (void (**)(struct _PATBLTFRAME *))(&apfnPatBlt)[3 * *((unsigned int *)a1 + 24) + a6];
  v12 = *((_DWORD *)&aulMulFormat + *((unsigned int *)a1 + 24));
  v33 = v12;
  if ( a2 )
  {
    if ( a2->iDComplexity == 1 )
    {
      v10 = 1;
      v34[0] = 1;
      *(RECTL *)&v34[1] = a2->rclBounds;
    }
    else if ( a2->iDComplexity == 3 )
    {
      v9 = 1;
      v10 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
    }
  }
  v25[0] = *((_QWORD *)a1 + 10);
  v26 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v25[1] = pvRbrush[4];
  v27 = *((_DWORD *)pvRbrush + 7);
  v31 = v12 * *((_DWORD *)pvRbrush + 5);
  v32 = *((_DWORD *)pvRbrush + 6);
  v29 = v12 * a5->x;
  y = a5->y;
  if ( v10 )
  {
    if ( !v9 )
      goto LABEL_10;
    do
    {
      v9 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)v34, 0LL);
LABEL_10:
      for ( i = 0; i < v34[0]; ++i )
      {
        v15 = &v34[4 * i + 1];
        v16 = *v15;
        left = a3->left;
        if ( *v15 < a3->left )
        {
          *v15 = left;
          v16 = left;
        }
        v18 = v15[2];
        right = a3->right;
        if ( v18 > right )
        {
          v15[2] = right;
          v18 = right;
        }
        v20 = v15[1];
        top = a3->top;
        if ( v20 < top )
        {
          v15[1] = top;
          v20 = top;
        }
        v22 = v15[3];
        bottom = a3->bottom;
        if ( v22 > bottom )
        {
          v15[3] = bottom;
          v22 = bottom;
        }
        if ( v20 < v22 && v16 < v18 )
        {
          v28 = (struct _RECTL *)&v34[4 * i + 1];
          ((void (__fastcall *)(_QWORD *))v11)(v25);
        }
      }
    }
    while ( v9 );
  }
  else
  {
    v28 = a3;
    ((void (__fastcall *)(_QWORD *))v11)(v25);
  }
}
