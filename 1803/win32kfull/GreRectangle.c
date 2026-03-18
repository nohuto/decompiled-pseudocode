/*
 * XREFs of GreRectangle @ 0x1C00F6F20
 * Callers:
 *     NtGdiRectangle @ 0x1C00F6E60 (NtGdiRectangle.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F7358 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C00F7590 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02806F8 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LONG v10; // r8d
  LONG v11; // r9d
  unsigned int v12; // edi
  int v13; // eax
  int v14; // r15d
  int v15; // esi
  int v16; // ebx
  __int64 v17; // r14
  POINTL *v18; // rsi
  int v19; // edx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  LONG v23; // eax
  unsigned int v24; // eax
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  LONG v29; // eax
  char v30; // r8
  LONG left; // ebx
  LONG v32; // eax
  int v33; // r11d
  float v34; // xmm1_4
  int v35; // ebx
  int v36; // ecx
  int v37; // r8d
  float v38; // xmm1_4
  int v39; // eax
  int v40; // r8d
  int v41; // ebx
  int v42; // ecx
  int v43; // r8d
  float v44; // xmm1_4
  int v45; // ebx
  int v46; // ecx
  int v47; // r8d
  float v48; // xmm1_4
  int v49; // eax
  int v50; // r8d
  int v51; // ebx
  int v52; // ecx
  int v53; // r8d
  int v54; // eax
  int v55; // ecx
  LONG v56; // eax
  float v57; // xmm1_4
  int v58; // ebx
  int v59; // ecx
  int v60; // r8d
  float v61; // xmm1_4
  int v62; // eax
  int v63; // r8d
  int v64; // ebx
  int v65; // ecx
  int v66; // r8d
  int v67; // eax
  int v68; // ecx
  float v69; // xmm1_4
  int v70; // ebx
  char v71; // r8
  float v72; // xmm1_4
  char v73; // r8
  int v74; // ebx
  char v75; // r8
  POINTL v76; // rax
  LONG y; // ebx
  unsigned int v78; // ecx
  POINTL v79; // rbx
  int v80; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v81; // [rsp+38h] [rbp-C8h] BYREF
  POINTL *v82[2]; // [rsp+48h] [rbp-B8h] BYREF
  LONG x; // [rsp+58h] [rbp-A8h]
  LONG v84; // [rsp+5Ch] [rbp-A4h]
  LONG v85; // [rsp+60h] [rbp-A0h]
  LINEATTRS *v86; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ v87[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v88[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v89; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v90; // [rsp+90h] [rbp-70h] BYREF
  PATHOBJ v91[10]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v92[32]; // [rsp+120h] [rbp+20h] BYREF
  int v93; // [rsp+140h] [rbp+40h]
  PATHOBJ v94[58]; // [rsp+390h] [rbp+290h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v82, a1);
  v8 = v82[0];
  if ( !v82[0] || (v82[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_67;
  }
  v9 = v82[0][10];
  v10 = a4 - 1;
  v11 = a2 - 1;
  v12 = 1;
  v81.top = a3;
  v81.bottom = a5;
  v13 = *(_DWORD *)(*(_QWORD *)&v9 + 312LL) & 1;
  if ( !v13 )
    v10 = a4;
  v85 = v10;
  v14 = v10;
  if ( !v13 )
    v11 = a2;
  v81.right = v10;
  v15 = *(_DWORD *)(*(_QWORD *)&v9 + 8LL);
  v16 = v11;
  v81.left = v11;
  v84 = v11;
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v82[0], *(_QWORD *)(*(_QWORD *)&v9 + 16LL));
    v8 = v82[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v87, (struct XDCOBJ *)v82, 516);
  v17 = *(_QWORD *)&v87[0].ulReserved;
  v18 = v82[0];
  v19 = *(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 32LL);
  if ( (v19 & 1) == 0 || (x = v82[0][32].x, (x & 1) != 0) )
  {
LABEL_50:
    EBOX::EBOX((EBOX *)v88, (struct DCOBJ *)v82, (struct _RECTL *)&v81, (struct _LINEATTRS *)&v82[0][27], 0);
    if ( v88[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v91, (DC **)v82, 1);
    if ( v91[1] )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v91, 0LL, &v89)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v91, 0LL, &v90, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v91) )
      {
        if ( (v82[0][32].x & 1) == 0 )
        {
          v76 = v82[0][19];
          if ( v88[1] )
          {
            v79 = v82[0][18];
            v82[0][18] = v76;
            v82[0][40].y |= 1u;
            v78 = EPATHOBJ::bStrokeAndOrFill(v91, v82, 0LL, 0LL, 2u);
            v82[0][18] = v79;
            v82[0][40].y |= 1u;
          }
          else
          {
            y = v18[27].y;
            if ( (*(_DWORD *)(*(_QWORD *)&v76 + 40LL) & 0x800) != 0 )
              v18[27].y = 2;
            v78 = EPATHOBJ::bStrokeAndOrFill(v91, v82, (LINEATTRS *)&v18[27], v87, 3u);
            v18[27].y = y;
          }
          v12 = v78;
        }
        goto LABEL_54;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v12 = 0;
LABEL_54:
    EPATHOBJ::vUnlock((EPATHOBJ *)v91);
    if ( v93 )
    {
      PopThreadGuardedObject(v92);
      v93 = 0;
    }
    goto LABEL_22;
  }
  if ( (struct PEN *)v82[0][19] != gpPenNull )
  {
    v86 = (LINEATTRS *)&v82[0][27];
    if ( (v82[0][27].x & 1) == 0 )
    {
      v26 = v19 & 2;
      if ( *(_DWORD *)(*(_QWORD *)&v82[0][10] + 68LL) == 2 )
      {
        if ( v26 )
        {
          v67 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 24LL) + 15) >> 4;
          v68 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 28LL) + 15) >> 4;
          v81.left = v67 + v16;
          v81.right = v67 + v14;
          v81.top = v68 + a3;
          v81.bottom = v68 + a5;
        }
        else
        {
          v69 = **(float **)&v87[0].ulReserved;
          v80 = 0;
          bFToL((float)v16 * v69, &v80, 0);
          v70 = *(_DWORD *)(v17 + 24);
          v81.left = (v70 + v80 + 15) >> 4;
          v80 = 0;
          bFToL((float)v14 * v69, &v80, v71);
          v72 = *(float *)(v17 + 12);
          v81.right = (v70 + v80 + 15) >> 4;
          v80 = 0;
          bFToL((float)a3 * v72, &v80, v73);
          v74 = *(_DWORD *)(v17 + 28);
          v81.top = (v74 + v80 + 15) >> 4;
          v80 = 0;
          bFToL((float)a5 * v72, &v80, v75);
          v81.bottom = (v74 + v80 + 15) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v81);
        left = v81.left;
      }
      else
      {
        if ( v26 )
        {
          v27 = ((*(int *)(*(_QWORD *)&v87[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v28 = ((*(int *)(*(_QWORD *)&v87[0].ulReserved + 28LL) >> 3) + 1) >> 1;
          v81.left = v27 + v16;
          v81.right = v27 + v14;
          v81.top = v28 + a3;
          v29 = v28 + a5;
        }
        else
        {
          v34 = **(float **)&v87[0].ulReserved;
          v80 = 0;
          bFToL((float)v16 * v34, &v80, 0);
          v35 = *(_DWORD *)(v17 + 24);
          v36 = v35 + v80;
          v80 &= v37;
          v81.left = ((v36 >> 3) + 1) >> 1;
          bFToL((float)v14 * v34, &v80, v37);
          v38 = *(float *)(v17 + 12);
          v39 = v35 + v80;
          v80 &= v40;
          v81.right = ((v39 >> 3) + 1) >> 1;
          bFToL((float)a3 * v38, &v80, v40);
          v41 = *(_DWORD *)(v17 + 28);
          v42 = v41 + v80;
          v80 &= v43;
          v81.top = ((v42 >> 3) + 1) >> 1;
          bFToL((float)a5 * v38, &v80, v43);
          v29 = (((v41 + v80) >> 3) + 1) >> 1;
        }
        v81.bottom = v29;
        ERECTL::vOrder((ERECTL *)&v81);
        left = v81.left;
        v32 = v81.bottom - 1;
        --v81.right;
        --v81.bottom;
        if ( v81.left > v81.right || v81.top > v32 )
          goto LABEL_23;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)v94, (struct _RECTL *)&v81, v30 & 4);
      if ( (struct BRUSH *)v82[0][18] == gpbrNull )
      {
        if ( (v82[0][4].y & 0x40) != 0 )
        {
          v81.left = v84;
          v81.right = v85;
          v81.top = a3;
          v81.bottom = a5;
          XDCOBJ::vAccumulate((XDCOBJ *)v82, (struct ERECTL *)&v81);
        }
        goto LABEL_35;
      }
      v81.left = left + 1;
      v81.top = v33 + 1;
      if ( IsRectEmptyInl(&v81) || (unsigned int)GreRectBlt((struct DCOBJ *)v82, (struct ERECTL *)&v81) )
      {
LABEL_35:
        v24 = EPATHOBJ::bStrokeAndOrFill(v94, v82, v86, 0LL, 1u);
        goto LABEL_21;
      }
LABEL_67:
      v12 = 0;
      goto LABEL_22;
    }
    goto LABEL_50;
  }
  if ( (struct BRUSH *)v82[0][18] != gpbrNull || (v82[0][4].y & 0x40) != 0 )
  {
    v20 = v19 & 2;
    if ( *(_DWORD *)(*(_QWORD *)&v82[0][10] + 68LL) == 2 )
    {
      if ( v20 )
      {
        v54 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 24LL) + 15) >> 4;
        v55 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 28LL) + 15) >> 4;
        v81.left = v54 + v16;
        v81.right = v54 + v14;
        v81.top = v55 + a3;
        v56 = v55 + a5;
      }
      else
      {
        v57 = **(float **)&v87[0].ulReserved;
        v80 = 0;
        bFToL((float)v16 * v57, &v80, 0);
        v58 = *(_DWORD *)(v17 + 24);
        v59 = v80 + 15;
        v80 &= v60;
        v81.left = (v58 + v59) >> 4;
        bFToL((float)v14 * v57, &v80, v60);
        v61 = *(float *)(v17 + 12);
        v62 = v80 + 15;
        v80 &= v63;
        v81.right = (v58 + v62) >> 4;
        bFToL((float)a3 * v61, &v80, v63);
        v64 = *(_DWORD *)(v17 + 28);
        v65 = v80 + 15;
        v80 &= v66;
        v81.top = (v64 + v65) >> 4;
        bFToL((float)a5 * v61, &v80, v66);
        v56 = (v64 + v80 + 15) >> 4;
      }
      v81.bottom = v56;
      ERECTL::vOrder((ERECTL *)&v81);
    }
    else
    {
      if ( v20 )
      {
        v21 = ((*(int *)(*(_QWORD *)&v87[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v22 = ((*(int *)(*(_QWORD *)&v87[0].ulReserved + 28LL) >> 3) + 1) >> 1;
        v81.left = v21 + v16;
        v81.right = v21 + v14;
        v81.top = v22 + a3;
        v23 = v22 + a5;
      }
      else
      {
        v44 = **(float **)&v87[0].ulReserved;
        v80 = 0;
        bFToL((float)v16 * v44, &v80, 0);
        v45 = *(_DWORD *)(v17 + 24);
        v46 = v45 + v80;
        v80 &= v47;
        v81.left = ((v46 >> 3) + 1) >> 1;
        bFToL((float)v14 * v44, &v80, v47);
        v48 = *(float *)(v17 + 12);
        v49 = v45 + v80;
        v80 &= v50;
        v81.right = ((v49 >> 3) + 1) >> 1;
        bFToL((float)a3 * v48, &v80, v50);
        v51 = *(_DWORD *)(v17 + 28);
        v52 = v51 + v80;
        v80 &= v53;
        v81.top = ((v52 >> 3) + 1) >> 1;
        bFToL((float)a5 * v48, &v80, v53);
        v23 = (((v51 + v80) >> 3) + 1) >> 1;
      }
      v81.bottom = v23;
      ERECTL::vOrder((ERECTL *)&v81);
      --v81.right;
      --v81.bottom;
    }
    if ( !IsRectEmptyInl(&v81) )
    {
      v24 = GreRectBlt((struct DCOBJ *)v82, (struct ERECTL *)&v81);
LABEL_21:
      v12 = v24;
LABEL_22:
      v18 = v82[0];
    }
  }
LABEL_23:
  if ( v18 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v82);
  return v12;
}
