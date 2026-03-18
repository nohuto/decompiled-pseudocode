/*
 * XREFs of ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00E3690
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00E344C (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C012FDA4 (-bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrawLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned int a5,
        struct _RECTL *a6,
        unsigned int a7,
        struct _W32KCDD_ENG_CALLBACKS *a8)
{
  FIX y; // ecx
  FIX v11; // r14d
  FIX x; // r10d
  FIX v13; // r9d
  int v14; // r14d
  LONG v15; // r10d
  int v16; // ecx
  int v17; // edx
  LONG v18; // r15d
  LONG v19; // r11d
  int v20; // r8d
  int v21; // r9d
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  LONG v25; // eax
  LONG right; // r9d
  LONG top; // r12d
  LONG bottom; // [rsp+34h] [rbp-94h]
  _DWORD v29[3]; // [rsp+38h] [rbp-90h] BYREF
  int v30; // [rsp+44h] [rbp-84h]
  int v31; // [rsp+48h] [rbp-80h]
  int v32; // [rsp+4Ch] [rbp-7Ch]
  int v33; // [rsp+50h] [rbp-78h]
  int v34; // [rsp+54h] [rbp-74h]
  struct _W32KCDD_ENG_CALLBACKS *v35; // [rsp+58h] [rbp-70h]
  struct _POINTFIX *v36; // [rsp+60h] [rbp-68h]
  struct _W32KCDD_ENG_CALLBACKS *v37; // [rsp+68h] [rbp-60h]
  unsigned __int8 *v38; // [rsp+70h] [rbp-58h]
  struct _POINTFIX *v39; // [rsp+78h] [rbp-50h]
  int v40; // [rsp+80h] [rbp-48h]
  LONG v41; // [rsp+84h] [rbp-44h]

  v38 = a3;
  v36 = a2;
  v39 = a1;
  v29[0] = 0;
  v35 = a8;
  y = a2->y;
  v11 = a1->y;
  x = a2->x;
  if ( (((unsigned __int8)a1->x | (unsigned __int8)(v11 | a2->x | y)) & 0xF) != 0 )
    goto LABEL_34;
  v13 = a1->x >> 4;
  v14 = v11 >> 4;
  v15 = x >> 4;
  v16 = y >> 4;
  v29[1] = v13;
  v29[2] = v14;
  v17 = 0;
  if ( v15 < v13 )
    v17 = 4;
  v29[0] = v17;
  v18 = v13;
  if ( v15 >= v13 )
  {
    v18 = v15;
    v15 = v13;
  }
  if ( v16 < v14 )
  {
    v17 |= 2u;
    v29[0] = v17;
  }
  v19 = v14;
  if ( v16 >= v14 )
  {
    v19 = v16;
    v16 = v14;
  }
  if ( a6 )
  {
    if ( v18 < a6->left )
      return;
    right = a6->right;
    if ( v15 >= right )
      return;
    top = a6->top;
    if ( v19 < top )
      return;
    bottom = a6->bottom;
    if ( v16 >= bottom )
      return;
    if ( v18 >= right || v15 < a6->left || v16 < top || v19 >= bottom )
    {
LABEL_34:
      if ( !(unsigned int)bGIQtoIntegerLine(v39, v36, a6, (struct _DDALINE *)v29) || v30 <= 0 )
        return;
LABEL_22:
      _guard_dispatch_icall_fptr();
      return;
    }
  }
  v20 = v18 - v15;
  v21 = v19 - v16;
  if ( v18 - v15 >= v19 - v16 )
  {
    if ( !v21 )
    {
      if ( a8 )
      {
        LODWORD(v36) = v14;
        v37 = a8;
      }
      _guard_dispatch_icall_fptr();
      return;
    }
    if ( !v20 )
      return;
    v30 = v18 - v15;
    v31 = 2 * v20;
    v32 = 2 * v21;
    v22 = ((v17 & 2) != 0) - 1 - v20;
    goto LABEL_21;
  }
  if ( !v21 )
    return;
  if ( v20 || !a8 )
  {
    v29[0] = v17 | 1;
    v34 = 1;
    v30 = v19 - v16;
    v31 = 2 * v21;
    v32 = 2 * v20;
    v22 = ((v17 & 4) != 0) - 1 - v21;
LABEL_21:
    v33 = v22;
    goto LABEL_22;
  }
  v23 = v17 & 2;
  LODWORD(v39) = v15;
  v24 = v16 + 1;
  if ( !v23 )
    v24 = v16;
  HIDWORD(v39) = v24;
  v40 = v15 + 1;
  v25 = v19 + 1;
  if ( !v23 )
    v25 = v19;
  v41 = v25;
  _guard_dispatch_icall_fptr();
}
