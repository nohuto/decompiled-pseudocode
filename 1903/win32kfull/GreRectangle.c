/*
 * XREFs of GreRectangle @ 0x1C00FA310
 * Callers:
 *     NtGdiRectangle @ 0x1C00FA250 (NtGdiRectangle.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00FB094 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FBAD4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00FC8F8 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0156FEC (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LONG v10; // r8d
  LONG v11; // r9d
  unsigned int v12; // edi
  int v13; // eax
  LONG v14; // r15d
  int v15; // esi
  LONG v16; // ebx
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
  int v37; // ebx
  int v38; // ecx
  __int64 v39; // r8
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // ebx
  int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // rcx
  int v48; // ebx
  int v49; // ecx
  __int64 v50; // r8
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rcx
  int v55; // ebx
  int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // rcx
  int v59; // eax
  int v60; // ecx
  LONG v61; // eax
  int v62; // ebx
  int v63; // ecx
  __int64 v64; // r8
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // r8
  __int64 v68; // rcx
  int v69; // ebx
  int v70; // ecx
  __int64 v71; // r8
  __int64 v72; // rcx
  int v73; // eax
  int v74; // ecx
  int v75; // ebx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // ebx
  __int64 v81; // rcx
  __int64 v82; // r8
  POINTL v83; // rbx
  int v84; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v85; // [rsp+38h] [rbp-C8h] BYREF
  POINTL *v86[2]; // [rsp+48h] [rbp-B8h] BYREF
  LONG x; // [rsp+58h] [rbp-A8h]
  LONG v88; // [rsp+5Ch] [rbp-A4h]
  LONG v89; // [rsp+60h] [rbp-A0h]
  LINEATTRS *v90; // [rsp+68h] [rbp-98h]
  struct _XFORMOBJ v91[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v92[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v93; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v94; // [rsp+90h] [rbp-70h] BYREF
  PATHOBJ v95; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-28h]
  _BYTE v97[32]; // [rsp+120h] [rbp+20h] BYREF
  int v98; // [rsp+140h] [rbp+40h]
  PATHOBJ ppo; // [rsp+390h] [rbp+290h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v86, a1);
  v8 = v86[0];
  if ( !v86[0] || (v86[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_67;
  }
  v9 = v86[0][122];
  v10 = a4 - 1;
  v11 = a2 - 1;
  v12 = 1;
  v85.top = a3;
  v85.bottom = a5;
  v13 = *(_DWORD *)(*(_QWORD *)&v9 + 108LL) & 1;
  if ( !v13 )
    v10 = a4;
  v89 = v10;
  v14 = v10;
  if ( !v13 )
    v11 = a2;
  v85.right = v10;
  v15 = *(_DWORD *)(*(_QWORD *)&v9 + 152LL);
  v16 = v11;
  v85.left = v11;
  v88 = v11;
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v86[0], *(_QWORD *)(*(_QWORD *)&v9 + 160LL));
    v8 = v86[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[122] + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v91, (struct XDCOBJ *)v86, 0x204u);
  v17 = *(_QWORD *)&v91[0].ulReserved;
  v18 = v86[0];
  v19 = *(_DWORD *)(*(_QWORD *)&v91[0].ulReserved + 32LL);
  if ( (v19 & 1) == 0 || (x = v86[0][31].x, (x & 1) != 0) )
  {
LABEL_40:
    EBOX::EBOX((EBOX *)v92, (struct DCOBJ *)v86, (struct _RECTL *)&v85, (struct _LINEATTRS *)&v86[0][26], 0);
    if ( v92[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v95, (struct XDCOBJ *)v86, 1);
    if ( v96 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&v95, 0LL, &v93)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v95, 0LL, &v94, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)&v95) )
      {
        if ( (v86[0][31].x & 1) == 0 )
        {
          v34 = v86[0][18];
          if ( v92[1] )
          {
            v83 = v86[0][17];
            v86[0][17] = v34;
            v86[0][39].y |= 1u;
            v36 = EPATHOBJ::bStrokeAndOrFill(&v95, v86, 0LL, 0LL, 2u);
            v86[0][17] = v83;
            v86[0][39].y |= 1u;
          }
          else
          {
            y = v18[26].y;
            if ( (*(_DWORD *)(*(_QWORD *)&v34 + 40LL) & 0x800) != 0 )
              v18[26].y = 2;
            v36 = EPATHOBJ::bStrokeAndOrFill(&v95, v86, (LINEATTRS *)&v18[26], v91, 3u);
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
    EPATHOBJ::vUnlock((EPATHOBJ *)&v95);
    if ( v98 )
    {
      PopThreadGuardedObject(v97);
      v98 = 0;
    }
    goto LABEL_22;
  }
  if ( (struct PEN *)v86[0][18] != gpPenNull )
  {
    v90 = (LINEATTRS *)&v86[0][26];
    if ( (v86[0][26].x & 1) == 0 )
    {
      v26 = v19 & 2;
      if ( *(_DWORD *)(*(_QWORD *)&v86[0][122] + 208LL) == 2 )
      {
        if ( v26 )
        {
          v73 = (*(_DWORD *)(*(_QWORD *)&v91[0].ulReserved + 24LL) + 15) >> 4;
          v74 = (*(_DWORD *)(*(_QWORD *)&v91[0].ulReserved + 28LL) + 15) >> 4;
          v85.left = v73 + v16;
          v85.right = v73 + v14;
          v85.top = v74 + a3;
          v85.bottom = v74 + a5;
        }
        else
        {
          v84 = 0;
          bFToL(gpPenNull, &v84, 0LL);
          v75 = *(_DWORD *)(v17 + 24);
          v76 = (unsigned int)((v75 + v84 + 15) >> 4);
          v85.left = (v75 + v84 + 15) >> 4;
          v84 = 0;
          bFToL(v76, &v84, v77);
          v85.right = (v75 + v84 + 15) >> 4;
          v84 = 0;
          bFToL(v78, &v84, v79);
          v80 = *(_DWORD *)(v17 + 28);
          v81 = (unsigned int)((v80 + v84 + 15) >> 4);
          v85.top = (v80 + v84 + 15) >> 4;
          v84 = 0;
          bFToL(v81, &v84, v82);
          v85.bottom = (v80 + v84 + 15) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v85);
        left = v85.left;
      }
      else
      {
        if ( v26 )
        {
          v27 = ((*(int *)(*(_QWORD *)&v91[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v28 = ((*(int *)(*(_QWORD *)&v91[0].ulReserved + 28LL) >> 3) + 1) >> 1;
          v85.left = v27 + v16;
          v85.right = v27 + v14;
          v85.top = v28 + a3;
          v29 = v28 + a5;
        }
        else
        {
          v84 = 0;
          bFToL(gpPenNull, &v84, 0LL);
          v37 = *(_DWORD *)(v17 + 24);
          v38 = v37 + v84;
          v84 &= v39;
          v40 = (unsigned int)(((v38 >> 3) + 1) >> 1);
          v85.left = v40;
          bFToL(v40, &v84, v39);
          v41 = v37 + v84;
          v84 &= v42;
          v85.right = ((v41 >> 3) + 1) >> 1;
          bFToL(v43, &v84, v42);
          v44 = *(_DWORD *)(v17 + 28);
          v45 = v44 + v84;
          v84 &= v46;
          v47 = (unsigned int)(((v45 >> 3) + 1) >> 1);
          v85.top = v47;
          bFToL(v47, &v84, v46);
          v29 = (((v44 + v84) >> 3) + 1) >> 1;
        }
        v85.bottom = v29;
        ERECTL::vOrder((ERECTL *)&v85);
        left = v85.left;
        v32 = v85.bottom - 1;
        --v85.right;
        --v85.bottom;
        if ( v85.left > v85.right || v85.top > v32 )
          goto LABEL_23;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v85, v30 & 4);
      if ( (struct BRUSH *)v86[0][17] == gpbrNull )
      {
        if ( (v86[0][4].y & 0x40) != 0 )
        {
          v85.left = v88;
          v85.right = v89;
          v85.top = a3;
          v85.bottom = a5;
          XDCOBJ::vAccumulate((XDCOBJ *)v86, (struct ERECTL *)&v85);
        }
        goto LABEL_35;
      }
      v85.left = left + 1;
      v85.top = v33 + 1;
      if ( IsRectEmptyInl(&v85) || (unsigned int)GreRectBlt((struct DCOBJ *)v86, (struct ERECTL *)&v85) )
      {
LABEL_35:
        v24 = EPATHOBJ::bStrokeAndOrFill(&ppo, v86, v90, 0LL, 1u);
        goto LABEL_21;
      }
LABEL_67:
      v12 = 0;
      goto LABEL_22;
    }
    goto LABEL_40;
  }
  if ( (struct BRUSH *)v86[0][17] != gpbrNull || (v86[0][4].y & 0x40) != 0 )
  {
    v20 = v19 & 2;
    if ( *(_DWORD *)(*(_QWORD *)&v86[0][122] + 208LL) == 2 )
    {
      if ( v20 )
      {
        v59 = (*(_DWORD *)(*(_QWORD *)&v91[0].ulReserved + 24LL) + 15) >> 4;
        v60 = (*(_DWORD *)(*(_QWORD *)&v91[0].ulReserved + 28LL) + 15) >> 4;
        v85.left = v59 + v16;
        v85.right = v59 + v14;
        v85.top = v60 + a3;
        v61 = v60 + a5;
      }
      else
      {
        v84 = 0;
        bFToL(gpbrNull, &v84, 0LL);
        v62 = *(_DWORD *)(v17 + 24);
        v63 = v84 + 15;
        v84 &= v64;
        v65 = (unsigned int)((v62 + v63) >> 4);
        v85.left = v65;
        bFToL(v65, &v84, v64);
        v66 = v84 + 15;
        v84 &= v67;
        v85.right = (v62 + v66) >> 4;
        bFToL(v68, &v84, v67);
        v69 = *(_DWORD *)(v17 + 28);
        v70 = v84 + 15;
        v84 &= v71;
        v72 = (unsigned int)((v69 + v70) >> 4);
        v85.top = v72;
        bFToL(v72, &v84, v71);
        v61 = (v69 + v84 + 15) >> 4;
      }
      v85.bottom = v61;
      ERECTL::vOrder((ERECTL *)&v85);
    }
    else
    {
      if ( v20 )
      {
        v21 = ((*(int *)(*(_QWORD *)&v91[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v22 = ((*(int *)(*(_QWORD *)&v91[0].ulReserved + 28LL) >> 3) + 1) >> 1;
        v85.left = v21 + v16;
        v85.right = v21 + v14;
        v85.top = v22 + a3;
        v23 = v22 + a5;
      }
      else
      {
        v84 = 0;
        bFToL(gpbrNull, &v84, 0LL);
        v48 = *(_DWORD *)(v17 + 24);
        v49 = v48 + v84;
        v84 &= v50;
        v51 = (unsigned int)(((v49 >> 3) + 1) >> 1);
        v85.left = v51;
        bFToL(v51, &v84, v50);
        v52 = v48 + v84;
        v84 &= v53;
        v85.right = ((v52 >> 3) + 1) >> 1;
        bFToL(v54, &v84, v53);
        v55 = *(_DWORD *)(v17 + 28);
        v56 = v55 + v84;
        v84 &= v57;
        v58 = (unsigned int)(((v56 >> 3) + 1) >> 1);
        v85.top = v58;
        bFToL(v58, &v84, v57);
        v23 = (((v55 + v84) >> 3) + 1) >> 1;
      }
      v85.bottom = v23;
      ERECTL::vOrder((ERECTL *)&v85);
      --v85.right;
      --v85.bottom;
    }
    if ( !IsRectEmptyInl(&v85) )
    {
      v24 = GreRectBlt((struct DCOBJ *)v86, (struct ERECTL *)&v85);
LABEL_21:
      v12 = v24;
LABEL_22:
      v18 = v86[0];
    }
  }
LABEL_23:
  if ( v18 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v86);
  return v12;
}
