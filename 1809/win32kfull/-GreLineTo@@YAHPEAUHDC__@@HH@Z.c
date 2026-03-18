/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00A0A94
 * Callers:
 *     NtGdiLineTo @ 0x1C00A0990 (NtGdiLineTo.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A12B4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013E3DC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0140FC0 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014133C (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // r14d
  LONG v4; // r12d
  int v5; // edi
  unsigned int v6; // ebx
  DC *v7; // r8
  __int64 v8; // rdx
  LINEATTRS *v9; // r15
  int v10; // esi
  DC *v11; // r15
  __int64 v12; // rcx
  int v13; // eax
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  int *v15; // rcx
  int v16; // edx
  int v17; // r8d
  LONG v18; // r12d
  unsigned int *v19; // r10
  int v20; // r9d
  LONG v21; // r13d
  int x; // r14d
  int y; // esi
  __int64 v24; // rsi
  LONG v25; // ecx
  DC *v26; // r8
  char *v27; // rcx
  int v28; // eax
  unsigned int v29; // r14d
  int v30; // ecx
  signed int v31; // r13d
  int v32; // esi
  int v33; // r12d
  unsigned __int64 v34; // rdx
  signed int v35; // r9d
  int v36; // r10d
  int v37; // r11d
  char *v38; // r15
  struct REGION *v39; // rax
  char *v40; // r15
  struct ECLIPOBJ *v41; // rdx
  int v42; // ecx
  __int64 v43; // rcx
  __int64 v44; // rdx
  DC *v45; // rcx
  DC *v46; // rcx
  int v47; // edx
  struct _POINTFIX Current; // rax
  DC *v49; // r9
  __int64 v51; // [rsp+28h] [rbp-D8h]
  int v52; // [rsp+50h] [rbp-B0h]
  int v53; // [rsp+50h] [rbp-B0h]
  unsigned int *v54; // [rsp+58h] [rbp-A8h]
  int v55; // [rsp+58h] [rbp-A8h]
  char *v56; // [rsp+58h] [rbp-A8h]
  struct _POINTL v57[2]; // [rsp+60h] [rbp-A0h] BYREF
  LONG v58; // [rsp+70h] [rbp-90h]
  LONG v59; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v60; // [rsp+78h] [rbp-88h] BYREF
  DC *v61[6]; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+B0h] [rbp-50h]
  int v63; // [rsp+B4h] [rbp-4Ch]
  LINEATTRS *v64; // [rsp+B8h] [rbp-48h]
  BOOL (__stdcall *v65)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+C0h] [rbp-40h]
  struct _XFORMOBJ v66[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-28h]
  _BYTE v68[32]; // [rsp+E0h] [rbp-20h] BYREF
  char v69[80]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v70; // [rsp+150h] [rbp+50h] BYREF
  char v71[8]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v72; // [rsp+168h] [rbp+68h]
  char v73[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v74; // [rsp+1D0h] [rbp+D0h]

  v3 = a2;
  v58 = a2;
  v59 = a3;
  v4 = a3;
  v5 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v61, a1);
  v6 = 0;
  if ( !v61[0] )
  {
    v5 = 0;
    EngSetLastError(6u);
    goto LABEL_76;
  }
  if ( (*((_DWORD *)v61[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
LABEL_76:
    v6 = v5;
    goto LABEL_77;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v66, (struct XDCOBJ *)v61, 0x204u);
  v7 = v61[0];
  v8 = *((_QWORD *)v61[0] + 122);
  v9 = (LINEATTRS *)((char *)v61[0] + 208);
  v64 = (LINEATTRS *)((char *)v61[0] + 208);
  v10 = *(_DWORD *)(v8 + 152);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v61[0], *(_QWORD *)(v8 + 160));
    v7 = v61[0];
  }
  if ( (v10 & 0x2000) != 0 )
  {
    GreDCSelectPen(v7, *(_QWORD *)(*((_QWORD *)v7 + 122) + 168LL));
    v7 = v61[0];
  }
  if ( (v9->fl & 0xB) != 0
    || (*((_DWORD *)v7 + 62) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v66[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL) == 2 )
  {
    goto LABEL_60;
  }
  DCOBJ::DCOBJ((DCOBJ *)v69);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v68, (struct XDCOBJ *)v61, 0);
  if ( (v68[24] & 1) == 0 )
  {
    v5 = XDCOBJ::bFullScreen((XDCOBJ *)v61);
    goto LABEL_66;
  }
  v11 = v61[0];
  v12 = *((_QWORD *)v61[0] + 62);
  v67 = v12;
  if ( !v12 )
    goto LABEL_64;
  v13 = *(_DWORD *)(v12 + 112);
  if ( (v13 & 0x100) != 0 )
  {
    v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v61[0] + 6) + 2936LL);
  }
  else
  {
    if ( *(_WORD *)(v12 + 100) || (v13 & 0x20) != 0 )
      goto LABEL_64;
    v14 = EngLineTo;
  }
  v65 = v14;
  if ( !v14 )
  {
LABEL_64:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v68);
    goto LABEL_59;
  }
  if ( (*(_DWORD *)(*(_QWORD *)&v66[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = (int *)*((_QWORD *)v61[0] + 122);
    v16 = *(int *)(*(_QWORD *)&v66[0].ulReserved + 24LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v66[0].ulReserved + 28LL) >> 4;
    v18 = v17 + v4;
    v19 = (unsigned int *)(v15 + 38);
    v20 = v15[38];
    v21 = v3 + v16;
    if ( (v20 & 0x100) != 0 )
    {
      x = v15[2] >> 4;
      y = v15[3] >> 4;
    }
    else
    {
      x = v16 + v15[54];
      y = v17 + v15[55];
    }
  }
  else
  {
    v24 = *((_QWORD *)v61[0] + 122);
    v57[0].x = v3;
    v57[0].y = v4;
    v54 = (unsigned int *)(v24 + 152);
    v52 = *(_DWORD *)(v24 + 152);
    if ( (v52 & 0x200) != 0 )
    {
      v57[1] = *(struct _POINTL *)(v24 + 216);
      EXFORMOBJ::bXform((EXFORMOBJ *)v66, v57, 2LL);
      x = v57[1].x;
      y = v57[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v66, v57, 1LL);
      x = *(int *)(v24 + 8) >> 4;
      y = *(int *)(v24 + 12) >> 4;
    }
    v21 = v57[0].x;
    v18 = v57[0].y;
    v20 = v52;
    v19 = v54;
  }
  v55 = y;
  v63 = x;
  v62 = y;
  v53 = x;
  if ( (unsigned int)(v21 + 134217726) > 0xFFFFFFC || (unsigned int)(v18 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v25 = v58;
    *v19 = v20 & 0xFFFFFCFF;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 216LL) = v25;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 220LL) = v59;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 8LL) = 16 * v21;
    *(_DWORD *)(*((_QWORD *)v11 + 122) + 12LL) = 16 * v18;
    v26 = v61[0];
    v27 = (char *)v61[0] + 1024;
    if ( (*((_DWORD *)v61[0] + 10) & 1) == 0 )
      v27 = (char *)v61[0] + 1016;
    v28 = *(_DWORD *)v27;
    v29 = *(_DWORD *)v27 + x;
    v30 = *((_DWORD *)v61[0] + 2 * (*((_DWORD *)v61[0] + 10) & 1) + 255);
    v31 = v28 + v21;
    v32 = v30 + y;
    v33 = v30 + v18;
    if ( v29 + 134217726 <= 0xFFFFFFC
      && (unsigned int)(v32 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v31 + 134217726) <= 0xFFFFFFC
      && (unsigned int)(v33 + 134217726) <= 0xFFFFFFC )
    {
      if ( (int)v29 > v31 )
      {
        v34 = (unsigned int)v31;
        v35 = v29 + 1;
      }
      else
      {
        v34 = v29;
        v35 = v31 + 1;
      }
      DWORD2(v70) = v35;
      LODWORD(v70) = v34;
      if ( v32 > v33 )
      {
        v36 = v33;
        DWORD1(v70) = v33;
        v37 = v32 + 1;
      }
      else
      {
        v36 = v32;
        DWORD1(v70) = v32;
        v37 = v33 + 1;
      }
      HIDWORD(v70) = v37;
      if ( (*((_DWORD *)v61[0] + 9) & 0xE0) != 0 )
      {
        *(_OWORD *)&v57[0].x = v70;
        XDCOBJ::vAccumulate((XDCOBJ *)v61, (struct ECLIPOBJ *)v34, (struct ERECTL *)v57);
        v35 = DWORD2(v70);
        LODWORD(v34) = v70;
        v26 = v61[0];
        v37 = HIDWORD(v70);
        v36 = DWORD1(v70);
      }
      if ( *((struct PEN **)v26 + 18) != gpPenNull )
      {
        v56 = 0LL;
        if ( (int)v34 >= *((_DWORD *)v26 + 250)
          && v35 <= *((_DWORD *)v26 + 252)
          && v36 >= *((_DWORD *)v26 + 251)
          && v37 <= *((_DWORD *)v26 + 253) )
        {
LABEL_50:
          v40 = (char *)v26 + 1344;
          if ( *((_DWORD *)v26 + 336) == -1 )
          {
            *(_DWORD *)(*((_QWORD *)v26 + 122) + 152LL) |= 2u;
            v26 = v61[0];
          }
          v41 = (struct ECLIPOBJ *)*((_QWORD *)v26 + 122);
          v42 = *((_DWORD *)v41 + 38);
          if ( (((unsigned __int8)v42 | *((_BYTE *)v26 + 316)) & 2) != 0 )
          {
            *((_DWORD *)v41 + 38) = v42 & 0xFFFFFFFD;
            v43 = v67;
            v51 = v67;
            *((_DWORD *)v61[0] + 79) &= ~2u;
            EBRUSHOBJ::vInitBrush(
              v40,
              v61[0],
              *((_QWORD *)v61[0] + 18),
              *((_QWORD *)v61[0] + 11),
              *(_QWORD *)(v43 + 128),
              v51,
              0);
            v26 = v61[0];
          }
          if ( (*((_DWORD *)v26 + 9) & 0xE0) != 0 && (*((_DWORD *)v40 + 30) & 0x100) == 0 )
          {
            *(_OWORD *)&v57[0].x = v70;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v61, v41, (__m128i *)v57);
          }
          v44 = v67;
          ++*(_DWORD *)(v67 + 92);
          if ( !((unsigned int (__fastcall *)(__int64, char *, char *, _QWORD, int, signed int, int, __int128 *, int))v65)(
                  v44 + 24,
                  v56,
                  v40,
                  v29,
                  v32,
                  v31,
                  v33,
                  &v70,
                  (((*(_BYTE *)(*((_QWORD *)v61[0] + 122) + 212LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*((_QWORD *)v61[0] + 122) + 212LL)
                                                                                        - 1) & 0xF)
                                                                                      + 1) << 8)) )
          {
            v45 = v61[0];
            *(_DWORD *)(*((_QWORD *)v61[0] + 122) + 152LL) &= ~0x200u;
            *(_DWORD *)(*((_QWORD *)v45 + 122) + 152LL) |= 0x100u;
            *(_DWORD *)(*((_QWORD *)v45 + 122) + 8LL) = 16 * v53;
            *(_DWORD *)(*((_QWORD *)v45 + 122) + 12LL) = 16 * v62;
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v68);
            v3 = v58;
            v4 = v59;
LABEL_59:
            v9 = v64;
LABEL_60:
            v60.x = v3;
            v60.y = v4;
            PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v71, (struct XDCOBJ *)v61, 1);
            if ( v72 )
            {
              if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)v71, (struct EXFORMOBJ *)v66, &v60, 1u) )
              {
                Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v71);
                v49 = v61[0];
                *(_DWORD *)(*((_QWORD *)v61[0] + 122) + 152LL) &= 0xFFFFFCFF;
                *(struct _POINTL *)(*((_QWORD *)v49 + 122) + 216LL) = v60;
                *(_DWORD *)(*((_QWORD *)v49 + 122) + 8LL) = *(_DWORD *)Current.x;
                *(_DWORD *)(*((_QWORD *)v49 + 122) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
                if ( (*((_DWORD *)v61[0] + 62) & 1) == 0
                  && !(unsigned int)EPATHOBJ::bStrokeAndOrFill((EPATHOBJ *)v71, (struct XDCOBJ *)v61, v9, v66, 1u) )
                {
                  v5 = 0;
                }
              }
            }
            else
            {
              EngSetLastError(8u);
            }
            EPATHOBJ::vUnlock((EPATHOBJ *)v71);
            if ( v74 )
              PopThreadGuardedObject(v73);
            goto LABEL_76;
          }
          goto LABEL_66;
        }
        v38 = (char *)v26 + 1776;
        v56 = (char *)v26 + 1776;
        v39 = XDCOBJ::prgnEffRao(v61);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v38, v39, (struct ERECTL *)&v70, 0);
        if ( !ERECTL::bEmpty((ERECTL *)(v38 + 4)) )
        {
          v26 = v61[0];
          goto LABEL_50;
        }
      }
LABEL_66:
      v6 = v5;
      goto LABEL_67;
    }
    EngSetLastError(0x57u);
    v46 = v61[0];
    v47 = 16 * v63;
    *(_DWORD *)(*((_QWORD *)v61[0] + 122) + 152LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v46 + 122) + 152LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v46 + 122) + 8LL) = v47;
    *(_DWORD *)(*((_QWORD *)v46 + 122) + 12LL) = 16 * v55;
  }
LABEL_67:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v68);
LABEL_77:
  DCOBJ::~DCOBJ((DCOBJ *)v61);
  return v6;
}
