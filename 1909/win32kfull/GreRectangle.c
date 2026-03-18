/*
 * XREFs of GreRectangle @ 0x1C0126530
 * Callers:
 *     NtGdiRectangle @ 0x1C0126470 (NtGdiRectangle.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A22F8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     bFToL @ 0x1C00DC874 (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0107758 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C01272B4 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0127CF4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0157DAC (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  POINTL v34; // rax
  LONG y; // ebx
  unsigned int v36; // ecx
  float v37; // xmm1_4
  int v38; // ebx
  int v39; // ecx
  unsigned int v40; // r8d
  float v41; // xmm1_4
  int v42; // eax
  unsigned int v43; // r8d
  int v44; // ebx
  int v45; // ecx
  unsigned int v46; // r8d
  float v47; // xmm1_4
  int v48; // ebx
  int v49; // ecx
  unsigned int v50; // r8d
  float v51; // xmm1_4
  int v52; // eax
  unsigned int v53; // r8d
  int v54; // ebx
  int v55; // ecx
  unsigned int v56; // r8d
  int v57; // eax
  int v58; // ecx
  LONG v59; // eax
  float v60; // xmm1_4
  int v61; // ebx
  int v62; // ecx
  unsigned int v63; // r8d
  float v64; // xmm1_4
  int v65; // eax
  unsigned int v66; // r8d
  int v67; // ebx
  int v68; // ecx
  unsigned int v69; // r8d
  int v70; // eax
  int v71; // ecx
  float v72; // xmm1_4
  int v73; // ebx
  unsigned int v74; // r8d
  float v75; // xmm1_4
  unsigned int v76; // r8d
  int v77; // ebx
  unsigned int v78; // r8d
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
  PATHOBJ v91; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-28h]
  _BYTE v93[32]; // [rsp+120h] [rbp+20h] BYREF
  int v94; // [rsp+140h] [rbp+40h]
  PATHOBJ ppo; // [rsp+390h] [rbp+290h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v82, a1);
  v8 = v82[0];
  if ( !v82[0] || (v82[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_67;
  }
  v9 = v82[0][122];
  v10 = a4 - 1;
  v11 = a2 - 1;
  v12 = 1;
  v81.top = a3;
  v81.bottom = a5;
  v13 = *(_DWORD *)(*(_QWORD *)&v9 + 108LL) & 1;
  if ( !v13 )
    v10 = a4;
  v85 = v10;
  v14 = v10;
  if ( !v13 )
    v11 = a2;
  v81.right = v10;
  v15 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  v16 = v11;
  v81.left = v11;
  v84 = v11;
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v82[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v8 = v82[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v87, (struct XDCOBJ *)v82, 516);
  v17 = *(_QWORD *)&v87[0].ulReserved;
  v18 = v82[0];
  v19 = *(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 32LL);
  if ( (v19 & 1) == 0 || (x = v82[0][31].x, (x & 1) != 0) )
  {
LABEL_40:
    EBOX::EBOX((EBOX *)v88, (struct DCOBJ *)v82, (struct _RECTL *)&v81, (struct _LINEATTRS *)&v82[0][26], 0);
    if ( v88[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v91, (struct XDCOBJ *)v82, 1);
    if ( v92 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v91, 0LL, &v89)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v91, 0LL, &v90, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v91) )
      {
        if ( (v82[0][31].x & 1) == 0 )
        {
          v34 = v82[0][18];
          if ( v88[1] )
          {
            v79 = v82[0][17];
            v82[0][17] = v34;
            v82[0][39].y |= 1u;
            v36 = EPATHOBJ::bStrokeAndOrFill(&v91, v82, 0LL, 0LL, 2u);
            v82[0][17] = v79;
            v82[0][39].y |= 1u;
          }
          else
          {
            y = v18[26].y;
            if ( (*(_DWORD *)(*(_QWORD *)&v34 + 40LL) & 0x800) != 0 )
              v18[26].y = 2;
            v36 = EPATHOBJ::bStrokeAndOrFill(&v91, v82, (LINEATTRS *)&v18[26], v87, 3u);
            v18[26].y = y;
          }
          v12 = v36;
        }
        goto LABEL_51;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v12 = 0;
LABEL_51:
    EPATHOBJ::vUnlock((EPATHOBJ *)&v91);
    if ( v94 )
    {
      PopThreadGuardedObject(v93);
      v94 = 0;
    }
    goto LABEL_22;
  }
  if ( (struct PEN *)v82[0][18] != gpPenNull )
  {
    v86 = (LINEATTRS *)&v82[0][26];
    if ( (v82[0][26].x & 1) == 0 )
    {
      v26 = v19 & 2;
      if ( *(_DWORD *)(*(_QWORD *)&v82[0][122] + 208LL) == 2 )
      {
        if ( v26 )
        {
          v70 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 24LL) + 15) >> 4;
          v71 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 28LL) + 15) >> 4;
          v81.left = v70 + v16;
          v81.right = v70 + v14;
          v81.top = v71 + a3;
          v81.bottom = v71 + a5;
        }
        else
        {
          v72 = **(float **)&v87[0].ulReserved;
          v80 = 0;
          bFToL((float)v16 * v72, &v80, 0);
          v73 = *(_DWORD *)(v17 + 24);
          v81.left = (v73 + v80 + 15) >> 4;
          v80 = 0;
          bFToL((float)v14 * v72, &v80, v74);
          v75 = *(float *)(v17 + 12);
          v81.right = (v73 + v80 + 15) >> 4;
          v80 = 0;
          bFToL((float)a3 * v75, &v80, v76);
          v77 = *(_DWORD *)(v17 + 28);
          v81.top = (v77 + v80 + 15) >> 4;
          v80 = 0;
          bFToL((float)a5 * v75, &v80, v78);
          v81.bottom = (v77 + v80 + 15) >> 4;
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
          v37 = **(float **)&v87[0].ulReserved;
          v80 = 0;
          bFToL((float)v16 * v37, &v80, 0);
          v38 = *(_DWORD *)(v17 + 24);
          v39 = v38 + v80;
          v80 &= v40;
          v81.left = ((v39 >> 3) + 1) >> 1;
          bFToL((float)v14 * v37, &v80, v40);
          v41 = *(float *)(v17 + 12);
          v42 = v38 + v80;
          v80 &= v43;
          v81.right = ((v42 >> 3) + 1) >> 1;
          bFToL((float)a3 * v41, &v80, v43);
          v44 = *(_DWORD *)(v17 + 28);
          v45 = v44 + v80;
          v80 &= v46;
          v81.top = ((v45 >> 3) + 1) >> 1;
          bFToL((float)a5 * v41, &v80, v46);
          v29 = (((v44 + v80) >> 3) + 1) >> 1;
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
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v81, v30 & 4);
      if ( (struct BRUSH *)v82[0][17] == gpbrNull )
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
        v24 = EPATHOBJ::bStrokeAndOrFill(&ppo, v82, v86, 0LL, 1u);
        goto LABEL_21;
      }
LABEL_67:
      v12 = 0;
      goto LABEL_22;
    }
    goto LABEL_40;
  }
  if ( (struct BRUSH *)v82[0][17] != gpbrNull || (v82[0][4].y & 0x40) != 0 )
  {
    v20 = v19 & 2;
    if ( *(_DWORD *)(*(_QWORD *)&v82[0][122] + 208LL) == 2 )
    {
      if ( v20 )
      {
        v57 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 24LL) + 15) >> 4;
        v58 = (*(_DWORD *)(*(_QWORD *)&v87[0].ulReserved + 28LL) + 15) >> 4;
        v81.left = v57 + v16;
        v81.right = v57 + v14;
        v81.top = v58 + a3;
        v59 = v58 + a5;
      }
      else
      {
        v60 = **(float **)&v87[0].ulReserved;
        v80 = 0;
        bFToL((float)v16 * v60, &v80, 0);
        v61 = *(_DWORD *)(v17 + 24);
        v62 = v80 + 15;
        v80 &= v63;
        v81.left = (v61 + v62) >> 4;
        bFToL((float)v14 * v60, &v80, v63);
        v64 = *(float *)(v17 + 12);
        v65 = v80 + 15;
        v80 &= v66;
        v81.right = (v61 + v65) >> 4;
        bFToL((float)a3 * v64, &v80, v66);
        v67 = *(_DWORD *)(v17 + 28);
        v68 = v80 + 15;
        v80 &= v69;
        v81.top = (v67 + v68) >> 4;
        bFToL((float)a5 * v64, &v80, v69);
        v59 = (v67 + v80 + 15) >> 4;
      }
      v81.bottom = v59;
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
        v47 = **(float **)&v87[0].ulReserved;
        v80 = 0;
        bFToL((float)v16 * v47, &v80, 0);
        v48 = *(_DWORD *)(v17 + 24);
        v49 = v48 + v80;
        v80 &= v50;
        v81.left = ((v49 >> 3) + 1) >> 1;
        bFToL((float)v14 * v47, &v80, v50);
        v51 = *(float *)(v17 + 12);
        v52 = v48 + v80;
        v80 &= v53;
        v81.right = ((v52 >> 3) + 1) >> 1;
        bFToL((float)a3 * v51, &v80, v53);
        v54 = *(_DWORD *)(v17 + 28);
        v55 = v54 + v80;
        v80 &= v56;
        v81.top = ((v55 >> 3) + 1) >> 1;
        bFToL((float)a5 * v51, &v80, v56);
        v23 = (((v54 + v80) >> 3) + 1) >> 1;
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
