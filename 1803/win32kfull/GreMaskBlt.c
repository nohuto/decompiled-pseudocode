/*
 * XREFs of GreMaskBlt @ 0x1C00AD8D4
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiMaskBlt @ 0x1C00ADD60 (NtGdiMaskBlt.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0099254 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C009A7B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C009C0F8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009C1DC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009C23C (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009C468 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C009C938 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D44C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00AD89C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C011C1A0 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0260588 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0264394 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
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
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v13; // r15
  unsigned int v16; // edi
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // esi
  DC *v22; // r8
  __int64 v23; // r9
  struct SURFACE *v24; // rax
  unsigned int v25; // eax
  int v27; // ecx
  ULONG v28; // ecx
  struct SURFACE *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edx
  int v33; // edx
  __int64 v34; // rdx
  int v35; // ecx
  DC *v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+84h] [rbp-7Ch]
  int v40; // [rsp+88h] [rbp-78h]
  _BYTE v41[16]; // [rsp+90h] [rbp-70h] BYREF
  HDC v42[9]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v43; // [rsp+E8h] [rbp-18h]
  HDC v44; // [rsp+150h] [rbp+50h] BYREF
  int v45; // [rsp+158h] [rbp+58h]
  int v46; // [rsp+15Ch] [rbp+5Ch]
  struct _POINTL v47[2]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v48[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v49; // [rsp+180h] [rbp+80h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 v51; // [rsp+190h] [rbp+90h]
  __int64 v52; // [rsp+198h] [rbp+98h]
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  struct SURFACE *v54; // [rsp+1A8h] [rbp+A8h]
  __int64 v55; // [rsp+1B0h] [rbp+B0h]
  __int64 v56; // [rsp+1B8h] [rbp+B8h] BYREF
  char *v57; // [rsp+1C0h] [rbp+C0h]
  int v58; // [rsp+210h] [rbp+110h]
  int v59; // [rsp+214h] [rbp+114h]
  int v60; // [rsp+218h] [rbp+118h]
  int v61; // [rsp+21Ch] [rbp+11Ch]
  int v62; // [rsp+220h] [rbp+120h]
  int v63; // [rsp+224h] [rbp+124h]
  int v64; // [rsp+228h] [rbp+128h]
  int v65; // [rsp+22Ch] [rbp+12Ch]
  __int64 v66; // [rsp+230h] [rbp+130h]
  unsigned int v67; // [rsp+238h] [rbp+138h]
  int v68; // [rsp+23Ch] [rbp+13Ch]

  v13 = a6;
  v44 = a1;
  v55 = 0LL;
  v68 = 0;
  v39 = a2;
  v38 = a3;
  MDCOBJ::MDCOBJ((MDCOBJ *)v36, a1);
  v16 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v36) )
  {
    if ( !v36[0] || (v27 = *((_DWORD *)v36[0] + 9), (v27 & 0x10000) != 0) )
    {
      EngSetLastError(0x57u);
      goto LABEL_36;
    }
    if ( (v27 & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v36, 516);
      v45 = a4 + a2;
      v44 = (HDC)__PAIR64__(v38, a2);
      v46 = v38 + a5;
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v41, (struct _POINTL *)&v44) )
        goto LABEL_36;
      ERECTL::vOrder((ERECTL *)&v44);
      XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v44);
    }
    v16 = 1;
    goto LABEL_36;
  }
  if ( (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_36;
  }
  v16 = v17 + 1;
  v18 = BYTE2(a12);
  if ( !a9 || BYTE2(a12) == HIBYTE(a12) )
  {
    v55 = v17;
    v21 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v67 = BYTE2(a12) | (BYTE2(a12) << 8);
    goto LABEL_9;
  }
  LOBYTE(v18) = 5;
  v19 = HmgShareLockCheck(a9, v18);
  v20 = v19;
  if ( !v19 )
  {
    EngSetLastError(6u);
LABEL_51:
    v16 = 0;
    goto LABEL_36;
  }
  v55 = v19;
  if ( *(_WORD *)(v19 + 100) || *(_DWORD *)(v19 + 96) != v16 )
  {
    EngSetLastError(6u);
    DEC_SHARE_REF_CNT(v20);
    goto LABEL_51;
  }
  INC_SHARE_REF_CNT(v19);
  v68 |= 0x30000u;
  v67 = HIWORD(a12);
  v21 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[(unsigned __int64)HIWORD(a12) >> 8] | 0x10000;
  DEC_SHARE_REF_CNT(v20);
  v17 = 0LL;
LABEL_9:
  v37[1] = 0LL;
  v37[0] = v17;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42);
  v40 = v21 & 0xD4;
  if ( (v21 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v37, a6), v37[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v37, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v42, (struct XDCOBJ *)v36, (struct XDCOBJ *)v37);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v42, (struct XDCOBJ *)v36);
  }
  if ( ((unsigned __int8)v16 & v43) == 0 )
  {
    v25 = XDCOBJ::bFullScreen((XDCOBJ *)v36);
LABEL_33:
    v16 = v25;
    goto LABEL_34;
  }
  v53 = *((_QWORD *)v36[0] + 63);
  EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v36, 0x204u, 0);
  v22 = v36[0];
  v49 = *(_QWORD *)(v53 + 128);
  v50 = *((_QWORD *)v36[0] + 12);
  if ( v40 )
  {
    if ( !v37[0] )
      goto LABEL_55;
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v37)
      || (*(_DWORD *)(*(_QWORD *)(v23 + 504) + 112LL) & 0x10000000) != 0 )
    {
      v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
      if ( (v32 & *((_DWORD *)v29 + 28)) != 0 && *(_DWORD *)(v30 + 32) == 2 && (*(_DWORD *)(v30 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v36, 516);
        v44 = (HDC)__PAIR64__(v38, v39);
        v45 = a4 + v39;
        v46 = v38 + a5;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v41, (struct _POINTL *)&v44) )
        {
          ERECTL::vOrder((ERECTL *)&v44);
          XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v44);
          XDCOBJ::vAccumulateTight((XDCOBJ *)v36, (struct ERECTL *)&v44);
        }
        goto LABEL_34;
      }
      if ( ((unsigned __int8)*(_DWORD *)(v31 + 36) & (unsigned __int8)v16) == 0 )
        goto LABEL_39;
    }
    v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v24) )
    {
LABEL_79:
      v28 = 5;
      goto LABEL_57;
    }
    v54 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    v51 = *((_QWORD *)v54 + 16);
    v52 = *(_QWORD *)(v37[0] + 96LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v48, (struct XDCOBJ *)v37, 0x204u, 0);
    if ( ((unsigned __int8)*(_DWORD *)(v48[0] + 32LL) & (unsigned __int8)v16) == 0
      || !(unsigned int)BLTRECORD::Src(v47, a7, a8, a4, a5) )
    {
      goto LABEL_55;
    }
    if ( (v21 & 0x10000) != 0 )
    {
      v62 = a10;
      v64 = a10 + v60 - v58;
      v63 = a11;
      v65 = a11 + v61 - v59;
    }
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v56,
                          0LL,
                          *((_DWORD *)v36[0] + 32),
                          v51,
                          v49,
                          v52,
                          v50,
                          *(_DWORD *)(*((_QWORD *)v36[0] + 10) + 40LL),
                          *(_DWORD *)(*((_QWORD *)v36[0] + 10) + 32LL),
                          a13,
                          0) )
      goto LABEL_39;
    v68 |= 2u;
    goto LABEL_24;
  }
  v54 = 0LL;
  if ( (v21 & 0x10000) != 0 )
  {
    if ( !a6 )
      v13 = v44;
    XDCOBJ::vLock((XDCOBJ *)v37, v13);
    if ( !v37[0] )
    {
      v28 = 6;
      goto LABEL_57;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v48, (struct XDCOBJ *)v37, 0x204u, 0);
    if ( ((unsigned __int8)*(_DWORD *)(v48[0] + 32LL) & (unsigned __int8)v16) == 0
      || !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v47, a10, a11, a4, a5) )
    {
      goto LABEL_55;
    }
LABEL_24:
    v22 = v36[0];
  }
  if ( (v21 & 0xE8) != 0 )
  {
    v33 = *(_DWORD *)(*((_QWORD *)v22 + 10) + 8LL);
    v57 = (char *)v22 + 1592;
    if ( (v33 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v22, *(_QWORD *)(*((_QWORD *)v22 + 10) + 16LL));
      v22 = v36[0];
    }
    v34 = *((_QWORD *)v22 + 10);
    v35 = *(_DWORD *)(v34 + 8);
    if ( ((unsigned __int8)v35 & (unsigned __int8)v16) != 0
      || ((unsigned __int8)*((_DWORD *)v22 + 81) & (unsigned __int8)v16) != 0 )
    {
      *(_DWORD *)(v34 + 8) = v35 & 0xFFFFFFFE;
      *((_DWORD *)v36[0] + 81) &= ~1u;
      EBRUSHOBJ::vInitBrush(v57, v36[0], *((_QWORD *)v36[0] + 18), v50, v49, v53, v16);
      v22 = v36[0];
    }
    v66 = *((_QWORD *)v22 + 198);
  }
  else
  {
    v57 = 0LL;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v22 + 63)) )
    goto LABEL_79;
  if ( ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v47 + 32LL) & (unsigned __int8)v16) != 0 )
  {
    if ( (unsigned int)BLTRECORD::Trg(v47, v39, v38, a4, a5) )
    {
      if ( v40 && !BLTRECORD::bEqualExtents((BLTRECORD *)v47) )
        v25 = BLTRECORD::bStretch(
                (BLTRECORD *)v47,
                (struct DCOBJ *)v36,
                (struct DCOBJ *)v37,
                v21,
                *(_BYTE *)(*((_QWORD *)v36[0] + 10) + 75LL));
      else
        v25 = BLTRECORD::bBitBlt((BLTRECORD *)v47, v36, (struct DCOBJ *)v37, v21);
      goto LABEL_33;
    }
    goto LABEL_55;
  }
  if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v47, v39, v38, a4, a5) )
  {
    v25 = BLTRECORD::bRotate(
            (BLTRECORD *)v47,
            (struct DCOBJ *)v36,
            (struct DCOBJ *)v37,
            v21,
            *(_BYTE *)(*((_QWORD *)v36[0] + 10) + 75LL));
    goto LABEL_33;
  }
LABEL_55:
  v28 = 87;
LABEL_57:
  EngSetLastError(v28);
LABEL_39:
  v16 = 0;
LABEL_34:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v42);
  if ( v37[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
LABEL_36:
  if ( v36[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v47);
  return v16;
}
