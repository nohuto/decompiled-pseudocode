/*
 * XREFs of ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0261E8C
 * Callers:
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z @ 0x1C0263BA8 (-vTransparentScan@@YAXPEAU_SURFOBJ@@0KKPEAU_XLATEOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall GreTransparentBltPS(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        unsigned int a7)
{
  int v11; // ebx
  RECTL rclBounds; // xmm0
  unsigned int i; // edi
  LONG v14; // r9d
  LONG left; // r11d
  LONG right; // ecx
  LONG v17; // r8d
  LONG top; // r10d
  LONG v19; // edx
  LONG v20; // esi
  LONG bottom; // r14d
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  int v24; // esi
  int v25; // eax
  unsigned int v26; // [rsp+44h] [rbp-214h]
  struct _RECTL v27; // [rsp+50h] [rbp-208h] BYREF
  int v28; // [rsp+60h] [rbp-1F8h]
  struct _SURFOBJ *v29; // [rsp+68h] [rbp-1F0h]
  struct _SURFOBJ *v30; // [rsp+70h] [rbp-1E8h]
  struct _RECTL *v31; // [rsp+78h] [rbp-1E0h]
  __int64 v32; // [rsp+80h] [rbp-1D8h] BYREF
  char v33; // [rsp+88h] [rbp-1D0h]
  int v34; // [rsp+8Ch] [rbp-1CCh]
  struct _SURFOBJ *v35; // [rsp+90h] [rbp-1C8h]
  struct _SURFOBJ *v36; // [rsp+98h] [rbp-1C0h]
  struct _CLIPOBJ *v37; // [rsp+A0h] [rbp-1B8h]
  struct _XLATEOBJ *v38; // [rsp+A8h] [rbp-1B0h]
  struct _RECTL *v39; // [rsp+B0h] [rbp-1A8h]
  unsigned int v40; // [rsp+C0h] [rbp-198h] BYREF
  _OWORD v41[20]; // [rsp+C4h] [rbp-194h]

  v30 = a2;
  v29 = a1;
  v35 = a1;
  v36 = a2;
  v37 = a3;
  v39 = a5;
  v31 = a6;
  SURFOBJ_TO_SURFACE(a1);
  SURFOBJ_TO_SURFACE(a2);
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  if ( !a3 || !a3->iDComplexity )
  {
    rclBounds = *a5;
    goto LABEL_9;
  }
  if ( a3->iDComplexity == 1 )
  {
    rclBounds = a3->rclBounds;
LABEL_9:
    v11 = 0;
    v40 = 1;
    v41[0] = rclBounds;
    goto LABEL_10;
  }
  if ( a3->iDComplexity != 3 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v32);
    return 0LL;
  }
  v11 = 1;
  XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
LABEL_10:
  if ( !a4 )
    a4 = xloIdent;
  v38 = a4;
  if ( !v11 )
    goto LABEL_14;
  do
  {
    v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)&v40, 0LL);
LABEL_14:
    for ( i = 0; i < v40; ++i )
    {
      v14 = v41[i];
      left = a5->left;
      if ( v14 < a5->left )
      {
        LODWORD(v41[i]) = left;
        v14 = left;
      }
      right = a5->right;
      if ( SDWORD2(v41[i]) <= right )
        right = DWORD2(v41[i]);
      else
        DWORD2(v41[i]) = right;
      v17 = DWORD1(v41[i]);
      top = a5->top;
      if ( v17 >= top )
      {
        v19 = DWORD1(v41[i]);
      }
      else
      {
        DWORD1(v41[i]) = top;
        v17 = top;
        v19 = top;
      }
      v20 = HIDWORD(v41[i]);
      bottom = a5->bottom;
      if ( v20 > bottom )
      {
        HIDWORD(v41[i]) = bottom;
        v20 = bottom;
      }
      if ( v17 < v20 && v14 < right )
      {
        v27.left = v14;
        v27.top = v19;
        v27.right = right;
        v27.bottom = v19 + 1;
        v22 = v14 + v31->left - left;
        v26 = v22;
        v23 = v19 + v31->top - top;
        v24 = v20 - v19;
        while ( 1 )
        {
          v25 = v24--;
          v28 = v24;
          if ( !v25 )
            break;
          vTransparentScan(v29, v30, v22, v23, a4, &v27, a7);
          v22 = v26;
          ++v23;
          ++v27.top;
          ++v27.bottom;
        }
      }
    }
  }
  while ( v11 );
  SURFMEM::~SURFMEM((SURFMEM *)&v32);
  return 1LL;
}
