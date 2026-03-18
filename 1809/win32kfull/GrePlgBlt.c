/*
 * XREFs of GrePlgBlt @ 0x1C0272010
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0272630 (NtGdiPlgBlt.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA9C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004CBF8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0098B8C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0098BC4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F644 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C00A2054 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C026FAD0 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C0270840 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C02708BC (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C0270938 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  int valid; // eax
  __int64 v16; // r9
  DC *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct SURFACE *v25; // rax
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int8 v30; // r9
  DC *v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v34[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+E0h] [rbp-20h]
  _BYTE v38[24]; // [rsp+E8h] [rbp-18h] BYREF
  HDC v39[14]; // [rsp+100h] [rbp+0h] BYREF
  char v40; // [rsp+170h] [rbp+70h]
  struct _POINTL v41[2]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v42; // [rsp+220h] [rbp+120h] BYREF
  __int64 v43; // [rsp+230h] [rbp+130h]
  __int64 v44; // [rsp+238h] [rbp+138h]
  __int64 v45; // [rsp+240h] [rbp+140h]
  __int64 v46; // [rsp+248h] [rbp+148h]
  struct SURFACE *v47; // [rsp+250h] [rbp+150h]
  struct SURFACE *v48; // [rsp+258h] [rbp+158h]
  __int64 v49; // [rsp+260h] [rbp+160h]
  __int64 v50[4]; // [rsp+268h] [rbp+168h] BYREF
  struct _POINTFIX v51[7]; // [rsp+288h] [rbp+188h] BYREF
  int v52; // [rsp+2C0h] [rbp+1C0h]
  int v53; // [rsp+2C4h] [rbp+1C4h]
  int v54; // [rsp+2C8h] [rbp+1C8h]
  int v55; // [rsp+2CCh] [rbp+1CCh]
  int v56; // [rsp+2D0h] [rbp+1D0h]
  int v57; // [rsp+2D4h] [rbp+1D4h]
  int v58; // [rsp+2D8h] [rbp+1D8h]
  int v59; // [rsp+2DCh] [rbp+1DCh]
  int v60; // [rsp+2E8h] [rbp+1E8h]
  int v61; // [rsp+2ECh] [rbp+1ECh]

  v12 = 0;
  v49 = 0LL;
  v61 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  DCOBJ::DCOBJ((DCOBJ *)v34, a3);
  if ( !v32[0] || !v34[0] || (*((_DWORD *)v32[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_49;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v34, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v39, (struct XDCOBJ *)v32, (struct XDCOBJ *)v34);
  if ( (v40 & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v32) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v34) )
      v12 = 1;
    goto LABEL_47;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v32);
  v16 = v34[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v34)
    && (*(_DWORD *)(*(_QWORD *)(v16 + 496) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v17 = v32[0];
  v18 = *((_QWORD *)v32[0] + 122);
  if ( (*(_DWORD *)(v18 + 152) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v32[0], *(_QWORD *)(v18 + 160));
    v17 = v32[0];
    v16 = v34[0];
  }
  v19 = *(_QWORD *)(v16 + 976);
  if ( (*(_DWORD *)(v19 + 152) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16, *(_QWORD *)(v19 + 160));
    v17 = v32[0];
    v16 = v34[0];
  }
  if ( (*((_DWORD *)v17 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v34))
    && (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v32, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v41, a2, v51, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_46:
      EngSetLastError(v20);
      goto LABEL_47;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v41);
    BLTRECORD::vBound((BLTRECORD *)v41, (struct ERECTL *)v38);
    XDCOBJ::vAccumulate((XDCOBJ *)v32, (struct ERECTL *)v38);
    v17 = v32[0];
    v16 = v34[0];
  }
  if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21, v22, v23, v24)
      || (v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32), !(unsigned int)DestSurfaceAccessCheck(v25)) )
    {
      v20 = 5;
      goto LABEL_46;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v32, 0x204u, 0);
    v47 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    v43 = *((_QWORD *)v47 + 16);
    v44 = *((_QWORD *)v32[0] + 11);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v42, (struct XDCOBJ *)v34, 0x204u, 0);
    v48 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34);
    v45 = *((_QWORD *)v48 + 16);
    v46 = *(_QWORD *)(v34[0] + 88LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v50,
                         0LL,
                         *((_DWORD *)v32[0] + 30),
                         v45,
                         v43,
                         v46,
                         v44,
                         *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v32[0] + 122) + 176LL),
                         a11,
                         0) )
    {
      v61 |= 2u;
      v50[1] = 0LL;
      if ( (*(_DWORD *)(v42 + 32) & 1) != 0 && (unsigned int)BLTRECORD::Src(v41, a4, a5, a6, a7) )
      {
        if ( a8 )
        {
          SURFREF::SURFREF((SURFREF *)v36, a8);
          if ( !v37
            || (INC_SHARE_REF_CNT(v37), v26 = 65540, v61 |= 0x30000u, v49 = v37, v60 = 43724, *(_WORD *)(v37 + 100))
            || *(_DWORD *)(v37 + 96) != 1 )
          {
            EngSetLastError(6u);
            if ( v37 )
              DEC_SHARE_REF_CNT(v37);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v36);
            goto LABEL_47;
          }
          v56 = a9;
          v58 = a9 + v54 - v52;
          v57 = a10;
          v59 = a10 + v55 - v53;
          DEC_SHARE_REF_CNT(v37);
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v36);
        }
        else
        {
          v49 = 0LL;
          v26 = 4;
          v60 = 52428;
        }
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v41, a2, v51, 3uLL) )
        {
          v27 = BLTRECORD::bRotated((BLTRECORD *)v41);
          v28 = *((_QWORD *)v32[0] + 122);
          if ( v27 )
          {
            v29 = BLTRECORD::bRotate(
                    (struct _POINTFIX *)v41,
                    (struct DCOBJ *)v32,
                    (struct DCOBJ *)v34,
                    v26,
                    *(_BYTE *)(v28 + 215));
          }
          else
          {
            v30 = *(_BYTE *)(v28 + 215);
            if ( v30 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v41) )
              v29 = BLTRECORD::bStretch((BLTRECORD *)v41, v32, (struct DCOBJ *)v34, v26, v30);
            else
              v29 = BLTRECORD::bBitBlt((BLTRECORD *)v41, v32, (struct DCOBJ *)v34, v26);
          }
          v12 = v29;
          goto LABEL_47;
        }
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *((_QWORD *)v17 + 62) == 0LL;
  }
LABEL_47:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v39);
LABEL_49:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v34);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v35);
  MDCOBJ::~MDCOBJ((MDCOBJ *)v32);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v33);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v41);
  return v12;
}
