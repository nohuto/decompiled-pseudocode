/*
 * XREFs of GreMaskBlt @ 0x1C009B9B0
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005604C (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0057DD0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiMaskBlt @ 0x1C0098B10 (NtGdiMaskBlt.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA9C (--1BLTRECORD@@QEAA@XZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004CB44 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C004CBF8 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0098B8C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0098BC4 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C009B98C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009D094 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009F1D0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F644 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C00A2010 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C00A2054 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A4AFC (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026FC58 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0274118 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C027802C (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        HSURF a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v14; // r12
  unsigned int v15; // ebx
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // esi
  int v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // r8
  ULONG v23; // ecx
  __int64 v24; // r9
  struct SURFACE *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // edx
  struct SURFACE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  ULONG v33; // ecx
  int v34; // r14d
  int v35; // edx
  __int64 v36; // rdx
  int v37; // ecx
  _QWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v42[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v45[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v46[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v47; // [rsp+100h] [rbp+0h]
  HDC v48[14]; // [rsp+110h] [rbp+10h] BYREF
  char v49; // [rsp+180h] [rbp+80h]
  HDC v50; // [rsp+220h] [rbp+120h] BYREF
  int v51; // [rsp+228h] [rbp+128h]
  int v52; // [rsp+22Ch] [rbp+12Ch]
  _QWORD v53[2]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v54[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v55; // [rsp+250h] [rbp+150h]
  __int64 v56; // [rsp+258h] [rbp+158h]
  __int64 v57; // [rsp+260h] [rbp+160h]
  __int64 v58; // [rsp+268h] [rbp+168h]
  __int64 v59; // [rsp+270h] [rbp+170h]
  struct SURFACE *v60; // [rsp+278h] [rbp+178h]
  __int64 v61; // [rsp+280h] [rbp+180h]
  __int64 v62; // [rsp+288h] [rbp+188h] BYREF
  __int64 v63; // [rsp+290h] [rbp+190h]
  int v64; // [rsp+2E0h] [rbp+1E0h]
  int v65; // [rsp+2E4h] [rbp+1E4h]
  int v66; // [rsp+2E8h] [rbp+1E8h]
  int v67; // [rsp+2ECh] [rbp+1ECh]
  int v68; // [rsp+2F0h] [rbp+1F0h]
  int v69; // [rsp+2F4h] [rbp+1F4h]
  int v70; // [rsp+2F8h] [rbp+1F8h]
  int v71; // [rsp+2FCh] [rbp+1FCh]
  __int64 v72; // [rsp+300h] [rbp+200h]
  unsigned int v73; // [rsp+308h] [rbp+208h]
  int v74; // [rsp+30Ch] [rbp+20Ch]

  v14 = a6;
  v15 = 0;
  v50 = a1;
  v61 = 0LL;
  v74 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v41, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v41) )
  {
    if ( (*(_DWORD *)(v41[0] + 36LL) & 0x10000) != 0 )
    {
LABEL_9:
      EngSetLastError(0x57u);
      goto LABEL_81;
    }
    v18 = 1;
    if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
    {
      v61 = 0LL;
      v19 = gajRop3[BYTE2(a12)];
      v73 = BYTE2(a12) | (BYTE2(a12) << 8);
    }
    else
    {
      SURFREF::SURFREF((SURFREF *)v46, a9);
      if ( !v47 || (v61 = v47, *(_WORD *)(v47 + 100)) || *(_DWORD *)(v47 + 96) != 1 )
      {
        EngSetLastError(6u);
        if ( v47 )
          DEC_SHARE_REF_CNT(v47);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
        goto LABEL_81;
      }
      INC_SHARE_REF_CNT(v47);
      v74 |= 0x30000u;
      v73 = HIWORD(a12);
      v19 = gajRop3[BYTE2(a12)] | gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
      if ( v47 )
        DEC_SHARE_REF_CNT(v47);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
    }
    v43[0] = 0LL;
    v43[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v44);
    v43[0] = 0LL;
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v48);
    if ( (v19 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v43, a6), v43[0]) )
    {
      bSpDwmValidateSurface((struct XDCOBJ *)v43, a7, a8, a4, a5);
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v48, (struct XDCOBJ *)v41, (struct XDCOBJ *)v43);
    }
    else
    {
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v48, (struct XDCOBJ *)v41, v20);
    }
    if ( (v49 & 1) == 0 )
    {
      v21 = XDCOBJ::bFullScreen((XDCOBJ *)v41);
LABEL_79:
      v15 = v21;
      goto LABEL_80;
    }
    v59 = *(_QWORD *)(v41[0] + 496LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v53, (struct XDCOBJ *)v41, 0x204u, 0);
    v22 = v41[0];
    v55 = *(_QWORD *)(v59 + 128);
    v56 = *(_QWORD *)(v41[0] + 88LL);
    if ( (v19 & 0xD4) != 0 )
    {
      if ( !v43[0] )
        goto LABEL_30;
      if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v43)
        || (*(_DWORD *)(*(_QWORD *)(v24 + 496) + 112LL) & 0x10000000) != 0 )
      {
        v25 = XDCOBJ::pSurfaceEff((XDCOBJ *)v43);
        if ( (v28 & *((_DWORD *)v25 + 28)) != 0 && *(_DWORD *)(v26 + 32) == 2 && (*(_DWORD *)(v26 + 36) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v41, 0x204u);
          v50 = (HDC)__PAIR64__(a3, a2);
          v51 = a2 + a4;
          v52 = a3 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v45, (struct ERECTL *)&v50) )
          {
            ERECTL::vOrder((ERECTL *)&v50);
            XDCOBJ::vAccumulate((XDCOBJ *)v41, (struct ERECTL *)&v50);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v41, (struct ERECTL *)&v50);
          }
          goto LABEL_59;
        }
        if ( (*(_DWORD *)(v27 + 36) & 1) == 0 )
        {
LABEL_58:
          v18 = 0;
LABEL_59:
          v15 = v18;
          goto LABEL_80;
        }
      }
      v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)v43);
      if ( !(unsigned int)SrcSurfaceAccessCheck(v29, v30, v31, v32) )
      {
        v33 = 5;
LABEL_57:
        EngSetLastError(v33);
        goto LABEL_58;
      }
      v60 = XDCOBJ::pSurfaceEff((XDCOBJ *)v43);
      v57 = *((_QWORD *)v60 + 16);
      v58 = *(_QWORD *)(v43[0] + 88LL);
      EXFORMOBJ::vInit((EXFORMOBJ *)v54, (struct XDCOBJ *)v43, 0x204u, 0);
      if ( (*(_DWORD *)(v54[0] + 32LL) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v53, a7, a8, a4, a5) )
      {
        v33 = 87;
        goto LABEL_57;
      }
      if ( (v19 & 0x10000) != 0 )
      {
        v68 = a10;
        v70 = a10 + v66 - v64;
        v69 = a11;
        v71 = a11 + v67 - v65;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v62,
                            0LL,
                            *(_DWORD *)(v41[0] + 120LL),
                            v57,
                            v55,
                            v58,
                            v56,
                            *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 184LL),
                            *(_DWORD *)(*(_QWORD *)(v41[0] + 976LL) + 176LL),
                            a13,
                            0) )
        goto LABEL_80;
      v74 |= 2u;
      v22 = v41[0];
    }
    else
    {
      v60 = 0LL;
      if ( (v19 & 0x10000) != 0 )
      {
        if ( !a6 )
          v14 = v50;
        XDCOBJ::vLock((XDCOBJ *)v43, v14);
        if ( !v43[0] )
        {
          v23 = 6;
          goto LABEL_31;
        }
        EXFORMOBJ::vInit((EXFORMOBJ *)v54, (struct XDCOBJ *)v43, 0x204u, 0);
        if ( (*(_DWORD *)(v54[0] + 32LL) & 1) == 0
          || (v34 = a5, !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v53, a10, a11, a4, a5)) )
        {
LABEL_30:
          v23 = 87;
LABEL_31:
          EngSetLastError(v23);
LABEL_80:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v48);
          MDCOBJ::~MDCOBJ((MDCOBJ *)v43);
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v44);
          goto LABEL_81;
        }
        v22 = v41[0];
LABEL_49:
        if ( (v19 & 0xE8) != 0 )
        {
          v35 = *(_DWORD *)(*(_QWORD *)(v22 + 976) + 152LL);
          v63 = v22 + 1208;
          if ( (v35 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v22, *(_QWORD *)(*(_QWORD *)(v22 + 976) + 160LL));
            v22 = v41[0];
          }
          v36 = *(_QWORD *)(v22 + 976);
          v37 = *(_DWORD *)(v36 + 152);
          if ( (v37 & 1) != 0 || (*(_DWORD *)(v22 + 316) & 1) != 0 )
          {
            *(_DWORD *)(v36 + 152) = v37 & 0xFFFFFFFE;
            *(_DWORD *)(v41[0] + 316LL) &= ~1u;
            EBRUSHOBJ::vInitBrush(v63, v41[0], *(_QWORD *)(v41[0] + 136LL), v56, v55, v59, 1);
            v22 = v41[0];
          }
          v72 = *(_QWORD *)(v22 + 1200);
        }
        else
        {
          v63 = 0LL;
        }
        if ( !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(v22 + 496)) )
        {
          v23 = 5;
          goto LABEL_31;
        }
        if ( (*(_DWORD *)(v53[0] + 32LL) & 1) != 0 )
        {
          if ( (unsigned int)BLTRECORD::Trg((BLTRECORD *)v53, a2, a3, a4, v34) )
          {
            if ( (v19 & 0xD4) == 0 || BLTRECORD::bEqualExtents((BLTRECORD *)v53) )
              v21 = BLTRECORD::bBitBlt((BLTRECORD *)v53, (struct DCOBJ *)v41, (struct DCOBJ *)v43, v19);
            else
              v21 = BLTRECORD::bStretch(
                      (BLTRECORD *)v53,
                      (struct DCOBJ *)v41,
                      (struct DCOBJ *)v43,
                      v19,
                      *(_BYTE *)(*(_QWORD *)(v41[0] + 976LL) + 215LL));
            goto LABEL_79;
          }
        }
        else if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v53, a2, a3, a4, v34) )
        {
          v21 = BLTRECORD::bRotate(
                  (BLTRECORD *)v53,
                  (struct DCOBJ *)v41,
                  (struct DCOBJ *)v43,
                  v19,
                  *(_BYTE *)(*(_QWORD *)(v41[0] + 976LL) + 215LL));
          goto LABEL_79;
        }
        goto LABEL_30;
      }
    }
    v34 = a5;
    goto LABEL_49;
  }
  if ( !v41[0] )
    goto LABEL_9;
  v17 = *(_DWORD *)(v41[0] + 36LL);
  if ( (v17 & 0x10000) != 0 )
    goto LABEL_9;
  if ( (v17 & 0xE0) == 0 )
  {
LABEL_7:
    v15 = 1;
    goto LABEL_81;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v41, 0x204u);
  v51 = a2 + a4;
  v50 = (HDC)__PAIR64__(a3, a2);
  v52 = a5 + a3;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v45, (struct ERECTL *)&v50) )
  {
    ERECTL::vOrder((ERECTL *)&v50);
    XDCOBJ::vAccumulate((XDCOBJ *)v41, (struct ERECTL *)&v50);
    goto LABEL_7;
  }
LABEL_81:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v41);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v53);
  return v15;
}
