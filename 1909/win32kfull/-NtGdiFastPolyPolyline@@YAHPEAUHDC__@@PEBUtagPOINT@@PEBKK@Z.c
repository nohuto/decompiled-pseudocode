/*
 * XREFs of ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00AAE18 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AD630 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0127240 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1C0153668 (-bMakePathRecords@@YAHPEAU_PATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0165E08 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(HDC a1, struct _POINTL *a2, unsigned int *a3, unsigned int a4)
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
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edx
  int v24; // r13d
  struct _POINTL *v25; // r10
  int v26; // r8d
  int v27; // edx
  struct _POINTL *v28; // rdi
  unsigned int *v29; // r10
  int v30; // r13d
  FIX xRight; // edx
  FIX yBottom; // ecx
  struct ECLIPOBJ *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r9
  char *v37; // r13
  __int64 v38; // r10
  int v39; // r8d
  int v40; // r15d
  struct REGION *v41; // rax
  struct ECLIPOBJ *v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // eax
  int v46; // eax
  int v47; // [rsp+54h] [rbp-3E4h]
  struct ECLIPOBJ *v48[2]; // [rsp+58h] [rbp-3E0h] BYREF
  unsigned int v49; // [rsp+68h] [rbp-3D0h]
  int v50; // [rsp+6Ch] [rbp-3CCh]
  int v51; // [rsp+70h] [rbp-3C8h]
  int v52; // [rsp+74h] [rbp-3C4h]
  unsigned int v53; // [rsp+78h] [rbp-3C0h]
  struct _POINTL *v54; // [rsp+80h] [rbp-3B8h]
  struct _POINTL *v55; // [rsp+88h] [rbp-3B0h]
  int v56; // [rsp+90h] [rbp-3A8h]
  int v57; // [rsp+94h] [rbp-3A4h]
  unsigned int v58; // [rsp+9Ch] [rbp-39Ch]
  int v59; // [rsp+A0h] [rbp-398h]
  unsigned int *v60; // [rsp+A8h] [rbp-390h]
  unsigned int *v61; // [rsp+B0h] [rbp-388h]
  char *v62; // [rsp+B8h] [rbp-380h]
  _QWORD v63[2]; // [rsp+C0h] [rbp-378h] BYREF
  unsigned int *v64; // [rsp+D0h] [rbp-368h]
  _DWORD v65[2]; // [rsp+E0h] [rbp-358h] BYREF
  char *v66; // [rsp+E8h] [rbp-350h]
  __int128 v67; // [rsp+F0h] [rbp-348h]
  __int128 v68; // [rsp+100h] [rbp-338h]
  __int64 v69; // [rsp+110h] [rbp-328h]
  int v70; // [rsp+118h] [rbp-320h]
  int v71; // [rsp+11Ch] [rbp-31Ch]
  __int64 v72; // [rsp+120h] [rbp-318h]
  __int64 v73; // [rsp+128h] [rbp-310h]
  __m128i v74; // [rsp+130h] [rbp-308h] BYREF
  _BYTE v75[80]; // [rsp+140h] [rbp-2F8h] BYREF
  char v76; // [rsp+190h] [rbp-2A8h] BYREF
  struct _PATHRECORD *v77; // [rsp+1B0h] [rbp-288h]
  struct _PATHRECORD *v78; // [rsp+1B8h] [rbp-280h] BYREF
  struct _RECTFX v79; // [rsp+1C0h] [rbp-278h] BYREF
  __int64 v80; // [rsp+1D8h] [rbp-260h]
  int v81; // [rsp+1E0h] [rbp-258h]
  __m128i v82; // [rsp+2D0h] [rbp-168h] BYREF
  _BYTE v83[112]; // [rsp+2E0h] [rbp-158h] BYREF
  _BYTE v84[4]; // [rsp+350h] [rbp-E8h] BYREF
  __m128i v85[9]; // [rsp+354h] [rbp-E4h] BYREF

  v4 = a4;
  v60 = a3;
  v55 = a2;
  v54 = a2;
  v61 = a3;
  v53 = a4;
  v7 = 0;
  v49 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v48, a1);
  if ( !v48[0] || (*((_DWORD *)v48[0] + 9) & 0x10000) != 0 )
    goto LABEL_63;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v63, (struct XDCOBJ *)v48, 516);
  v9 = v48[0];
  v62 = (char *)v48[0] + 208;
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
    v58 = 0;
    v14 = v4;
    v59 = v4;
    v15 = a3;
    v64 = a3;
    do
    {
      v13 += *v15;
      v58 = v13;
      v64 = ++v15;
      v16 = v14-- == 1;
      v59 = v14;
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
      v49 = v13;
    }
  }
  if ( !v7
    || (unsigned int)v4 >= 0x8000000
    || v7 >= 0x8000000
    || (*((_DWORD *)v9 + 62) & 1) != 0
    || (*(_DWORD *)v62 & 3) != 0
    || *((_QWORD *)v62 + 3) )
  {
    goto LABEL_63;
  }
  v73 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v71 = 0;
  v70 = 0;
  v72 = 0LL;
  v69 = 0LL;
  v18 = 0LL;
  v54 = 0LL;
  memset(v83, 0, 0x68uLL);
  v19 = 8 * ((unsigned int)v4 + v7 + 2 * (_DWORD)v4);
  if ( (unsigned int)v19 > 0x64 )
  {
    if ( (unsigned int)v19 <= 0x2710000 )
    {
      v18 = (struct _PATHRECORD *)AllocFreeTmpBuffer((unsigned int)v19);
      v54 = (struct _POINTL *)v18;
    }
    if ( !v18 )
      goto LABEL_71;
  }
  else
  {
    v18 = (struct _PATHRECORD *)v83;
    v54 = (struct _POINTL *)v83;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v75, (struct XDCOBJ *)v48, 0);
  if ( (v75[24] & 1) == 0 )
  {
    v44 = XDCOBJ::bFullScreen((XDCOBJ *)v48);
    goto LABEL_59;
  }
  v20 = (char *)v48[0] + 1024;
  v21 = *((_DWORD *)v48[0] + 10) & 1;
  if ( (*((_DWORD *)v48[0] + 10) & 1) == 0 )
    v20 = (char *)v48[0] + 1016;
  v22 = *(_DWORD *)v20;
  v56 = v22;
  v51 = v22;
  v23 = *((_DWORD *)v48[0] + 2 * v21 + 255);
  v57 = v23;
  v52 = v23;
  v24 = 1;
  v50 = 1;
  v47 = 0;
  v25 = v55;
  if ( (*(_DWORD *)(v63[0] + 32LL) & 2) != 0
    && (*(_DWORD *)(*((_QWORD *)v48[0] + 122) + 208LL) == 1
     || ((*(_BYTE *)(v63[0] + 24LL) | *(_BYTE *)(v63[0] + 28LL)) & 0xF) == 0) )
  {
    v26 = (*(int *)(v63[0] + 24LL) >> 4) + v22;
    v51 = v26;
    v27 = (*(int *)(v63[0] + 28LL) >> 4) + v23;
    v52 = v27;
    v28 = v55;
    v29 = v60;
  }
  else
  {
    v28 = (struct _POINTL *)((char *)v18 + v19 - 8LL * v7);
    v55 = v28;
    if ( *(_DWORD *)(*((_QWORD *)v48[0] + 122) + 208LL) == 2 )
    {
      v50 = 0;
      v46 = EXFORMOBJ::bXform((EXFORMOBJ *)v63, (struct _VECTORL *)v25, (struct _VECTORFX *)v28, v7);
      v26 = *(_DWORD *)(v63[0] + 24LL) + 16 * v56;
      v51 = v26;
      v27 = *(_DWORD *)(v63[0] + 28LL) + 16 * v57;
      v52 = v27;
    }
    else
    {
      v50 = 1;
      v46 = EXFORMOBJ::bXform((EXFORMOBJ *)v63, v25, v28, v7);
      v26 = v56;
      v27 = v57;
    }
    v24 = v46;
    v29 = v60;
  }
  v65[0] = v50 != 0 ? 4 : 0;
  v30 = bMakePathRecords(v18, v29, v7, v28, v4, v26, v27, &v79, &v78) & v24;
  if ( v50 )
  {
    v82 = (__m128i)v79;
    xRight = v79.xRight;
    yBottom = v79.yBottom;
    if ( (v79.xLeft & 0xF8000000) != 0
      || (v79.xRight & 0xF8000000) != 0
      || (v79.yTop & 0xF8000000) != 0
      || (v79.yBottom & 0xF8000000) != 0 )
    {
      v47 = 1;
    }
    v79.xLeft *= 16;
    v79.xRight *= 16;
    v79.yTop *= 16;
    v79.yBottom *= 16;
  }
  else
  {
    v82.m128i_i32[0] = v79.xLeft >> 4;
    v82.m128i_i32[1] = v79.yTop >> 4;
    xRight = (v79.xRight + 15) >> 4;
    v82.m128i_i32[2] = xRight;
    yBottom = (v79.yBottom + 15) >> 4;
    v82.m128i_i32[3] = yBottom;
    if ( (xRight ^ v79.xRight) < 0 || (yBottom ^ v79.yBottom) < 0 )
      v47 = 1;
  }
  if ( yBottom == 0x7FFFFFFF || xRight == 0x7FFFFFFF )
  {
    v47 = 1;
  }
  else
  {
    v82.m128i_i32[3] = yBottom + 1;
    v82.m128i_i32[2] = xRight + 1;
  }
  if ( v30 )
  {
    v77 = v18;
    v81 = 0;
    v80 = 0LL;
    v65[1] = v7 - v4;
    v66 = &v76;
    v33 = v48[0];
    if ( (*((_DWORD *)v48[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v48, v48[0], &v82);
      v33 = v48[0];
    }
    if ( *((struct PEN **)v33 + 18) == gpPenNull )
      goto LABEL_69;
    v34 = *((_QWORD *)v33 + 62);
    if ( !v34 )
      goto LABEL_69;
    v35 = *(_QWORD *)(v34 + 128);
    v36 = *((_QWORD *)v33 + 11);
    v37 = (char *)v33 + 1320;
    if ( *((_DWORD *)v33 + 330) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v33 + 122) + 152LL) |= 2u;
      v33 = v48[0];
    }
    v38 = *((_QWORD *)v33 + 122);
    v39 = *(_DWORD *)(v38 + 152);
    if ( (((unsigned __int8)v39 | *((_BYTE *)v33 + 316)) & 2) != 0 )
    {
      *(_DWORD *)(v38 + 152) = v39 & 0xFFFFFFFD;
      *((_DWORD *)v48[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v37, v48[0], *((_QWORD *)v48[0] + 18), v36, v35, v34, 0);
      v33 = v48[0];
    }
    v40 = ((((*(_BYTE *)(*((_QWORD *)v33 + 122) + 212LL) - 1) & 0xF) + 1) << 8) | (((*(_BYTE *)(*((_QWORD *)v33 + 122)
                                                                                              + 212LL)
                                                                                   - 1) & 0xF)
                                                                                 + 1);
    v41 = XDCOBJ::prgnEffRao(v48);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v84, v41, (struct ERECTL *)&v82, v47);
    if ( ERECTL::bEmpty((ERECTL *)v85) )
    {
LABEL_69:
      v8 = 1;
      goto LABEL_60;
    }
    if ( (*((_DWORD *)v48[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v37 + 30) & 0x100) == 0 )
    {
      v74 = v85[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v48, v42, &v74);
    }
    v43 = *(_QWORD *)(v34 + 48);
    ++*(_DWORD *)(v34 + 92);
    if ( (*(_DWORD *)(v34 + 112) & 0x20) != 0 )
      v44 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))(v43 + 2800))(
              v34 + 24,
              v65,
              v84,
              0LL,
              v37,
              0LL,
              v62,
              v40);
    else
      v44 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, char *, int))EngStrokePath)(
              v34 + 24,
              v65,
              v84,
              0LL,
              v37,
              0LL,
              v62,
              v40);
LABEL_59:
    v8 = v44;
LABEL_60:
    if ( v18 != (struct _PATHRECORD *)v83 )
      FreeTmpBuffer(v18);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v75);
    goto LABEL_63;
  }
  if ( v18 != (struct _PATHRECORD *)v83 )
    FreeTmpBuffer(v18);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v75);
LABEL_71:
  DCOBJ::~DCOBJ((DCOBJ *)v48);
  return 0LL;
}
