/*
 * XREFs of GreMaskBlt @ 0x1C007EAC4
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C005C9F0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     NtGdiMaskBlt @ 0x1C007C260 (NtGdiMaskBlt.c)
 * Callees:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002B5A8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C005AD18 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C0072DD0 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C0072E78 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00759DC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C007668C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C007F0E4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007F31C (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C007F360 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007F3A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00FBD30 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028A2B4 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028E0C8 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // eax
  int v30; // ecx
  ULONG v31; // ecx
  struct SURFACE *v32; // rax
  int v33; // edx
  __int64 v34; // rdx
  int v35; // ecx
  DC *v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+84h] [rbp-7Ch]
  int v40; // [rsp+88h] [rbp-78h]
  _BYTE v41[16]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[192]; // [rsp+A0h] [rbp-60h] BYREF
  HDC v43; // [rsp+160h] [rbp+60h] BYREF
  int v44; // [rsp+168h] [rbp+68h]
  int v45; // [rsp+16Ch] [rbp+6Ch]
  struct _POINTFIX v46[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v47[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v48; // [rsp+190h] [rbp+90h]
  __int64 v49; // [rsp+198h] [rbp+98h]
  __int64 v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]
  __int64 v52; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v53; // [rsp+1B8h] [rbp+B8h]
  __int64 v54; // [rsp+1C0h] [rbp+C0h]
  __int64 v55; // [rsp+1C8h] [rbp+C8h] BYREF
  char *v56; // [rsp+1D0h] [rbp+D0h]
  int v57; // [rsp+220h] [rbp+120h]
  int v58; // [rsp+224h] [rbp+124h]
  int v59; // [rsp+228h] [rbp+128h]
  int v60; // [rsp+22Ch] [rbp+12Ch]
  int v61; // [rsp+230h] [rbp+130h]
  int v62; // [rsp+234h] [rbp+134h]
  int v63; // [rsp+238h] [rbp+138h]
  int v64; // [rsp+23Ch] [rbp+13Ch]
  __int64 v65; // [rsp+240h] [rbp+140h]
  unsigned int v66; // [rsp+248h] [rbp+148h]
  int v67; // [rsp+24Ch] [rbp+14Ch]

  v13 = a6;
  v43 = a1;
  v54 = 0LL;
  v67 = 0;
  v39 = a2;
  v38 = a3;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  v16 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v36) )
  {
    if ( !v36[0] || (v30 = *((_DWORD *)v36[0] + 9), (v30 & 0x10000) != 0) )
    {
      EngSetLastError(0x57u);
      goto LABEL_36;
    }
    if ( (v30 & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v36, 0x204u);
      v44 = a4 + a2;
      v43 = (HDC)__PAIR64__(v38, a2);
      v45 = v38 + a5;
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v41, (struct _POINTL *)&v43) )
        goto LABEL_36;
      ERECTL::vOrder((ERECTL *)&v43);
      XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v43);
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
    v54 = v17;
    v21 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v66 = BYTE2(a12) | (BYTE2(a12) << 8);
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
  v54 = v19;
  if ( *(_WORD *)(v19 + 100) || *(_DWORD *)(v19 + 96) != v16 )
  {
    EngSetLastError(6u);
    DEC_SHARE_REF_CNT(v20);
    goto LABEL_51;
  }
  INC_SHARE_REF_CNT(v19);
  v67 |= 0x30000u;
  v66 = HIWORD(a12);
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
  if ( ((unsigned __int8)v16 & v42[72]) == 0 )
  {
    v28 = XDCOBJ::bFullScreen((XDCOBJ *)v36);
LABEL_33:
    v16 = v28;
    goto LABEL_34;
  }
  v52 = *((_QWORD *)v36[0] + 62);
  EXFORMOBJ::vInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v36, 0x204u, 0);
  v22 = v36[0];
  v48 = *(_QWORD *)(v52 + 128);
  v49 = *((_QWORD *)v36[0] + 11);
  if ( v40 )
  {
    if ( !v37[0] )
      goto LABEL_55;
    if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v37)
      || (*(_DWORD *)(*(_QWORD *)(v23 + 496) + 112LL) & 0x10000000) != 0 )
    {
      v32 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
      if ( ((unsigned int)v25 & *((_DWORD *)v32 + 28)) != 0
        && *(_DWORD *)(v26 + 32) == 2
        && (*(_DWORD *)(v26 + 36) & 0xE0) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v41, (struct XDCOBJ *)v36, 0x204u);
        v43 = (HDC)__PAIR64__(v38, v39);
        v44 = a4 + v39;
        v45 = v38 + a5;
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v41, (struct _POINTL *)&v43) )
        {
          ERECTL::vOrder((ERECTL *)&v43);
          XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v43);
          XDCOBJ::vAccumulateTight((XDCOBJ *)v36, (struct ERECTL *)&v43);
        }
        goto LABEL_34;
      }
      if ( ((unsigned __int8)*(_DWORD *)(v27 + 36) & (unsigned __int8)v16) == 0 )
        goto LABEL_39;
    }
    v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v24) )
    {
LABEL_79:
      v31 = 5;
      goto LABEL_57;
    }
    v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v37);
    v50 = *((_QWORD *)v53 + 16);
    v51 = *(_QWORD *)(v37[0] + 88LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v37, 0x204u, 0);
    if ( ((unsigned __int8)*(_DWORD *)(v47[0] + 32LL) & (unsigned __int8)v16) == 0
      || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v46, a7, a8, a4, a5) )
    {
      goto LABEL_55;
    }
    if ( (v21 & 0x10000) != 0 )
    {
      v61 = a10;
      v63 = a10 + v59 - v57;
      v62 = a11;
      v64 = a11 + v60 - v58;
    }
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v55,
                          0LL,
                          *((_DWORD *)v36[0] + 30),
                          v50,
                          v48,
                          v51,
                          v49,
                          *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 184LL),
                          *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 176LL),
                          a13,
                          0) )
      goto LABEL_39;
    v67 |= 2u;
    goto LABEL_24;
  }
  v53 = 0LL;
  if ( (v21 & 0x10000) != 0 )
  {
    if ( !a6 )
      v13 = v43;
    XDCOBJ::vLock((XDCOBJ *)v37, v13);
    if ( !v37[0] )
    {
      v31 = 6;
      goto LABEL_57;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v47, (struct XDCOBJ *)v37, 0x204u, 0);
    if ( ((unsigned __int8)*(_DWORD *)(v47[0] + 32LL) & (unsigned __int8)v16) == 0
      || !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v46, a10, a11, a4, a5) )
    {
      goto LABEL_55;
    }
LABEL_24:
    v22 = v36[0];
  }
  if ( (v21 & 0xE8) != 0 )
  {
    v33 = *(_DWORD *)(*((_QWORD *)v22 + 122) + 152LL);
    v56 = (char *)v22 + 1184;
    if ( (v33 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v22, *(_QWORD *)(*((_QWORD *)v22 + 122) + 160LL));
      v22 = v36[0];
    }
    v34 = *((_QWORD *)v22 + 122);
    v35 = *(_DWORD *)(v34 + 152);
    if ( ((unsigned __int8)v35 & (unsigned __int8)v16) != 0
      || ((unsigned __int8)*((_DWORD *)v22 + 79) & (unsigned __int8)v16) != 0 )
    {
      *(_DWORD *)(v34 + 152) = v35 & 0xFFFFFFFE;
      *((_DWORD *)v36[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush(v56, v36[0], *((_QWORD *)v36[0] + 17), v49, v48, v52, v16);
      v22 = v36[0];
    }
    v65 = *((_QWORD *)v22 + 147);
  }
  else
  {
    v56 = 0LL;
  }
  if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v22 + 62)) )
    goto LABEL_79;
  if ( ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v46 + 32LL) & (unsigned __int8)v16) != 0 )
  {
    if ( (unsigned int)BLTRECORD::Trg((BLTRECORD *)v46, v39, v38, a4, a5) )
    {
      if ( v40 && !BLTRECORD::bEqualExtents((BLTRECORD *)v46) )
        v28 = BLTRECORD::bStretch(
                (BLTRECORD *)v46,
                (struct DCOBJ *)v36,
                (struct DCOBJ *)v37,
                v21,
                *(_BYTE *)(*((_QWORD *)v36[0] + 122) + 215LL));
      else
        v28 = BLTRECORD::bBitBlt((BLTRECORD *)v46, v36, (struct DCOBJ *)v37, v21);
      goto LABEL_33;
    }
    goto LABEL_55;
  }
  if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v46, v39, v38, a4, a5) )
  {
    v28 = BLTRECORD::bRotate(
            v46,
            (struct DCOBJ *)v36,
            (struct DCOBJ *)v37,
            v21,
            *(_BYTE *)(*((_QWORD *)v36[0] + 122) + 215LL));
    goto LABEL_33;
  }
LABEL_55:
  v31 = 87;
LABEL_57:
  EngSetLastError(v31);
LABEL_39:
  v16 = 0;
LABEL_34:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v42, v25, (SURFACE **)v26, v27);
  if ( v37[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
LABEL_36:
  if ( v36[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v36);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v46);
  return v16;
}
