/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C0069F00
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C0069D50 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001AAB8 (--1EPALOBJ@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C001F940 (HmgShareLock.c)
 *     INC_SHARE_REF_CNT @ 0x1C00208A0 (INC_SHARE_REF_CNT.c)
 *     HmgQueryAltLock @ 0x1C006C2E0 (HmgQueryAltLock.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0070150 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0070180 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C00706A0 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00717D8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0092080 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C009D67C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C009E5D4 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C009F3FC (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BAB5C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     HmgSwapLockedHandleContents @ 0x1C01231D0 (HmgSwapLockedHandleContents.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct _BASEOBJECT *a2, int a3, struct OBJECT *a4)
{
  unsigned int v7; // r12d
  struct _SURFOBJ *v8; // rdi
  int v9; // eax
  struct OBJECT *v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  HLSURF *v13; // rsi
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rsi
  int AltLock; // eax
  __int64 v18; // rbx
  int v19; // edi
  int v20; // eax
  int locked; // eax
  int v22; // edi
  HLSURF HLSURFCloneWrap; // rbx
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int16 v30; // r8
  __int16 v31; // dx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm2
  __int128 v58; // xmm3
  struct _EPROCESS *v59; // rdx
  struct _EPROCESS *v60; // rbx
  int v61; // xmm0_4
  int v62; // xmm1_4
  __int64 v63; // rax
  int v64; // eax
  HLSURF v65; // rdx
  struct SFMLOGICALSURFACE *v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // r8
  __int64 v70; // rsi
  int v71; // eax
  __int64 v72; // rdi
  int v73; // ebx
  int v74; // eax
  int v75; // eax
  int v78; // [rsp+40h] [rbp-C0h]
  int v79; // [rsp+44h] [rbp-BCh]
  struct OBJECT *v80; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v81[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v82; // [rsp+60h] [rbp-A0h]
  _QWORD v83[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v84; // [rsp+78h] [rbp-88h] BYREF
  int v85; // [rsp+80h] [rbp-80h]
  __int64 v86; // [rsp+88h] [rbp-78h] BYREF
  int v87; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v88; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v89; // [rsp+A0h] [rbp-60h]
  __int128 v90; // [rsp+B0h] [rbp-50h]
  __int128 v91; // [rsp+C0h] [rbp-40h]
  __int128 v92; // [rsp+D0h] [rbp-30h]
  __int128 v93; // [rsp+E0h] [rbp-20h]
  __int128 v94; // [rsp+F0h] [rbp-10h]
  __int128 v95; // [rsp+100h] [rbp+0h]
  __int128 v96; // [rsp+110h] [rbp+10h]
  __int128 v97; // [rsp+120h] [rbp+20h]
  __int128 v98; // [rsp+130h] [rbp+30h]
  __int128 v99; // [rsp+140h] [rbp+40h]
  __int64 v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+160h] [rbp+60h] BYREF
  int v102; // [rsp+168h] [rbp+68h]
  int v103; // [rsp+16Ch] [rbp+6Ch]

  v102 = *((_DWORD *)a1 + 14);
  v103 = *((_DWORD *)a1 + 15);
  v80 = a4;
  v101 = 0LL;
  v7 = 1;
  v81[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  v89 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v81, v8);
  v83[0] = 0LL;
  v88 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v83, v88);
  *(_DWORD *)a4 = 0;
  v9 = *((_DWORD *)a1 + 28);
  if ( (v9 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
    v83[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v81);
    v81[0] = 0LL;
    goto LABEL_73;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_5:
    v10 = a1;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v9 & 0x400000) != 0 )
      goto LABEL_5;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_73:
      v7 = 0;
      goto LABEL_74;
    }
  }
  v10 = a2;
LABEL_8:
  v11 = *((_QWORD *)v10 + 6);
  if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  if ( a3
    || ((*((_DWORD *)v10 + 28) & 0x400) == 0
      ? (v12 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v101,
                 &v101))
      : (v12 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))(v11 + 2840))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v101,
                 &v101)),
        v13 = 0LL,
        v12) )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v14 = *(_DWORD *)a1;
    v82 = *((_DWORD *)a1 + 29) & 0x80;
    v15 = v14 & 0x800000;
    if ( !v15 || (v79 = 1, (*((_WORD *)a1 + 51) & 0x200) == 0) )
      v79 = 0;
    if ( !v15 || (v78 = 1, (*((_WORD *)a1 + 51) & 0x400) == 0) )
      v78 = 0;
    v16 = *((_QWORD *)a1 + 4);
    AltLock = HmgQueryAltLock(v16);
    v18 = *((_QWORD *)a2 + 4);
    v19 = AltLock;
    v20 = HmgQueryAltLock(v18);
    locked = HmgSwapLockedHandleContents(v16, v19, v18, v20, 5);
    v13 = 0LL;
    if ( !locked )
    {
      v7 = 0;
      goto LABEL_64;
    }
    v84 = 0LL;
    v22 = 0;
    v85 = 0;
    HLSURFCloneWrap = 0LL;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v13 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_31;
    v22 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_31;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported() >= 0 )
      HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)a1 + 6), v13, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v84, HLSURFCloneWrap);
    if ( !v84 )
    {
      v7 = 0;
    }
    else
    {
LABEL_31:
      OBJECT::SwapShareCount(a1, a2);
      v25 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 70) = a2;
      *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
      v26 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v25;
      v27 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v26;
      v28 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v27;
      v29 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v28;
      v30 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v29;
      v31 = v30 & 0x8000 | *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v30 & 0x4000;
      LODWORD(v28) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v31;
      LODWORD(v29) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v28;
      v32 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v29;
      v33 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v32;
      *((_QWORD *)a2 + 22) = v33;
      v34 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v34;
      v35 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v34) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v35;
      LODWORD(v35) = *((_DWORD *)a1 + 80);
      *((_DWORD *)a1 + 80) = v34;
      LODWORD(v34) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v35;
      LODWORD(v35) = *((_DWORD *)a1 + 81);
      *((_DWORD *)a1 + 81) = v34;
      *((_DWORD *)a2 + 81) = v35;
      v36 = *((_QWORD *)a1 + 61);
      v37 = *(_OWORD *)((char *)a1 + 344);
      v90 = *(_OWORD *)((char *)a1 + 328);
      v38 = *(_OWORD *)((char *)a1 + 360);
      v91 = v37;
      v39 = *(_OWORD *)((char *)a1 + 376);
      v92 = v38;
      v40 = *(_OWORD *)((char *)a1 + 392);
      v93 = v39;
      v41 = *(_OWORD *)((char *)a1 + 408);
      v94 = v40;
      v42 = *(_OWORD *)((char *)a1 + 424);
      v95 = v41;
      v43 = *(_OWORD *)((char *)a1 + 440);
      v96 = v42;
      v44 = *(_OWORD *)((char *)a1 + 456);
      v97 = v43;
      v45 = *(_OWORD *)((char *)a1 + 472);
      v98 = v44;
      v99 = v45;
      v100 = v36;
      *(_OWORD *)((char *)a1 + 328) = *(_OWORD *)((char *)a2 + 328);
      *(_OWORD *)((char *)a1 + 344) = *(_OWORD *)((char *)a2 + 344);
      *(_OWORD *)((char *)a1 + 360) = *(_OWORD *)((char *)a2 + 360);
      *(_OWORD *)((char *)a1 + 376) = *(_OWORD *)((char *)a2 + 376);
      *(_OWORD *)((char *)a1 + 392) = *(_OWORD *)((char *)a2 + 392);
      *(_OWORD *)((char *)a1 + 408) = *(_OWORD *)((char *)a2 + 408);
      *(_OWORD *)((char *)a1 + 424) = *(_OWORD *)((char *)a2 + 424);
      *(_OWORD *)((char *)a1 + 440) = *(_OWORD *)((char *)a2 + 440);
      *(_OWORD *)((char *)a1 + 456) = *(_OWORD *)((char *)a2 + 456);
      *(_OWORD *)((char *)a1 + 472) = *(_OWORD *)((char *)a2 + 472);
      *((_QWORD *)a1 + 61) = *((_QWORD *)a2 + 61);
      v46 = v91;
      *(_OWORD *)((char *)a2 + 328) = v90;
      v47 = v92;
      *(_OWORD *)((char *)a2 + 344) = v46;
      v48 = v93;
      *(_OWORD *)((char *)a2 + 360) = v47;
      v49 = v94;
      *(_OWORD *)((char *)a2 + 376) = v48;
      v50 = v95;
      *(_OWORD *)((char *)a2 + 392) = v49;
      v51 = v96;
      *(_OWORD *)((char *)a2 + 408) = v50;
      v52 = v97;
      *(_OWORD *)((char *)a2 + 424) = v51;
      v53 = v98;
      *(_OWORD *)((char *)a2 + 440) = v52;
      v54 = v99;
      v55 = v100;
      *(_OWORD *)((char *)a2 + 456) = v53;
      v56 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v54;
      *((_QWORD *)a2 + 61) = v55;
      v57 = *((_OWORD *)a1 + 31);
      v58 = *((_OWORD *)a1 + 32);
      *((_OWORD *)a1 + 31) = v56;
      *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v55) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v57;
      *((_OWORD *)a2 + 32) = v58;
      LODWORD(v35) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)a2 + 28) ^ (v35 ^ v55) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v35) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v35) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v35 ^ (v35 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v35 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v35) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v35 ^ (v35 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v59 = (struct _EPROCESS *)*((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (v35 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v60 = (struct _EPROCESS *)*((_QWORD *)a1 + 80);
      SURFACE::vAppContainerOwner(a1, v59);
      SURFACE::vAppContainerOwner(a2, v60);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v61 = *((_DWORD *)a1 + 165);
        v62 = *((_DWORD *)a1 + 166);
        v63 = *(_QWORD *)((char *)a1 + 668);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v61;
        *((_DWORD *)a2 + 166) = v62;
        *(_QWORD *)((char *)a2 + 668) = v63;
      }
      if ( v79 )
      {
        *((_WORD *)a1 + 51) &= ~0x200u;
        v64 = *(_DWORD *)a2 & 0x800000;
        if ( v64 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v78 && v64 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *(_DWORD *)v80 = 1;
      }
      if ( v13 )
      {
        v65 = *v13;
        v86 = 0LL;
        v87 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v86, v65);
        v13 = 0LL;
        if ( v22 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v10 + 6), v86, a2, v84);
        while ( 1 )
        {
          v66 = SURFACE::GetFirstLSurf(a1);
          if ( !v66 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v10 + 6), v66, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v86);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v67 = HmgShareLock(*((_QWORD *)a2 + 18), 5);
        v68 = v67;
        if ( v67 )
        {
          if ( *(HLSURF **)(v67 + 24) != v13 && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
            MulReplaceRedirectionChild(*(_QWORD *)(v68 + 24), v89, v88);
          DEC_SHARE_REF_CNT((struct OBJECT *)v68);
        }
      }
      if ( v82 != (_DWORD)v13 )
      {
        DEC_SHARE_REF_CNT(a1);
        INC_SHARE_REF_CNT(a2);
      }
      if ( *((_DWORD *)a1 + 2) != (_DWORD)v13 )
      {
        *(_DWORD *)v80 = 1;
LABEL_62:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v84);
LABEL_64:
        if ( !v7 && v79 != (_DWORD)v13 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v75 = *(_DWORD *)a1 & 0x800000;
          if ( v75 )
            *((_WORD *)a1 + 51) |= 0x200u;
          if ( v78 != (_DWORD)v13 && v75 )
            *((_WORD *)a1 + 51) |= 0x400u;
        }
        goto LABEL_71;
      }
      v80 = (struct OBJECT *)HmgShareLockCheck(*((_QWORD *)a1 + 4), 5);
      SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v81);
      v81[0] = v13;
      v7 = SURFREF::bDeleteSurface(&v80, 0LL, v69);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = v13;
      EPALOBJ::~EPALOBJ(&v80);
      if ( v7 )
        goto LABEL_62;
    }
    v70 = *((_QWORD *)a1 + 4);
    v71 = HmgQueryAltLock(v70);
    v72 = *((_QWORD *)a2 + 4);
    v73 = v71;
    v74 = HmgQueryAltLock(v72);
    HmgSwapLockedHandleContents(v72, v74, v70, v73, 5);
    v13 = 0LL;
    goto LABEL_62;
  }
  v7 = 0;
LABEL_71:
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v83);
  v83[0] = v13;
  SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v81);
  v81[0] = v13;
LABEL_74:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v83);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v81);
  return v7;
}
