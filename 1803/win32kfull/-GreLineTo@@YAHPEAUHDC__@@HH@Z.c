/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC
 * Callers:
 *     NtGdiLineTo @ 0x1C011B940 (NtGdiLineTo.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009C1AC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C011C1DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C011D14C (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  unsigned int v4; // ebx
  LONG v5; // r12d
  unsigned int v6; // edi
  struct _RECTL *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *p_right; // r15
  int v10; // esi
  struct _RECTL *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  _DWORD *v15; // rcx
  int v16; // edx
  int v17; // r8d
  LONG v18; // r12d
  unsigned int *v19; // r10
  int v20; // r9d
  LONG v21; // r13d
  int x; // r14d
  int y; // esi
  LONG v24; // ecx
  struct _RECTL *v25; // r8
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r14d
  int v29; // edx
  unsigned int v30; // r13d
  LONG v31; // esi
  LONG v32; // r12d
  unsigned __int64 v33; // rdx
  LONG v34; // r9d
  LONG v35; // r10d
  LONG v36; // r11d
  struct _RECTL *v37; // r15
  struct ECLIPOBJ *v38; // rdx
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v42; // rcx
  struct _RECTL *v43; // r15
  struct REGION *v44; // rax
  struct _POINTFIX Current; // rax
  struct _RECTL *v46; // r9
  __int64 v47; // rsi
  struct _RECTL *v48; // rcx
  int v49; // edx
  struct _RECTL *v50; // rcx
  int v51; // edx
  __int64 v52; // [rsp+28h] [rbp-D8h]
  struct _RECTL *v53[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v54; // [rsp+60h] [rbp-A0h]
  struct _RECTL *v55; // [rsp+68h] [rbp-98h]
  struct _POINTL v56[2]; // [rsp+70h] [rbp-90h] BYREF
  LONG v57; // [rsp+80h] [rbp-80h]
  LONG v58; // [rsp+84h] [rbp-7Ch]
  struct _POINTL v59; // [rsp+88h] [rbp-78h] BYREF
  int v60; // [rsp+90h] [rbp-70h]
  int v61; // [rsp+94h] [rbp-6Ch]
  LINEATTRS *v62; // [rsp+98h] [rbp-68h]
  BOOL (__stdcall *v63)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+A0h] [rbp-60h]
  struct _XFORMOBJ v64[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-48h]
  _BYTE v66[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-20h]
  __int64 v68; // [rsp+E8h] [rbp-18h]
  __int128 v69; // [rsp+110h] [rbp+10h] BYREF
  PATHOBJ v70[10]; // [rsp+120h] [rbp+20h] BYREF
  char v71[32]; // [rsp+170h] [rbp+70h] BYREF
  int v72; // [rsp+190h] [rbp+90h]

  v3 = a2;
  v57 = a2;
  v58 = a3;
  v4 = 0;
  v5 = a3;
  v53[1] = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)v53, a1);
  if ( !v53[0] )
  {
    v6 = 0;
    EngSetLastError(6u);
    return v6;
  }
  if ( (v53[0][2].top & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v6 = 0;
LABEL_56:
    XDCOBJ::vUnlockFast((XDCOBJ *)v53);
    return v6;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v64, (struct XDCOBJ *)v53, 516);
  v7 = v53[0];
  v8 = *(_QWORD *)&v53[0][5].left;
  p_right = (LINEATTRS *)&v53[0][13].right;
  v62 = (LINEATTRS *)&v53[0][13].right;
  v10 = *(_DWORD *)(v8 + 8);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v53[0], *(_QWORD *)(v8 + 16));
    v7 = v53[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[5].left + 24LL));
    v7 = v53[0];
  }
  if ( (p_right->fl & 0xB) != 0
    || (v7[16].left & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v64[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*(_QWORD *)&v7[5].left + 68LL) == 2 )
  {
LABEL_51:
    v59.x = v3;
    v59.y = v5;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v70, (DC **)v53, 1);
    if ( v70[1] )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)v70, (struct EXFORMOBJ *)v64, &v59, 1u) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v70);
        v46 = v53[0];
        *(_DWORD *)(*(_QWORD *)&v53[0][5].left + 8LL) &= 0xFFFFFCFF;
        *(struct _POINTL *)(*(_QWORD *)&v46[5].left + 76LL) = v59;
        *(_DWORD *)(*(_QWORD *)&v46[5].left + 84LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*(_QWORD *)&v46[5].left + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (v53[0][16].left & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(v70, (POINTL **)v53, p_right, v64, 1u) )
        {
          v6 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v70);
    if ( v72 )
      PopThreadGuardedObject(v71);
    goto LABEL_56;
  }
  v67 = 0LL;
  v68 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v66, (struct XDCOBJ *)v53, 0);
  if ( (v66[24] & 1) == 0 )
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)v53);
    goto LABEL_43;
  }
  v11 = v53[0];
  v12 = *(_QWORD *)&v53[0][31].right;
  v65 = v12;
  if ( !v12 )
    goto LABEL_68;
  v13 = *(_DWORD *)(v12 + 112);
  if ( (v13 & 0x100) != 0 )
  {
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)&v53[0][3].left + 2928LL);
  }
  else
  {
    if ( *(_WORD *)(v12 + 100) || (v13 & 0x20) != 0 )
      goto LABEL_68;
    v14 = EngLineTo;
  }
  v63 = v14;
  if ( !v14 )
  {
LABEL_68:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
LABEL_69:
    p_right = v62;
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v64[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = *(_DWORD **)&v53[0][5].left;
    v16 = *(int *)(*(_QWORD *)&v64[0].ulReserved + 24LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v64[0].ulReserved + 28LL) >> 4;
    v18 = v17 + v5;
    v19 = v15 + 2;
    v20 = v15[2];
    v21 = v3 + v16;
    if ( (v20 & 0x100) != 0 )
    {
      x = (int)v15[21] >> 4;
      y = (int)v15[22] >> 4;
    }
    else
    {
      x = v16 + v15[19];
      y = v17 + v15[20];
    }
  }
  else
  {
    v47 = *(_QWORD *)&v53[0][5].left;
    v56[0].x = v3;
    v56[0].y = v5;
    v55 = (struct _RECTL *)(v47 + 8);
    v54 = *(_DWORD *)(v47 + 8);
    if ( (v54 & 0x200) != 0 )
    {
      v56[1] = *(struct _POINTL *)(v47 + 76);
      EXFORMOBJ::bXform((EXFORMOBJ *)v64, v56, 2LL);
      x = v56[1].x;
      y = v56[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v64, v56, 1LL);
      x = *(int *)(v47 + 84) >> 4;
      y = *(int *)(v47 + 88) >> 4;
    }
    v21 = v56[0].x;
    v18 = v56[0].y;
    v20 = v54;
    v19 = (unsigned int *)v55;
  }
  LODWORD(v55) = y;
  v61 = x;
  v60 = y;
  v54 = x;
  if ( (unsigned int)(v21 + 134217726) > 0xFFFFFFC || (unsigned int)(v18 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    goto LABEL_44;
  }
  v24 = v57;
  *v19 = v20 & 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v11[5].left + 76LL) = v24;
  *(_DWORD *)(*(_QWORD *)&v11[5].left + 80LL) = v58;
  *(_DWORD *)(*(_QWORD *)&v11[5].left + 84LL) = 16 * v21;
  *(_DWORD *)(*(_QWORD *)&v11[5].left + 88LL) = 16 * v18;
  v25 = v53[0];
  v26 = v53[0][2].right & 1LL;
  v27 = *(&v53[0][89].left + 2 * v26);
  v28 = v27 + x;
  v29 = *(&v53[0][89].top + 2 * v26);
  v30 = v27 + v21;
  v31 = v29 + y;
  v32 = v29 + v18;
  if ( v28 + 134217726 > 0xFFFFFFC
    || (unsigned int)(v31 + 134217726) > 0xFFFFFFC
    || v30 + 134217726 > 0xFFFFFFC
    || (unsigned int)(v32 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    v50 = v53[0];
    v51 = 16 * v61;
    *(_DWORD *)(*(_QWORD *)&v53[0][5].left + 8LL) &= ~0x200u;
    *(_DWORD *)(*(_QWORD *)&v50[5].left + 8LL) |= 0x100u;
    *(_DWORD *)(*(_QWORD *)&v50[5].left + 84LL) = v51;
    *(_DWORD *)(*(_QWORD *)&v50[5].left + 88LL) = 16 * (_DWORD)v55;
    goto LABEL_44;
  }
  if ( (int)v28 > (int)v30 )
  {
    v33 = v30;
    v34 = v28 + 1;
  }
  else
  {
    v33 = v28;
    v34 = v30 + 1;
  }
  DWORD2(v69) = v34;
  LODWORD(v69) = v33;
  if ( v31 > v32 )
  {
    v35 = v32;
    DWORD1(v69) = v32;
    v36 = v31 + 1;
  }
  else
  {
    v35 = v31;
    DWORD1(v69) = v31;
    v36 = v32 + 1;
  }
  HIDWORD(v69) = v36;
  if ( (v53[0][2].top & 0xE0) != 0 )
  {
    *(_OWORD *)&v56[0].x = v69;
    XDCOBJ::vAccumulate((XDCOBJ *)v53, (struct ECLIPOBJ *)v33, (struct ERECTL *)v56);
    v34 = DWORD2(v69);
    LODWORD(v33) = v69;
    v25 = v53[0];
    v36 = HIDWORD(v69);
    v35 = DWORD1(v69);
  }
  if ( *(struct PEN **)&v25[9].right != gpPenNull )
  {
    v55 = 0LL;
    if ( (int)v33 >= v25[88].left && v34 <= v25[88].right && v35 >= v25[88].top && v36 <= v25[88].bottom )
      goto LABEL_37;
    v43 = v25 + 135;
    v55 = v25 + 135;
    v44 = XDCOBJ::prgnEffRao((DC **)v53);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v43, v44, (struct ERECTL *)&v69, 0);
    if ( !ERECTL::bEmpty((ERECTL *)&v43->top) )
    {
      v25 = v53[0];
LABEL_37:
      v37 = v25 + 108;
      if ( v25[108].left == -1 )
      {
        *(_DWORD *)(*(_QWORD *)&v25[5].left + 8LL) |= 2u;
        v25 = v53[0];
      }
      v38 = *(struct ECLIPOBJ **)&v25[5].left;
      v39 = *((_DWORD *)v38 + 2);
      if ( (((unsigned __int8)v39 | LOBYTE(v25[20].top)) & 2) != 0 )
      {
        *((_DWORD *)v38 + 2) = v39 & 0xFFFFFFFD;
        v42 = v65;
        v52 = v65;
        v53[0][20].top &= ~2u;
        EBRUSHOBJ::vInitBrush(
          v37,
          v53[0],
          *(_QWORD *)&v53[0][9].right,
          *(_QWORD *)&v53[0][6].left,
          *(_QWORD *)(v42 + 128),
          v52,
          0);
        v25 = v53[0];
      }
      if ( (v25[2].top & 0xE0) != 0 && (v37[7].right & 0x100) == 0 )
      {
        *(_OWORD *)&v56[0].x = v69;
        XDCOBJ::vAccumulateTight(v53, v38, (__m128i *)v56);
      }
      v40 = v65;
      ++*(_DWORD *)(v65 + 92);
      if ( ((unsigned int (__fastcall *)(__int64, struct _RECTL *, struct _RECTL *, _QWORD, LONG, unsigned int, LONG, __int128 *, int))v63)(
             v40 + 24,
             v55,
             v37,
             v28,
             v31,
             v30,
             v32,
             &v69,
             (((*(_BYTE *)(*(_QWORD *)&v53[0][5].left + 72LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*(_QWORD *)&v53[0][5].left
                                                                                              + 72LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1) << 8)) )
      {
        goto LABEL_43;
      }
      v48 = v53[0];
      v49 = 16 * v54;
      *(_DWORD *)(*(_QWORD *)&v53[0][5].left + 8LL) &= ~0x200u;
      *(_DWORD *)(*(_QWORD *)&v48[5].left + 8LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)&v48[5].left + 84LL) = v49;
      *(_DWORD *)(*(_QWORD *)&v48[5].left + 88LL) = 16 * v60;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
      v3 = v57;
      v5 = v58;
      goto LABEL_69;
    }
  }
LABEL_43:
  v4 = v6;
LABEL_44:
  XDCOBJ::vUnlockFast((XDCOBJ *)v53);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
  return v4;
}
