/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00B08B0
 * Callers:
 *     EngGradientFill @ 0x1C00B04D0 (EngGradientFill.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C00B0CB0 (-MDiv64@@YA_J_J00@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00B13C0 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00B1470 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  LONG v27; // eax
  LONG v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // [rsp+28h] [rbp-190h]
  __int64 v33; // [rsp+38h] [rbp-180h] BYREF
  void (*v34)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+40h] [rbp-178h] BYREF
  __int64 v35; // [rsp+48h] [rbp-170h]
  __int64 v36; // [rsp+50h] [rbp-168h]
  __int64 v37; // [rsp+58h] [rbp-160h]
  struct _TRIVERTEX *v38; // [rsp+60h] [rbp-158h]
  struct SURFACE *v39; // [rsp+68h] [rbp-150h]
  struct _GRADIENT_RECT *v40; // [rsp+70h] [rbp-148h]
  __int64 v41; // [rsp+78h] [rbp-140h]
  void (*v42)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+80h] [rbp-138h] BYREF
  __int128 v43; // [rsp+90h] [rbp-128h] BYREF
  LONG v44; // [rsp+A0h] [rbp-118h]
  LONG y; // [rsp+A4h] [rbp-114h]
  LONG v46; // [rsp+A8h] [rbp-110h]
  LONG v47; // [rsp+ACh] [rbp-10Ch]
  unsigned __int64 v48; // [rsp+C0h] [rbp-F8h]
  unsigned __int64 v49; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 v50; // [rsp+D0h] [rbp-E8h]
  unsigned __int64 v51; // [rsp+D8h] [rbp-E0h]
  __int128 v52; // [rsp+E0h] [rbp-D8h]
  __int128 v53; // [rsp+F0h] [rbp-C8h]
  __int128 v54; // [rsp+100h] [rbp-B8h]
  __int128 v55; // [rsp+110h] [rbp-A8h]
  __int64 v56; // [rsp+120h] [rbp-98h]
  unsigned int v57; // [rsp+128h] [rbp-90h]
  struct _XLATEOBJ *v58; // [rsp+130h] [rbp-88h]
  __int64 *v59; // [rsp+138h] [rbp-80h]
  struct _TRIVERTEX v60; // [rsp+150h] [rbp-68h] BYREF
  struct _TRIVERTEX v61; // [rsp+160h] [rbp-58h] BYREF

  v39 = a1;
  v38 = a3;
  v40 = a5;
  v12 = 1;
  v33 = *((_QWORD *)a1 + 16);
  if ( v33 || (v41 = *((_QWORD *)a1 + 6), (v33 = *(_QWORD *)(v41 + 1800)) != 0) )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v33, &v42, &v34);
    v58 = a2;
    v59 = &v33;
    v56 = (__int64)*a9;
    v43 = (__int128)*a8;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a6 )
        return v12;
      UpperLeft = a5[i].UpperLeft;
      LowerRight = a5[i].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v61 = a3[UpperLeft];
      v60 = a3[LowerRight];
      v16 = &v61;
      v17 = &v60;
      if ( !a7 )
        break;
      if ( v61.y > v60.y )
      {
        v16 = &v60;
        v17 = &v61;
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
      v44 = x;
      y = v16->y;
      v46 = v19;
      v47 = v17->y;
      v57 = a7;
      v20 = v19 - x;
      v21 = v47 - y;
      if ( v20 > 0 && v21 > 0 )
      {
        v48 = (unsigned __int64)v16->Red << 40;
        v49 = (unsigned __int64)v16->Green << 40;
        v50 = (unsigned __int64)v16->Blue << 40;
        v51 = (unsigned __int64)v16->Alpha << 40;
        v35 = ((unsigned __int64)v17->Red << 40) - v48;
        v36 = ((unsigned __int64)v17->Green << 40) - v49;
        v37 = ((unsigned __int64)v17->Blue << 40) - v50;
        v32 = ((unsigned __int64)v17->Alpha << 40) - v51;
        v22 = v34;
        if ( a7 )
        {
          v54 = 0LL;
          v55 = 0LL;
          *(_QWORD *)&v52 = MDiv64(v35, 1LL, v21);
          *((_QWORD *)&v52 + 1) = MDiv64(v36, 1LL, v23);
          *(_QWORD *)&v53 = MDiv64(v37, 1LL, v24);
          *((_QWORD *)&v53 + 1) = MDiv64(v32, 1LL, v25);
        }
        else
        {
          v52 = 0LL;
          v53 = 0LL;
          *(_QWORD *)&v54 = MDiv64(v35, 1LL, v20);
          *((_QWORD *)&v54 + 1) = MDiv64(v36, 1LL, v29);
          *(_QWORD *)&v55 = MDiv64(v37, 1LL, v30);
          *((_QWORD *)&v55 + 1) = MDiv64(v32, 1LL, v31);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)&v43) )
        {
          if ( (unsigned int)bUMPDSecurityGateEx()
            && !v58
            && ((char *)v22 == (char *)vFillGRectDIB4 || (char *)v22 == (char *)vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1957);
            return 1LL;
          }
          ((void (__fastcall *)(struct SURFACE *, __int128 *))v22)(a1, &v43);
        }
      }
    }
    if ( v61.x > v60.x )
    {
      v16 = &v60;
      v17 = &v61;
    }
    v27 = v16->y;
    v28 = v17->y;
    if ( v27 > v28 )
    {
      v17->y = v27;
      v16->y = v28;
    }
    x = v16->x;
    goto LABEL_26;
  }
  return v12;
}
