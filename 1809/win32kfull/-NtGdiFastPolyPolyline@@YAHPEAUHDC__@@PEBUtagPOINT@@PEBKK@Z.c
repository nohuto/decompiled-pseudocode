/*
 * XREFs of ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C013D130
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0056B24 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A12B4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C013CF80 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015E8A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct tagPOINT *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v7; // r15d
  unsigned int v8; // edi
  struct ECLIPOBJ *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  const unsigned int *v12; // rdx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int *v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  struct _PATHRECORD *v18; // r14
  __int64 v19; // rdi
  char *v20; // rcx
  int v21; // r13d
  int v22; // r8d
  int v23; // edx
  struct _VECTORFX *v24; // rdi
  unsigned int *v25; // r10
  int v26; // r13d
  FIX xRight; // edx
  FIX yBottom; // ecx
  struct ECLIPOBJ *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  char *v33; // r13
  __int64 v34; // r10
  int v35; // r8d
  int v36; // r15d
  struct REGION *v37; // rax
  struct ECLIPOBJ *v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // eax
  int v42; // eax
  int v43; // [rsp+54h] [rbp-424h]
  int v44; // [rsp+5Ch] [rbp-41Ch]
  int v46; // [rsp+80h] [rbp-3F8h]
  int v47; // [rsp+84h] [rbp-3F4h]
  struct ECLIPOBJ *v48[6]; // [rsp+90h] [rbp-3E8h] BYREF
  unsigned int v49; // [rsp+C0h] [rbp-3B8h]
  int v50; // [rsp+C4h] [rbp-3B4h]
  unsigned int *v51; // [rsp+C8h] [rbp-3B0h]
  unsigned int *v52; // [rsp+D0h] [rbp-3A8h]
  char *v53; // [rsp+D8h] [rbp-3A0h]
  _QWORD v54[2]; // [rsp+E0h] [rbp-398h] BYREF
  unsigned int *v55; // [rsp+F0h] [rbp-388h]
  _DWORD v56[2]; // [rsp+100h] [rbp-378h] BYREF
  char *v57; // [rsp+108h] [rbp-370h]
  __int128 v58; // [rsp+110h] [rbp-368h]
  __int128 v59; // [rsp+120h] [rbp-358h]
  __int64 v60; // [rsp+130h] [rbp-348h]
  int v61; // [rsp+138h] [rbp-340h]
  int v62; // [rsp+13Ch] [rbp-33Ch]
  __int64 v63; // [rsp+140h] [rbp-338h]
  __int64 v64; // [rsp+148h] [rbp-330h]
  __m128i v65; // [rsp+150h] [rbp-328h] BYREF
  _BYTE v66[112]; // [rsp+160h] [rbp-318h] BYREF
  char v67; // [rsp+1D0h] [rbp-2A8h] BYREF
  struct _PATHRECORD *v68; // [rsp+1F0h] [rbp-288h]
  struct _PATHRECORD *v69; // [rsp+1F8h] [rbp-280h] BYREF
  struct _RECTFX v70; // [rsp+200h] [rbp-278h] BYREF
  __int64 v71; // [rsp+218h] [rbp-260h]
  int v72; // [rsp+220h] [rbp-258h]
  __m128i v73; // [rsp+310h] [rbp-168h] BYREF
  _BYTE v74[112]; // [rsp+320h] [rbp-158h] BYREF
  _BYTE v75[4]; // [rsp+390h] [rbp-E8h] BYREF
  __m128i v76[9]; // [rsp+394h] [rbp-E4h] BYREF

  v4 = a4;
  v51 = a3;
  v52 = a3;
  v7 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v48, a1);
  if ( !v48[0] || (*((_DWORD *)v48[0] + 9) & 0x10000) != 0 )
    goto LABEL_63;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v54, (struct XDCOBJ *)v48, 516);
  v9 = v48[0];
  v53 = (char *)v48[0] + 208;
  v10 = *((_QWORD *)v48[0] + 122);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v48[0], *(_QWORD *)(v10 + 160));
    v9 = v48[0];
  }
  if ( (v11 & 0x2000) != 0 )
  {
    GreDCSelectPen(v9, *(_QWORD *)(*((_QWORD *)v9 + 122) + 168LL));
    v9 = v48[0];
  }
  if ( !(_DWORD)v4 )
  {
    v8 = 1;
LABEL_63:
    DCOBJ::~DCOBJ((DCOBJ *)v48);
    return v8;
  }
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    if ( 4 * v4 )
    {
      v12 = &a3[v4];
      if ( (unsigned __int64)v12 > MmUserProbeAddress || v12 < a3 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v48[0];
      }
    }
    v13 = 0;
    v49 = 0;
    v14 = v4;
    v50 = v4;
    v15 = a3;
    v55 = a3;
    do
    {
      v13 += *v15;
      v49 = v13;
      v55 = ++v15;
      v16 = v14-- == 1;
      v50 = v14;
    }
    while ( !v16 );
    if ( v13 <= 0x1FFFFFFF )
    {
      v17 = v13;
      if ( v17 * 8 && ((unsigned __int64)&a2[v17] > MmUserProbeAddress || &a2[v17] < a2) )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v9 = v48[0];
      }
      v7 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v9 + 62) & 1) != 0
    || (*(_DWORD *)v53 & 3) != 0
    || *((_QWORD *)v53 + 3) )
  {
    goto LABEL_63;
  }
  v64 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v62 = 0;
  v61 = 0;
  v63 = 0LL;
  v60 = 0LL;
  v18 = 0LL;
  v19 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v19 > 0x64 )
  {
    if ( (unsigned int)v19 <= 0x2710000 )
      v18 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v19);
    if ( !v18 )
      goto LABEL_70;
  }
  else
  {
    v18 = (struct _PATHRECORD *)v74;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v66, (struct XDCOBJ *)v48, 0);
  if ( (v66[24] & 1) == 0 )
  {
    v40 = XDCOBJ::bFullScreen((XDCOBJ *)v48);
    goto LABEL_59;
  }
  v20 = (char *)v48[0] + 1024;
  if ( (*((_DWORD *)v48[0] + 10) & 1) == 0 )
    v20 = (char *)v48[0] + 1016;
  v46 = *(_DWORD *)v20;
  v47 = *((_DWORD *)v48[0] + 2 * (*((_DWORD *)v48[0] + 10) & 1) + 255);
  v21 = 1;
  v44 = 1;
  v43 = 0;
  if ( (*(_DWORD *)(v54[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)v48[0] + 122) + 208LL) == 1
     || ((*(_BYTE *)(v54[0] + 24LL) | *(_BYTE *)(v54[0] + 28LL)) & 0xF) == 0) )
  {
    v22 = (*(int *)(v54[0] + 24LL) >> 4) + *(_DWORD *)v20;
    v23 = (*(int *)(v54[0] + 28LL) >> 4) + *((_DWORD *)v48[0] + 2 * (*((_DWORD *)v48[0] + 10) & 1) + 255);
    v24 = (struct _VECTORFX *)a2;
    v25 = v51;
  }
  else
  {
    v24 = (struct _PATHRECORD *)((char *)v18 + v19 - 8LL * v7);
    if ( *(_DWORD *)(*((_QWORD *)v48[0] + 122) + 208LL) == 2 )
    {
      v44 = 0;
      v42 = EXFORMOBJ::bXform((EXFORMOBJ *)v54, (struct _VECTORL *)a2, v24, v7, 0);
      v22 = *(_DWORD *)(v54[0] + 24LL) + 16 * v46;
      v23 = *(_DWORD *)(v54[0] + 28LL) + 16 * v47;
    }
    else
    {
      v44 = 1;
      v42 = EXFORMOBJ::bXform((EXFORMOBJ *)v54, (struct _POINTL *)a2, (struct _POINTL *)v24, v7);
      v22 = v46;
      v23 = v47;
    }
    v21 = v42;
    v25 = v51;
  }
  v56[0] = v44 != 0 ? 4 : 0;
  v26 = bMakePathRecords(v18, v25, v7, (struct _POINTL *)v24, v4, v22, v23, &v70, &v69) & v21;
  if ( v44 )
  {
    v73 = (__m128i)v70;
    xRight = v70.xRight;
    yBottom = v70.yBottom;
    if ( (v70.xLeft & 0xF8000000) != 0
      || (v70.xRight & 0xF8000000) != 0
      || (v70.yTop & 0xF8000000) != 0
      || (v70.yBottom & 0xF8000000) != 0 )
    {
      v43 = 1;
    }
    v70.xLeft *= 16;
    v70.xRight *= 16;
    v70.yTop *= 16;
    v70.yBottom *= 16;
  }
  else
  {
    v73.m128i_i32[0] = v70.xLeft >> 4;
    v73.m128i_i32[1] = v70.yTop >> 4;
    xRight = (v70.xRight + 15) >> 4;
    v73.m128i_i32[2] = xRight;
    yBottom = (v70.yBottom + 15) >> 4;
    v73.m128i_i32[3] = yBottom;
    if ( (xRight ^ v70.xRight) < 0 || (yBottom ^ v70.yBottom) < 0 )
      v43 = 1;
  }
  if ( yBottom == 0x7FFFFFFF || xRight == 0x7FFFFFFF )
  {
    v43 = 1;
  }
  else
  {
    v73.m128i_i32[3] = yBottom + 1;
    v73.m128i_i32[2] = xRight + 1;
  }
  if ( v26 )
  {
    v68 = v18;
    v72 = 0;
    v71 = 0LL;
    v56[1] = v7 - v4;
    v57 = &v67;
    v29 = v48[0];
    if ( (*((_DWORD *)v48[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v48, v48[0], &v73);
      v29 = v48[0];
    }
    if ( *((struct PEN **)v29 + 18) == gpPenNull )
      goto LABEL_64;
    v30 = *((_QWORD *)v29 + 62);
    if ( !v30 )
      goto LABEL_64;
    v31 = *(_QWORD *)(v30 + 128);
    v32 = *((_QWORD *)v29 + 11);
    v33 = (char *)v29 + 1344;
    if ( *((_DWORD *)v29 + 336) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v29 + 122) + 152LL) |= 2u;
      v29 = v48[0];
    }
    v34 = *((_QWORD *)v29 + 122);
    v35 = *(_DWORD *)(v34 + 152);
    if ( (((unsigned __int8)v35 | *((_BYTE *)v29 + 316)) & 2) != 0 )
    {
      *(_DWORD *)(v34 + 152) = v35 & 0xFFFFFFFD;
      *((_DWORD *)v48[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v33, v48[0], *((_QWORD *)v48[0] + 18), v32, v31, v30, 0);
      v29 = v48[0];
    }
    v36 = ((((*(_BYTE *)(*((_QWORD *)v29 + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v29 + 122)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v37 = XDCOBJ::prgnEffRao(v48);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v75, v37, (struct ERECTL *)&v73, v43);
    if ( ERECTL::bEmpty((ERECTL *)v76) )
    {
LABEL_64:
      v8 = 1;
      goto LABEL_60;
    }
    if ( (*((_DWORD *)v48[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v33 + 30) & 0x100) == 0 )
    {
      v65 = v76[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v48, v38, &v65);
    }
    v39 = *(_QWORD *)(v30 + 48);
    ++*(_DWORD *)(v30 + 92);
    if ( (*(_DWORD *)(v30 + 112) & 0x20) != 0 )
      v40 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))(v39 + 2800))(
              v30 + 24,
              v56,
              v75,
              0LL,
              v33,
              0LL,
              v53,
              v36);
    else
      v40 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))EngStrokePath)(
              v30 + 24,
              v56,
              v75,
              0LL,
              v33,
              0LL,
              v53,
              v36);
LABEL_59:
    v8 = v40;
LABEL_60:
    if ( v18 != (struct _PATHRECORD *)v74 )
      FreeTmpBuffer(v18);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
    goto LABEL_63;
  }
  if ( v18 != (struct _PATHRECORD *)v74 )
    FreeTmpBuffer(v18);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
LABEL_70:
  DCOBJ::~DCOBJ((DCOBJ *)v48);
  return 0LL;
}
