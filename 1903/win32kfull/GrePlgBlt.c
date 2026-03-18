/*
 * XREFs of GrePlgBlt @ 0x1C0008764
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0008620 (NtGdiPlgBlt.c)
 * Callees:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0009210 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C00092B4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C005AD18 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C0072DD0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0072E78 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007F360 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007F3A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11)
{
  BOOL v14; // edi
  int v15; // r9d
  int valid; // eax
  __int64 v17; // r9
  struct SURFACE *v18; // rax
  struct SURFACE *v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // esi
  int v22; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  ULONG v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int8 v30; // r9
  _QWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C4h] [rbp-3Ch]
  char v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int16 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  __int64 v43; // [rsp+100h] [rbp+0h]
  __int16 v44; // [rsp+108h] [rbp+8h]
  _BYTE v45[16]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v46; // [rsp+160h] [rbp+60h] BYREF
  __int64 v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  __int64 v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  struct SURFACE *v51; // [rsp+190h] [rbp+90h]
  struct SURFACE *v52; // [rsp+198h] [rbp+98h]
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  char v54[8]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v55; // [rsp+1B0h] [rbp+B0h]
  struct _POINTFIX v56; // [rsp+1C8h] [rbp+C8h] BYREF
  int v57; // [rsp+1D0h] [rbp+D0h]
  int v58; // [rsp+1D4h] [rbp+D4h]
  int v59; // [rsp+1D8h] [rbp+D8h]
  int v60; // [rsp+1DCh] [rbp+DCh]
  FIX v61; // [rsp+1E8h] [rbp+E8h]
  FIX v62; // [rsp+1ECh] [rbp+ECh]
  int v63; // [rsp+1F0h] [rbp+F0h]
  int v64; // [rsp+1F4h] [rbp+F4h]
  int v65; // [rsp+200h] [rbp+100h]
  int v66; // [rsp+204h] [rbp+104h]
  int v67; // [rsp+208h] [rbp+108h]
  int v68; // [rsp+20Ch] [rbp+10Ch]
  int v69; // [rsp+210h] [rbp+110h]
  int v70; // [rsp+214h] [rbp+114h]
  int v71; // [rsp+218h] [rbp+118h]
  int v72; // [rsp+21Ch] [rbp+11Ch]
  int v73; // [rsp+228h] [rbp+128h]
  int v74; // [rsp+22Ch] [rbp+12Ch]

  v53 = 0LL;
  v74 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  DCOBJ::DCOBJ((DCOBJ *)v32, a3);
  if ( v31[0] && v32[0] && (*(_DWORD *)(v31[0] + 36LL) & 0x10000) == 0 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v32, a4, a5, a6, a7);
    v35 = 0LL;
    v36 = 0;
    v37 = 0;
    v39 = 0LL;
    v14 = 1;
    v40 = 0LL;
    v41 = 256;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 256;
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v34, (struct XDCOBJ *)v31, (struct XDCOBJ *)v32, v15);
    if ( (v38 & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v31) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v32) )
        goto LABEL_19;
      goto LABEL_25;
    }
    valid = XDCOBJ::bValidSurf((XDCOBJ *)v31);
    v17 = v32[0];
    if ( !valid
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v32)
      || (*(_DWORD *)(*(_QWORD *)(v17 + 496) + 112LL) & 0x10000000) != 0 )
    {
      v24 = v31[0];
      v25 = *(_QWORD *)(v31[0] + 976LL);
      if ( (*(_DWORD *)(v25 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v31[0], *(_QWORD *)(v25 + 160));
        v24 = v31[0];
        v17 = v32[0];
      }
      v26 = *(_QWORD *)(v17 + 976);
      if ( (*(_DWORD *)(v26 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v17, *(_QWORD *)(v26 + 160));
        v24 = v31[0];
        v17 = v32[0];
      }
      if ( (*(_DWORD *)(v24 + 32) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v32))
        && (*(_DWORD *)(v24 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v31, 0x204u, 0);
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v45, a2, &v56, 3uLL) )
          goto LABEL_40;
        BLTRECORD::vExtrema((BLTRECORD *)v45);
        BLTRECORD::vBound((BLTRECORD *)v45, (struct ERECTL *)v33);
        XDCOBJ::vAccumulate((XDCOBJ *)v31, (struct ERECTL *)v33);
        v24 = v31[0];
        v17 = v32[0];
      }
      if ( (*(_DWORD *)(v17 + 36) & 1) == 0 )
      {
        v14 = *(_QWORD *)(v24 + 496) == 0LL;
        goto LABEL_19;
      }
    }
    v18 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v18)
      || (v19 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31), !(unsigned int)DestSurfaceAccessCheck(v19)) )
    {
      v27 = 5;
      goto LABEL_59;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v31, 0x204u, 0);
    v51 = XDCOBJ::pSurfaceEff((XDCOBJ *)v31);
    v47 = *((_QWORD *)v51 + 16);
    v48 = *(_QWORD *)(v31[0] + 88LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v46, (struct XDCOBJ *)v32, 0x204u, 0);
    v52 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    v49 = *((_QWORD *)v52 + 16);
    v50 = *(_QWORD *)(v32[0] + 88LL);
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          v54,
                          0LL,
                          *(unsigned int *)(v31[0] + 120LL),
                          v49,
                          v47,
                          v50,
                          v48,
                          *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 184LL),
                          *(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 176LL),
                          a11,
                          0) )
      goto LABEL_25;
    v74 |= 2u;
    v55 = 0LL;
    if ( (*(_DWORD *)(v46 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src((BLTRECORD *)v45, a4, a5, a6, a7) )
    {
      if ( !a8 )
      {
        v53 = 0LL;
        v21 = 4;
        v73 = 52428;
        goto LABEL_15;
      }
      LOBYTE(v20) = 5;
      v28 = HmgShareLockCheck(a8, v20);
      v29 = v28;
      if ( !v28 )
      {
        v27 = 6;
        goto LABEL_59;
      }
      INC_SHARE_REF_CNT(v28);
      v74 |= 0x30000u;
      v21 = 65540;
      v53 = v29;
      v73 = 43724;
      if ( !*(_WORD *)(v29 + 100) && *(_DWORD *)(v29 + 96) == 1 )
      {
        v69 = a9;
        v71 = a9 + v67 - v65;
        v70 = a10;
        v72 = a10 + v68 - v66;
        DEC_SHARE_REF_CNT(v29);
LABEL_15:
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v45, a2, &v56, 3uLL) )
        {
          if ( v58 != v56.y
            || v59 != v56.x
            || (v56.x & 0xF) != 0
            || (v56.y & 0xF) != 0
            || (v57 & 0xF) != 0
            || (v58 & 0xF) != 0
            || (v59 & 0xF) != 0
            || (v60 & 0xF) != 0 )
          {
            v22 = BLTRECORD::bRotate(
                    (BLTRECORD *)v45,
                    (struct DCOBJ *)v31,
                    (struct DCOBJ *)v32,
                    v21,
                    *(_BYTE *)(*(_QWORD *)(v31[0] + 976LL) + 215LL));
          }
          else
          {
            v64 = v60 >> 4;
            v61 = v56.x >> 4;
            v62 = v56.y >> 4;
            v63 = v57 >> 4;
            v30 = *(_BYTE *)(*(_QWORD *)(v31[0] + 976LL) + 215LL);
            if ( v30 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v45) )
              v22 = BLTRECORD::bStretch((BLTRECORD *)v45, (struct DCOBJ *)v31, (struct DCOBJ *)v32, v21, v30);
            else
              v22 = BLTRECORD::bBitBlt((BLTRECORD *)v45, (struct DCOBJ *)v31, (struct DCOBJ *)v32, v21);
          }
          v14 = v22;
          goto LABEL_19;
        }
        goto LABEL_40;
      }
      EngSetLastError(6u);
      DEC_SHARE_REF_CNT(v29);
LABEL_25:
      v14 = 0;
LABEL_19:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v34);
      goto LABEL_20;
    }
LABEL_40:
    v27 = 87;
LABEL_59:
    EngSetLastError(v27);
    goto LABEL_25;
  }
  EngSetLastError(6u);
  v14 = 0;
LABEL_20:
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  if ( v31[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v45);
  return v14;
}
