/*
 * XREFs of ?vDrawLine@@YAXPEAU_POINTFIX@@0PEAEJKPEAU_RECTL@@KPEAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x1C00DF360
 * Callers:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00DF100 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 * Callees:
 *     ?bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z @ 0x1C014FD80 (-bGIQtoIntegerLine@@YAHPEAU_POINTFIX@@0PEAU_RECTL@@PEAU_DDALINE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrawLine(
        struct _POINTFIX *a1,
        struct _POINTFIX *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6,
        unsigned int a7,
        struct _W32KCDD_ENG_CALLBACKS *a8)
{
  unsigned __int8 *v9; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  FIX y; // r10d
  FIX v15; // r14d
  FIX x; // r9d
  FIX v17; // ecx
  int v18; // r14d
  int v19; // r9d
  int v20; // r10d
  int v21; // edx
  LONG v22; // r15d
  LONG v23; // r11d
  int v24; // ecx
  int v25; // r8d
  void (* near *v26)(unsigned __int8 *, int, int, unsigned int); // r10
  struct _POINTFIX **v27; // rsi
  int v28; // edx
  __int64 v29; // r8
  unsigned int v30; // ecx
  int v31; // ecx
  bool v32; // zf
  LONG left; // eax
  LONG right; // ecx
  int v35; // edx
  int v36; // edx
  int v37; // eax
  LONG v38; // eax
  unsigned int v39; // [rsp+30h] [rbp-A8h]
  LONG bottom; // [rsp+34h] [rbp-A4h]
  __int64 v41; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+40h] [rbp-98h]
  __int64 v43; // [rsp+50h] [rbp-88h]
  struct _W32KCDD_ENG_CALLBACKS *v44; // [rsp+58h] [rbp-80h]
  LONG top; // [rsp+60h] [rbp-78h]
  struct _POINTFIX *v46; // [rsp+68h] [rbp-70h] BYREF
  struct _W32KCDD_ENG_CALLBACKS *v47; // [rsp+70h] [rbp-68h]
  unsigned __int8 *v48; // [rsp+78h] [rbp-60h]
  struct _POINTFIX *v49; // [rsp+80h] [rbp-58h] BYREF
  int v50; // [rsp+88h] [rbp-50h]
  LONG v51; // [rsp+8Ch] [rbp-4Ch]

  v9 = a3;
  v48 = a3;
  v49 = a2;
  v46 = a1;
  v12 = a4;
  v42 = 0LL;
  v43 = 0LL;
  v41 = 0LL;
  v44 = a8;
  v13 = 6;
  if ( !a8 )
    v13 = a7;
  v39 = v13;
  y = a2->y;
  v15 = a1->y;
  x = a2->x;
  if ( (((unsigned __int8)a1->x | (unsigned __int8)(v15 | x | y)) & 0xF) != 0 )
    goto LABEL_36;
  v17 = a1->x >> 4;
  v18 = v15 >> 4;
  v19 = x >> 4;
  v20 = y >> 4;
  HIDWORD(v41) = v17;
  LODWORD(v42) = v18;
  v21 = 0;
  if ( v19 < v17 )
    v21 = 4;
  LODWORD(v41) = v21;
  v22 = v17;
  if ( v19 >= v17 )
  {
    v22 = v19;
    v19 = v17;
  }
  if ( v20 < v18 )
  {
    v21 |= 2u;
    LODWORD(v41) = v21;
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
    v9 = v48;
    if ( v20 >= bottom )
      return;
    if ( v22 >= right || v19 < left || v23 >= bottom || v20 < top )
    {
LABEL_36:
      if ( !(unsigned int)bGIQtoIntegerLine(v46, v49, a6, (struct _DDALINE *)&v41) || SDWORD1(v42) <= 0 )
        return;
      if ( (v41 & 2) != 0 )
        v12 = -a4;
LABEL_29:
      ((void (__fastcall *)(__int64 *, unsigned __int8 *, _QWORD, _QWORD))(&gapfnOctant)[8 * v39 + (v41 & 7)])(
        &v41,
        &v9[(int)(v42 * a4)],
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
      v46 = 0LL;
      v47 = 0LL;
      if ( a8 )
      {
        LODWORD(v46) = v18;
        v47 = a8;
        v27 = &v46;
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
    v35 = v21 & 2;
    DWORD1(v42) = v22 - v19;
    DWORD2(v42) = 2 * v24;
    HIDWORD(v42) = 2 * v25;
    v31 = v19 + (v35 != 0) - 1 - v22;
    v12 = -a4;
    v32 = v35 == 0;
    goto LABEL_27;
  }
  if ( !v25 )
    return;
  if ( v24 || !a8 )
  {
    LODWORD(v41) = v21 | 1;
    HIDWORD(v43) = 1;
    DWORD1(v42) = v23 - v20;
    DWORD2(v42) = 2 * v25;
    HIDWORD(v42) = 2 * v24;
    v31 = ((v21 & 4) != 0) - 1 - v25;
    v12 = -a4;
    v32 = (v21 & 2) == 0;
LABEL_27:
    LODWORD(v43) = v31;
    if ( v32 )
      v12 = a4;
    goto LABEL_29;
  }
  v36 = v21 & 2;
  LODWORD(v49) = v19;
  v37 = v20 + 1;
  if ( !v36 )
    v37 = v20;
  HIDWORD(v49) = v37;
  v50 = v19 + 1;
  v38 = v23 + 1;
  if ( !v36 )
    v38 = v23;
  v51 = v38;
  (*((void (__fastcall **)(struct _W32KCDD_ENG_CALLBACKS *, _QWORD, struct _POINTFIX **))a8 + 1))(a8, a5, &v49);
}
