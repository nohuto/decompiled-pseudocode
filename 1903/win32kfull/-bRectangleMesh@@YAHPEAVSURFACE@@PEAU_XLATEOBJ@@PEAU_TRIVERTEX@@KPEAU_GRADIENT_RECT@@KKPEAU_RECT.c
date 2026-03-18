/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00F4AF4
 * Callers:
 *     EngGradientFill @ 0x1C00F4700 (EngGradientFill.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C00F4F10 (-MDiv64@@YA_J_J00@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00F4F88 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00F5038 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  struct _TRIVERTEX *v9; // r15
  struct _GRADIENT_RECT *v12; // rbx
  unsigned int v13; // r13d
  __int64 v14; // rdi
  void (__fastcall *v15)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r12
  unsigned int UpperLeft; // edx
  unsigned int LowerRight; // ecx
  struct _TRIVERTEX *v18; // rdx
  struct _TRIVERTEX *v19; // r8
  LONG x; // ecx
  LONG v21; // r9d
  int v22; // r9d
  int v23; // r15d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // r8
  LONG y; // eax
  LONG v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // r8
  __int64 v37; // r10
  __int64 v38; // r8
  __int64 v39; // r11
  __int64 v40; // r8
  __int64 v42; // [rsp+38h] [rbp-160h] BYREF
  struct _GRADIENT_RECT *v43; // [rsp+40h] [rbp-158h]
  void (*v44[3])(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+48h] [rbp-150h] BYREF
  __int64 v45; // [rsp+60h] [rbp-138h]
  void (*v46)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+68h] [rbp-130h] BYREF
  _OWORD v47[12]; // [rsp+70h] [rbp-128h] BYREF
  struct _TRIVERTEX v48; // [rsp+130h] [rbp-68h] BYREF
  struct _TRIVERTEX v49; // [rsp+140h] [rbp-58h] BYREF

  v9 = a3;
  v44[2] = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))a1;
  v44[1] = (void (*)(struct SURFACE *, struct _GRADIENTRECTDATA *))a3;
  v12 = a5;
  v43 = a5;
  v13 = 1;
  memset(v47, 0, 0xB8uLL);
  v42 = *((_QWORD *)a1 + 16);
  if ( v42 || (v45 = *((_QWORD *)a1 + 6), (v42 = *(_QWORD *)(v45 + 1808)) != 0) )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v42, &v46, v44);
    *(_QWORD *)&v47[10] = a2;
    *((_QWORD *)&v47[10] + 1) = &v42;
    *(struct _POINTL *)&v47[9] = *a9;
    v47[0] = *a8;
    v14 = 0LL;
    v15 = (void (__fastcall *)(struct SURFACE *, struct _GRADIENTRECTDATA *))v44[0];
    while ( 1 )
    {
      if ( (unsigned int)v14 >= a6 )
        return v13;
      UpperLeft = v12[v14].UpperLeft;
      LowerRight = v12[v14].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v49 = v9[UpperLeft];
      v48 = v9[LowerRight];
      v18 = &v49;
      v19 = &v48;
      if ( !a7 )
        break;
      if ( v49.y > v48.y )
      {
        v18 = &v48;
        v19 = &v49;
      }
      x = v18->x;
      v21 = v19->x;
      if ( v18->x > v19->x )
      {
        v19->x = x;
        v18->x = v21;
        x = v21;
LABEL_24:
        v21 = v19->x;
      }
      LODWORD(v47[1]) = x;
      DWORD1(v47[1]) = v18->y;
      DWORD2(v47[1]) = v21;
      HIDWORD(v47[1]) = v19->y;
      DWORD2(v47[9]) = a7;
      v22 = v21 - x;
      v23 = HIDWORD(v47[1]) - DWORD1(v47[1]);
      if ( v22 <= 0 || v23 <= 0 )
        goto LABEL_36;
      *(_QWORD *)&v47[3] = (unsigned __int64)v18->Red << 40;
      *((_QWORD *)&v47[3] + 1) = (unsigned __int64)v18->Green << 40;
      *(_QWORD *)&v47[4] = (unsigned __int64)v18->Blue << 40;
      v24 = (unsigned __int64)v18->Alpha << 40;
      *((_QWORD *)&v47[4] + 1) = v24;
      v25 = ((unsigned __int64)v19->Red << 40) - *(_QWORD *)&v47[3];
      if ( a7 )
      {
        memset(&v47[7], 0, 32);
        v26 = ((unsigned __int64)v19->Alpha << 40) - v24;
        *(_QWORD *)&v47[5] = MDiv64(v25, 1LL, v23);
        *((_QWORD *)&v47[5] + 1) = MDiv64(v28, 1LL, v27);
        *(_QWORD *)&v47[6] = MDiv64(v30, 1LL, v29);
        *((_QWORD *)&v47[6] + 1) = MDiv64(v26, 1LL, v31);
      }
      else
      {
        memset(&v47[5], 0, 32);
        v35 = ((unsigned __int64)v19->Alpha << 40) - v24;
        *(_QWORD *)&v47[7] = MDiv64(v25, 1LL, v22);
        *((_QWORD *)&v47[7] + 1) = MDiv64(v37, 1LL, v36);
        *(_QWORD *)&v47[8] = MDiv64(v39, 1LL, v38);
        *((_QWORD *)&v47[8] + 1) = MDiv64(v35, 1LL, v40);
      }
      if ( !(unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)v47) )
      {
        v12 = v43;
LABEL_36:
        v9 = a3;
        goto LABEL_17;
      }
      if ( (unsigned int)bUMPDSecurityGateEx()
        && !*(_QWORD *)&v47[10]
        && (v15 == vFillGRectDIB4 || v15 == vFillGRectDIB8) )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
            1957);
        return 1LL;
      }
      v15(a1, (struct _GRADIENTRECTDATA *)v47);
      v12 = v43;
      v9 = a3;
LABEL_17:
      v14 = (unsigned int)(v14 + 1);
    }
    if ( v49.x > v48.x )
    {
      v18 = &v48;
      v19 = &v49;
    }
    y = v18->y;
    v34 = v19->y;
    if ( y > v34 )
    {
      v19->y = y;
      v18->y = v34;
    }
    x = v18->x;
    goto LABEL_24;
  }
  return v13;
}
