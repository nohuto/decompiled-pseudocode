/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0090478
 * Callers:
 *     EngGradientFill @ 0x1C00909F0 (EngGradientFill.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C0090878 (-MDiv64@@YA_J_J00@Z.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00908C0 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C0090970 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bRectangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        int a4,
        struct _GRADIENT_RECT *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  unsigned int v12; // r14d
  __int64 i; // rbx
  ULONG UpperLeft; // edx
  ULONG LowerRight; // ecx
  struct _TRIVERTEX *v16; // r8
  struct _TRIVERTEX *v17; // r9
  LONG x; // ecx
  LONG v19; // r10d
  int v20; // r10d
  int v21; // r11d
  void (*v22)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r15
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  LONG v29; // eax
  LONG v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  __int64 v34; // [rsp+28h] [rbp-190h]
  __int64 v35; // [rsp+38h] [rbp-180h] BYREF
  void (*v36)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+40h] [rbp-178h] BYREF
  __int64 v37; // [rsp+48h] [rbp-170h]
  __int64 v38; // [rsp+50h] [rbp-168h]
  __int64 v39; // [rsp+58h] [rbp-160h]
  struct _TRIVERTEX *v40; // [rsp+60h] [rbp-158h]
  struct SURFACE *v41; // [rsp+68h] [rbp-150h]
  struct _GRADIENT_RECT *v42; // [rsp+70h] [rbp-148h]
  __int64 v43; // [rsp+78h] [rbp-140h]
  void (*v44)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+80h] [rbp-138h] BYREF
  __int128 v45; // [rsp+90h] [rbp-128h] BYREF
  LONG v46; // [rsp+A0h] [rbp-118h]
  LONG y; // [rsp+A4h] [rbp-114h]
  LONG v48; // [rsp+A8h] [rbp-110h]
  LONG v49; // [rsp+ACh] [rbp-10Ch]
  unsigned __int64 v50; // [rsp+C0h] [rbp-F8h]
  unsigned __int64 v51; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v52; // [rsp+D0h] [rbp-E8h]
  unsigned __int64 v53; // [rsp+D8h] [rbp-E0h]
  __int128 v54; // [rsp+E0h] [rbp-D8h]
  __int128 v55; // [rsp+F0h] [rbp-C8h]
  __int128 v56; // [rsp+100h] [rbp-B8h]
  __int128 v57; // [rsp+110h] [rbp-A8h]
  __int64 v58; // [rsp+120h] [rbp-98h]
  unsigned int v59; // [rsp+128h] [rbp-90h]
  struct _XLATEOBJ *v60; // [rsp+130h] [rbp-88h]
  __int64 *v61; // [rsp+138h] [rbp-80h]
  struct _TRIVERTEX v62; // [rsp+150h] [rbp-68h] BYREF
  struct _TRIVERTEX v63; // [rsp+160h] [rbp-58h] BYREF

  v41 = a1;
  v40 = a3;
  v42 = a5;
  v12 = 1;
  v35 = *((_QWORD *)a1 + 16);
  if ( v35 || (v43 = *((_QWORD *)a1 + 6), (v35 = *(_QWORD *)(v43 + 1808)) != 0) )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v35, &v44, &v36);
    v60 = a2;
    v61 = &v35;
    v58 = (__int64)*a9;
    v45 = (__int128)*a8;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a6 )
        return v12;
      UpperLeft = a5[i].UpperLeft;
      LowerRight = a5[i].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v63 = a3[UpperLeft];
      v62 = a3[LowerRight];
      v16 = &v63;
      v17 = &v62;
      if ( !a7 )
        break;
      if ( v63.y > v62.y )
      {
        v16 = &v62;
        v17 = &v63;
      }
      x = v16->x;
      v19 = v17->x;
      if ( v16->x > v17->x )
      {
        v17->x = x;
        v16->x = v19;
        x = v19;
LABEL_26:
        v19 = v17->x;
      }
      v46 = x;
      y = v16->y;
      v48 = v19;
      v49 = v17->y;
      v59 = a7;
      v20 = v19 - x;
      v21 = v49 - y;
      if ( v20 > 0 && v21 > 0 )
      {
        v50 = (unsigned __int64)v16->Red << 40;
        v51 = (unsigned __int64)v16->Green << 40;
        v52 = (unsigned __int64)v16->Blue << 40;
        v53 = (unsigned __int64)v16->Alpha << 40;
        v37 = ((unsigned __int64)v17->Red << 40) - v50;
        v38 = ((unsigned __int64)v17->Green << 40) - v51;
        v39 = ((unsigned __int64)v17->Blue << 40) - v52;
        v34 = ((unsigned __int64)v17->Alpha << 40) - v53;
        v22 = v36;
        if ( a7 )
        {
          v56 = 0LL;
          v57 = 0LL;
          *(_QWORD *)&v54 = MDiv64(v37, 1LL, v21);
          *((_QWORD *)&v54 + 1) = MDiv64(v38, 1LL, v23);
          *(_QWORD *)&v55 = MDiv64(v39, 1LL, v24);
          *((_QWORD *)&v55 + 1) = MDiv64(v34, 1LL, v25);
        }
        else
        {
          v54 = 0LL;
          v55 = 0LL;
          *(_QWORD *)&v56 = MDiv64(v37, 1LL, v20);
          *((_QWORD *)&v56 + 1) = MDiv64(v38, 1LL, v31);
          *(_QWORD *)&v57 = MDiv64(v39, 1LL, v32);
          *((_QWORD *)&v57 + 1) = MDiv64(v34, 1LL, v33);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v45) )
        {
          if ( bUMPDSecurityGateEx(v27, v26)
            && !v60
            && ((char *)v22 == (char *)vFillGRectDIB4 || (char *)v22 == (char *)vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1957);
            return 1LL;
          }
          ((void (__fastcall *)(struct SURFACE *, __int128 *))v22)(a1, &v45);
        }
      }
    }
    if ( v63.x > v62.x )
    {
      v16 = &v62;
      v17 = &v63;
    }
    v29 = v16->y;
    v30 = v17->y;
    if ( v29 > v30 )
    {
      v17->y = v29;
      v16->y = v30;
    }
    x = v16->x;
    goto LABEL_26;
  }
  return v12;
}
