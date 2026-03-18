/*
 * XREFs of GreRectangle @ 0x1C00A3F7C
 * Callers:
 *     NtGdiRectangle @ 0x1C00A3E60 (NtGdiRectangle.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C0150AE8 (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0293A6C (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall GreRectangle(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  LONG v10; // r8d
  LONG v11; // r9d
  unsigned int v12; // edi
  int v13; // eax
  LONG v14; // r14d
  int v15; // esi
  LONG v16; // ebx
  __int64 v17; // rsi
  int v18; // edx
  int v19; // r13d
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  LONG v23; // eax
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  int v33; // ecx
  LONG v34; // eax
  int v35; // ebx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  LONG v47; // eax
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
  LONG left; // ebx
  LONG v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // ebx
  int v64; // ecx
  __int64 v65; // r8
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // r8
  __int64 v69; // rcx
  int v70; // ebx
  int v71; // ecx
  __int64 v72; // r8
  __int64 v73; // rcx
  int v74; // r11d
  LINEATTRS *v75; // rbx
  __int64 v76; // rax
  ULONG iJoin; // edi
  unsigned int v78; // ecx
  __int64 v79; // rbx
  int v81; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v82; // [rsp+38h] [rbp-C8h] BYREF
  LONG v83; // [rsp+48h] [rbp-B8h]
  LONG v84; // [rsp+4Ch] [rbp-B4h]
  _QWORD v85[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v86[32]; // [rsp+60h] [rbp-A0h] BYREF
  LINEATTRS *v87; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ v88[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v89[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v90; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL v91; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v92[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-8h]
  _BYTE v94[32]; // [rsp+140h] [rbp+40h] BYREF
  int v95; // [rsp+160h] [rbp+60h]
  _BYTE v96[464]; // [rsp+3B0h] [rbp+2B0h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v85, a1);
  v8 = v85[0];
  if ( !v85[0] || (*(_DWORD *)(v85[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_64:
    v12 = 0;
    goto LABEL_65;
  }
  v9 = *(_QWORD *)(v85[0] + 976LL);
  v10 = a4 - 1;
  v11 = a2 - 1;
  v12 = 1;
  v82.top = a3;
  v82.bottom = a5;
  v13 = *(_DWORD *)(v9 + 108) & 1;
  if ( !v13 )
    v10 = a4;
  v84 = v10;
  v14 = v10;
  if ( !v13 )
    v11 = a2;
  v82.right = v10;
  v15 = *(_DWORD *)(v9 + 152);
  v16 = v11;
  v82.left = v11;
  v83 = v11;
  if ( (v15 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v85[0], *(_QWORD *)(v9 + 160));
    v8 = v85[0];
  }
  if ( (v15 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)(v8 + 976) + 168LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v88, (struct XDCOBJ *)v85, 0x204u);
  v17 = *(_QWORD *)&v88[0].ulReserved;
  v18 = *(_DWORD *)(*(_QWORD *)&v88[0].ulReserved + 32LL);
  if ( (v18 & 1) == 0 || (v19 = *(_DWORD *)(v85[0] + 248LL), (v19 & 1) != 0) )
  {
LABEL_47:
    v75 = (LINEATTRS *)(v85[0] + 208LL);
    EBOX::EBOX((EBOX *)v89, (struct DCOBJ *)v85, &v82, (struct _LINEATTRS *)(v85[0] + 208LL), 0);
    if ( v89[0] )
      goto LABEL_65;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v92, (struct XDCOBJ *)v85, 1);
    if ( v93 )
    {
      if ( EPATHOBJ::bMoveTo((EPATHOBJ *)v92, 0LL, &v90)
        && EPATHOBJ::bPolyLineTo((EPATHOBJ *)v92, 0LL, &v91, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v92) )
      {
        if ( (*(_DWORD *)(v85[0] + 248LL) & 1) == 0 )
        {
          v76 = *(_QWORD *)(v85[0] + 144LL);
          if ( v89[1] )
          {
            v79 = *(_QWORD *)(v85[0] + 136LL);
            *(_QWORD *)(v85[0] + 136LL) = v76;
            *(_DWORD *)(v85[0] + 316LL) |= 1u;
            v78 = EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v92, (struct XDCOBJ *)v85, 0LL, 0LL, 2u);
            *(_QWORD *)(v85[0] + 136LL) = v79;
            *(_DWORD *)(v85[0] + 316LL) |= 1u;
          }
          else
          {
            iJoin = v75->iJoin;
            if ( (*(_DWORD *)(v76 + 40) & 0x800) != 0 )
              v75->iJoin = 2;
            v78 = EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v92, (struct XDCOBJ *)v85, v75, v88, 3u);
            v75->iJoin = iJoin;
          }
          v12 = v78;
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
    EPATHOBJ::vUnlock((EPATHOBJ *)v92);
    if ( v95 )
    {
      PopThreadGuardedObject(v94);
      v95 = 0;
    }
    goto LABEL_65;
  }
  if ( *(struct PEN **)(v85[0] + 144LL) != gpPenNull )
  {
    v87 = (LINEATTRS *)(v85[0] + 208LL);
    if ( (*(_DWORD *)(v85[0] + 208LL) & 1) == 0 )
    {
      v44 = v18 & 2;
      if ( *(_DWORD *)(*(_QWORD *)(v85[0] + 976LL) + 208LL) == 2 )
      {
        if ( v44 )
        {
          v61 = (*(_DWORD *)(*(_QWORD *)&v88[0].ulReserved + 24LL) + 15) >> 4;
          v62 = (*(_DWORD *)(*(_QWORD *)&v88[0].ulReserved + 28LL) + 15) >> 4;
          v82.left = v61 + v16;
          v82.right = v61 + v14;
          v82.top = v62 + a3;
          v82.bottom = v62 + a5;
        }
        else
        {
          v81 = 0;
          bFToL(gpPenNull, &v81, 0LL);
          v63 = *(_DWORD *)(v17 + 24);
          v64 = v81 + 15;
          v81 &= v65;
          v66 = (unsigned int)((v63 + v64) >> 4);
          v82.left = v66;
          bFToL(v66, &v81, v65);
          v67 = v81 + 15;
          v81 &= v68;
          v82.right = (v63 + v67) >> 4;
          bFToL(v69, &v81, v68);
          v70 = *(_DWORD *)(v17 + 28);
          v71 = v81 + 15;
          v81 &= v72;
          v73 = (unsigned int)((v70 + v71) >> 4);
          v82.top = v73;
          bFToL(v73, &v81, v72);
          v82.bottom = (v70 + v81 + 15) >> 4;
        }
        ERECTL::vOrder((ERECTL *)&v82);
        left = v82.left;
      }
      else
      {
        if ( v44 )
        {
          v45 = ((*(int *)(*(_QWORD *)&v88[0].ulReserved + 24LL) >> 3) + 1) >> 1;
          v46 = ((*(int *)(*(_QWORD *)&v88[0].ulReserved + 28LL) >> 3) + 1) >> 1;
          v82.left = v45 + v16;
          v82.right = v45 + v14;
          v82.top = v46 + a3;
          v47 = v46 + a5;
        }
        else
        {
          v81 = 0;
          bFToL(gpPenNull, &v81, 0LL);
          v48 = *(_DWORD *)(v17 + 24);
          v49 = v48 + v81;
          v81 &= v50;
          v51 = (unsigned int)(((v49 >> 3) + 1) >> 1);
          v82.left = v51;
          bFToL(v51, &v81, v50);
          v52 = v48 + v81;
          v81 &= v53;
          v82.right = ((v52 >> 3) + 1) >> 1;
          bFToL(v54, &v81, v53);
          v55 = *(_DWORD *)(v17 + 28);
          v56 = v55 + v81;
          v81 &= v57;
          v58 = (unsigned int)(((v56 >> 3) + 1) >> 1);
          v82.top = v58;
          bFToL(v58, &v81, v57);
          v47 = (((v55 + v81) >> 3) + 1) >> 1;
        }
        v82.bottom = v47;
        ERECTL::vOrder((ERECTL *)&v82);
        left = v82.left;
        v60 = v82.bottom - 1;
        --v82.right;
        --v82.bottom;
        if ( v82.left > v82.right || v82.top > v60 )
          goto LABEL_65;
      }
      RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)v96, &v82, v19 & 4);
      if ( *(struct BRUSH **)(v85[0] + 136LL) == gpbrNull )
      {
        if ( (*(_DWORD *)(v85[0] + 36LL) & 0x40) != 0 )
        {
          v82.left = v83;
          v82.right = v84;
          v82.top = a3;
          v82.bottom = a5;
          XDCOBJ::vAccumulate((XDCOBJ *)v85, (struct ERECTL *)&v82);
        }
      }
      else
      {
        v82.left = left + 1;
        v82.top = v74 + 1;
        if ( !ERECTL::bWrapped((ERECTL *)&v82) && !(unsigned int)GreRectBlt((struct DCOBJ *)v85, (struct ERECTL *)&v82) )
          goto LABEL_64;
      }
      v43 = EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v96, (struct XDCOBJ *)v85, v87, 0LL, 1u);
      goto LABEL_46;
    }
    goto LABEL_47;
  }
  if ( *(struct BRUSH **)(v85[0] + 136LL) != gpbrNull || (*(_DWORD *)(v85[0] + 36LL) & 0x40) != 0 )
  {
    v20 = *(_DWORD *)(*(_QWORD *)&v88[0].ulReserved + 32LL) & 2;
    if ( *(_DWORD *)(*(_QWORD *)(v85[0] + 976LL) + 208LL) == 2 )
    {
      if ( v20 )
      {
        v32 = (*(_DWORD *)(*(_QWORD *)&v88[0].ulReserved + 24LL) + 15) >> 4;
        v33 = (*(_DWORD *)(*(_QWORD *)&v88[0].ulReserved + 28LL) + 15) >> 4;
        v82.left = v32 + v16;
        v82.right = v32 + v14;
        v82.top = v33 + a3;
        v34 = v33 + a5;
      }
      else
      {
        v81 = 0;
        bFToL(gpbrNull, &v81, 0LL);
        v35 = *(_DWORD *)(v17 + 24);
        v36 = (unsigned int)((v35 + v81 + 15) >> 4);
        v82.left = (v35 + v81 + 15) >> 4;
        v81 = 0;
        bFToL(v36, &v81, v37);
        v82.right = (v35 + v81 + 15) >> 4;
        v81 = 0;
        bFToL(v38, &v81, v39);
        v40 = *(_DWORD *)(v17 + 28);
        v41 = (unsigned int)((v40 + v81 + 15) >> 4);
        v82.top = (v40 + v81 + 15) >> 4;
        v81 = 0;
        bFToL(v41, &v81, v42);
        v34 = (v40 + v81 + 15) >> 4;
      }
      v82.bottom = v34;
      ERECTL::vOrder((ERECTL *)&v82);
    }
    else
    {
      if ( v20 )
      {
        v21 = ((*(int *)(*(_QWORD *)&v88[0].ulReserved + 24LL) >> 3) + 1) >> 1;
        v22 = ((*(int *)(*(_QWORD *)&v88[0].ulReserved + 28LL) >> 3) + 1) >> 1;
        v82.left = v21 + v16;
        v82.right = v21 + v14;
        v82.top = v22 + a3;
        v23 = v22 + a5;
      }
      else
      {
        v81 = 0;
        bFToL(gpbrNull, &v81, 0LL);
        v24 = *(_DWORD *)(v17 + 24);
        v25 = (unsigned int)((((v24 + v81) >> 3) + 1) >> 1);
        v82.left = (((v24 + v81) >> 3) + 1) >> 1;
        v81 = 0;
        bFToL(v25, &v81, v26);
        v82.right = (((v24 + v81) >> 3) + 1) >> 1;
        v81 = 0;
        bFToL(v27, &v81, v28);
        v29 = *(_DWORD *)(v17 + 28);
        v30 = (unsigned int)((((v29 + v81) >> 3) + 1) >> 1);
        v82.top = (((v29 + v81) >> 3) + 1) >> 1;
        v81 = 0;
        bFToL(v30, &v81, v31);
        v23 = (((v29 + v81) >> 3) + 1) >> 1;
      }
      v82.bottom = v23;
      ERECTL::vOrder((ERECTL *)&v82);
      --v82.right;
      --v82.bottom;
    }
    if ( !ERECTL::bWrapped((ERECTL *)&v82) )
    {
      v43 = GreRectBlt((struct DCOBJ *)v85, (struct ERECTL *)&v82);
LABEL_46:
      v12 = v43;
    }
  }
LABEL_65:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v85);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v86);
  return v12;
}
