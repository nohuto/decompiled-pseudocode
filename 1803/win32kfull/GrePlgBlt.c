/*
 * XREFs of GrePlgBlt @ 0x1C025E594
 * Callers:
 *     NtGdiPlgBlt @ 0x1C025EB20 (NtGdiPlgBlt.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C008F90C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009C1DC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009C468 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C009C938 (-bEqualExtents@BLTRECORD@@QEBAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009D44C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00AD89C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C025CDCC (-bRotated@BLTRECORD@@QEAAHXZ.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C025CE48 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C025CEC4 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
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
  int valid; // eax
  __int64 v16; // r9
  DC *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int8 v30; // r9
  DC *v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v33[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[16]; // [rsp+80h] [rbp-80h] BYREF
  HDC v35[6]; // [rsp+90h] [rbp-70h] BYREF
  char v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C4h] [rbp-3Ch]
  char v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  struct _POINTFIX v43[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v44; // [rsp+150h] [rbp+50h] BYREF
  __int64 v45; // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  struct SURFACE *v49; // [rsp+180h] [rbp+80h]
  struct SURFACE *v50; // [rsp+188h] [rbp+88h]
  __int64 v51; // [rsp+190h] [rbp+90h]
  __int64 v52[4]; // [rsp+198h] [rbp+98h] BYREF
  struct _POINTFIX v53[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v54; // [rsp+1F0h] [rbp+F0h]
  int v55; // [rsp+1F4h] [rbp+F4h]
  int v56; // [rsp+1F8h] [rbp+F8h]
  int v57; // [rsp+1FCh] [rbp+FCh]
  int v58; // [rsp+200h] [rbp+100h]
  int v59; // [rsp+204h] [rbp+104h]
  int v60; // [rsp+208h] [rbp+108h]
  int v61; // [rsp+20Ch] [rbp+10Ch]
  int v62; // [rsp+218h] [rbp+118h]
  int v63; // [rsp+21Ch] [rbp+11Ch]

  v51 = 0LL;
  v63 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v32, a1);
  MDCOBJ::MDCOBJ((MDCOBJ *)v33, a3);
  if ( v32[0] && v33[0] && (*((_DWORD *)v32[0] + 9) & 0x10000) == 0 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v33, a4, a5, a6, a7);
    v35[5] = 0LL;
    v36 = 0;
    v37 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v35, (struct XDCOBJ *)v32, (struct XDCOBJ *)v33);
    v14 = 1;
    if ( (v38 & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v32) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v33) )
        goto LABEL_47;
      goto LABEL_46;
    }
    valid = XDCOBJ::bValidSurf((XDCOBJ *)v32);
    v16 = v33[0];
    if ( !valid
      || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v33)
      || (*(_DWORD *)(*(_QWORD *)(v16 + 504) + 112LL) & 0x10000000) != 0 )
    {
      v17 = v32[0];
      v18 = *((_QWORD *)v32[0] + 10);
      if ( (*(_DWORD *)(v18 + 8) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v32[0], *(_QWORD *)(v18 + 16));
        v17 = v32[0];
        v16 = v33[0];
      }
      v19 = *(_QWORD *)(v16 + 80);
      if ( (*(_DWORD *)(v19 + 8) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v16, *(_QWORD *)(v19 + 16));
        v17 = v32[0];
        v16 = v33[0];
      }
      if ( (*((_DWORD *)v17 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v33))
        && (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v32, 0x204u, 0);
        if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v43, a2, v53, 3uLL) )
        {
LABEL_19:
          v20 = 87;
LABEL_45:
          EngSetLastError(v20);
          goto LABEL_46;
        }
        BLTRECORD::vExtrema((BLTRECORD *)v43);
        BLTRECORD::vBound((BLTRECORD *)v43, (struct ERECTL *)v34);
        XDCOBJ::vAccumulate((XDCOBJ *)v32, (struct ERECTL *)v34);
        v17 = v32[0];
        v16 = v33[0];
      }
      if ( (*(_DWORD *)(v16 + 36) & 1) == 0 )
      {
        v14 = *((_QWORD *)v17 + 63) == 0LL;
LABEL_47:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(v35);
        goto LABEL_49;
      }
    }
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
      || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32), !(unsigned int)DestSurfaceAccessCheck(v22)) )
    {
      v20 = 5;
      goto LABEL_45;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v32, 0x204u, 0);
    v49 = XDCOBJ::pSurfaceEff((XDCOBJ *)v32);
    v45 = *((_QWORD *)v49 + 16);
    v46 = *((_QWORD *)v32[0] + 12);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v44, (struct XDCOBJ *)v33, 0x204u, 0);
    v50 = XDCOBJ::pSurfaceEff((XDCOBJ *)v33);
    v47 = *((_QWORD *)v50 + 16);
    v48 = *(_QWORD *)(v33[0] + 96LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v52,
                         0LL,
                         *((_DWORD *)v32[0] + 32),
                         v47,
                         v45,
                         v48,
                         v46,
                         *(_DWORD *)(*((_QWORD *)v32[0] + 10) + 40LL),
                         *(_DWORD *)(*((_QWORD *)v32[0] + 10) + 32LL),
                         a11,
                         0) )
    {
      v63 |= 2u;
      v52[1] = 0LL;
      if ( (*(_DWORD *)(v44 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src((struct _POINTL *)v43, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( !a8 )
      {
        v51 = 0LL;
        v24 = 4;
        v62 = 52428;
        goto LABEL_35;
      }
      LOBYTE(v23) = 5;
      v25 = HmgShareLockCheck(a8, v23);
      v26 = v25;
      if ( !v25 )
      {
        v20 = 6;
        goto LABEL_45;
      }
      INC_SHARE_REF_CNT(v25);
      v63 |= 0x30000u;
      v24 = 65540;
      v51 = v26;
      v62 = 43724;
      if ( !*(_WORD *)(v26 + 100) && *(_DWORD *)(v26 + 96) == 1 )
      {
        v58 = a9;
        v60 = a9 + v56 - v54;
        v59 = a10;
        v61 = a10 + v57 - v55;
        DEC_SHARE_REF_CNT(v26);
LABEL_35:
        if ( EXFORMOBJ::bXform((EXFORMOBJ *)v43, a2, v53, 3uLL) )
        {
          v27 = BLTRECORD::bRotated((BLTRECORD *)v43);
          v28 = *((_QWORD *)v32[0] + 10);
          if ( v27 )
          {
            v29 = BLTRECORD::bRotate(v43, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v24, *(_BYTE *)(v28 + 75));
          }
          else
          {
            v30 = *(_BYTE *)(v28 + 75);
            if ( v30 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v43) )
              v29 = BLTRECORD::bStretch((BLTRECORD *)v43, (struct DCOBJ *)v32, (struct DCOBJ *)v33, v24, v30);
            else
              v29 = BLTRECORD::bBitBlt((BLTRECORD *)v43, v32, (struct DCOBJ *)v33, v24);
          }
          v14 = v29;
          goto LABEL_47;
        }
        goto LABEL_19;
      }
      EngSetLastError(6u);
      DEC_SHARE_REF_CNT(v26);
    }
LABEL_46:
    v14 = 0;
    goto LABEL_47;
  }
  EngSetLastError(6u);
  v14 = 0;
LABEL_49:
  if ( v33[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v33);
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v43);
  return v14;
}
