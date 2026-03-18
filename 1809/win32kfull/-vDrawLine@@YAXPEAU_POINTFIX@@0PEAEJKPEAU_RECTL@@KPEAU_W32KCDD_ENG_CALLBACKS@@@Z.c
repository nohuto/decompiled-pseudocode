/*
 * XREFs of ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00FD478
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00FD230 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C01504AC (-bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrawLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6,
        unsigned int a7,
        struct _POINTFIX *a8)
{
  unsigned __int8 *v9; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  FIX y; // ecx
  FIX v15; // r14d
  FIX x; // r10d
  FIX v17; // r9d
  int v18; // r14d
  int v19; // r10d
  int v20; // ecx
  int v21; // edx
  LONG v22; // r15d
  LONG v23; // r11d
  int v24; // r8d
  int v25; // r9d
  void (* near *v26)(unsigned __int8 *, int, int, unsigned int); // r11
  struct _POINTFIX **v27; // rsi
  int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // ecx
  int v31; // ecx
  bool v32; // zf
  int v33; // edx
  int v34; // eax
  LONG v35; // eax
  LONG left; // eax
  LONG right; // r9d
  int v38; // edx
  unsigned int v39; // [rsp+30h] [rbp-A8h]
  LONG bottom; // [rsp+34h] [rbp-A4h]
  _DWORD v41[2]; // [rsp+38h] [rbp-A0h] BYREF
  int v42; // [rsp+40h] [rbp-98h]
  int v43; // [rsp+44h] [rbp-94h]
  int v44; // [rsp+48h] [rbp-90h]
  int v45; // [rsp+4Ch] [rbp-8Ch]
  int v46; // [rsp+50h] [rbp-88h]
  int v47; // [rsp+54h] [rbp-84h]
  struct _POINTFIX *v48; // [rsp+58h] [rbp-80h]
  LONG top; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v50; // [rsp+68h] [rbp-70h]
  struct _POINTFIX *v51[2]; // [rsp+70h] [rbp-68h] BYREF
  struct _POINTFIX *v52; // [rsp+80h] [rbp-58h] BYREF
  int v53; // [rsp+88h] [rbp-50h]
  LONG v54; // [rsp+8Ch] [rbp-4Ch]

  v9 = a3;
  v50 = a3;
  v51[0] = a2;
  v52 = a1;
  v12 = a4;
  v41[0] = 0;
  v48 = a8;
  v13 = 6;
  if ( !a8 )
    v13 = a7;
  v39 = v13;
  y = a2->y;
  v15 = a1->y;
  x = a2->x;
  if ( (((unsigned __int8)a1->x | (unsigned __int8)(v15 | a2->x | y)) & 0xF) != 0 )
    goto LABEL_41;
  v17 = a1->x >> 4;
  v18 = v15 >> 4;
  v19 = x >> 4;
  v20 = y >> 4;
  v41[1] = v17;
  v42 = v18;
  v21 = 0;
  if ( v19 < v17 )
    v21 = 4;
  v41[0] = v21;
  v22 = v17;
  if ( v19 >= v17 )
  {
    v22 = v19;
    v19 = v17;
  }
  if ( v20 < v18 )
  {
    v21 |= 2u;
    v41[0] = v21;
  }
  v23 = v18;
  if ( v20 >= v18 )
  {
    v23 = v20;
    v20 = v18;
  }
  if ( a6 )
  {
    left = a6->left;
    if ( v22 < a6->left )
      return;
    right = a6->right;
    if ( v19 >= right )
      return;
    top = a6->top;
    if ( v23 < top )
      return;
    bottom = a6->bottom;
    v9 = v50;
    if ( v20 >= bottom )
      return;
    if ( v22 >= right || v23 >= bottom || v19 < left || v20 < top )
    {
LABEL_41:
      if ( !(unsigned int)bGIQtoIntegerLine(v52, v51[0], a6, (struct _DDALINE *)v41) || v43 <= 0 )
        return;
      if ( (v41[0] & 2) != 0 )
        v12 = -a4;
LABEL_29:
      ((void (__fastcall *)(_DWORD *, unsigned __int8 *, _QWORD, _QWORD))(&gapfnOctant)[8 * v39 + (v41[0] & 7)])(
        v41,
        &v9[v42 * a4],
        v12,
        a5);
      return;
    }
  }
  v24 = v22 - v19;
  v25 = v23 - v20;
  if ( v22 - v19 >= v23 - v20 )
  {
    if ( !v25 )
    {
      v26 = (&gapfnHorizontal)[v39];
      v27 = (struct _POINTFIX **)&v9[v18 * a4];
      if ( a8 )
      {
        LODWORD(v51[0]) = v18;
        v51[1] = a8;
        v27 = v51;
      }
      v28 = v21 & 4;
      v29 = (unsigned int)(v22 + 1);
      if ( !v28 )
        v29 = (unsigned int)v22;
      v30 = v19 + 1;
      if ( !v28 )
        v30 = v19;
      ((void (__fastcall *)(struct _POINTFIX **, _QWORD, __int64, _QWORD))v26)(v27, v30, v29, a5);
      return;
    }
    if ( !v24 )
      return;
    v38 = v21 & 2;
    v43 = v22 - v19;
    v44 = 2 * v24;
    v45 = 2 * v25;
    v31 = (v38 != 0) - 1 - v24;
    v12 = -a4;
    v32 = v38 == 0;
    goto LABEL_27;
  }
  if ( !v25 )
    return;
  if ( v24 || !a8 )
  {
    v41[0] = v21 | 1;
    v47 = 1;
    v43 = v23 - v20;
    v44 = 2 * v25;
    v45 = 2 * v24;
    v31 = ((v21 & 4) != 0) - 1 - v25;
    v12 = -a4;
    v32 = (v21 & 2) == 0;
LABEL_27:
    v46 = v31;
    if ( v32 )
      v12 = a4;
    goto LABEL_29;
  }
  v33 = v21 & 2;
  LODWORD(v52) = v19;
  v34 = v20 + 1;
  if ( !v33 )
    v34 = v20;
  HIDWORD(v52) = v34;
  v53 = v19 + 1;
  v35 = v23 + 1;
  if ( !v33 )
    v35 = v23;
  v54 = v35;
  ((void (__fastcall *)(struct _POINTFIX *, _QWORD, struct _POINTFIX **))a8[1])(a8, a5, &v52);
}
