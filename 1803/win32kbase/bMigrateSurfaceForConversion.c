/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C0049DD0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C001CD80 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C001CE10 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C001CE40 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001CEC4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C001D320 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0029280 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C002B3A0 (HmgShareLock.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CD30 (INC_SHARE_REF_CNT.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003F968 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0068E00 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0068E30 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     HmgQueryAltLock @ 0x1C006AF70 (HmgQueryAltLock.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C006B290 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     HmgSwapLockedHandleContents @ 0x1C00C2FE0 (HmgSwapLockedHandleContents.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct _BASEOBJECT *a2, int a3, struct OBJECT *a4)
{
  unsigned int v7; // r12d
  struct _SURFOBJ *v8; // rdi
  void *v9; // rdx
  struct DC *v10; // r8
  int v11; // eax
  struct OBJECT *v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rsi
  int AltLock; // eax
  __int64 v20; // rbx
  int v21; // edi
  int v22; // eax
  HLSURF HLSURFCloneWrap; // rbx
  int v24; // edi
  struct SFMLOGICALSURFACE *FirstLSurf; // rax
  HLSURF *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int16 v32; // r8
  __int16 v33; // dx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int64 v57; // rax
  __int128 v58; // xmm0
  __int128 v59; // xmm2
  __int128 v60; // xmm3
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rbx
  int v63; // xmm0_4
  int v64; // xmm1_4
  __int64 v65; // rax
  int v66; // eax
  HLSURF v67; // rdx
  struct SFMLOGICALSURFACE *v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rbx
  void *v71; // rdx
  struct DC *v72; // r8
  __int64 v73; // rsi
  int v74; // eax
  __int64 v75; // rdi
  int v76; // ebx
  int v77; // eax
  int v78; // eax
  void *v79; // rdx
  struct DC *v80; // r8
  void *v81; // rdx
  struct DC *v82; // r8
  BOOL v85; // [rsp+40h] [rbp-C0h]
  BOOL v86; // [rsp+44h] [rbp-BCh]
  struct OBJECT *v87; // [rsp+48h] [rbp-B8h] BYREF
  SURFACE *v88[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v89; // [rsp+60h] [rbp-A0h]
  SURFACE *v90[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v91; // [rsp+78h] [rbp-88h] BYREF
  int v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h] BYREF
  int v94; // [rsp+90h] [rbp-70h]
  struct _SURFOBJ *v95; // [rsp+98h] [rbp-68h]
  struct _SURFOBJ *v96; // [rsp+A0h] [rbp-60h]
  __int128 v97; // [rsp+B0h] [rbp-50h]
  __int128 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+D0h] [rbp-30h]
  __int128 v100; // [rsp+E0h] [rbp-20h]
  __int128 v101; // [rsp+F0h] [rbp-10h]
  __int128 v102; // [rsp+100h] [rbp+0h]
  __int128 v103; // [rsp+110h] [rbp+10h]
  __int128 v104; // [rsp+120h] [rbp+20h]
  __int128 v105; // [rsp+130h] [rbp+30h]
  __int128 v106; // [rsp+140h] [rbp+40h]
  __int64 v107; // [rsp+150h] [rbp+50h]
  __int64 v108; // [rsp+160h] [rbp+60h] BYREF
  int v109; // [rsp+168h] [rbp+68h]
  int v110; // [rsp+16Ch] [rbp+6Ch]

  v109 = *((_DWORD *)a1 + 14);
  v110 = *((_DWORD *)a1 + 15);
  v87 = a4;
  v108 = 0LL;
  v7 = 1;
  v88[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  v96 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v88, v8);
  v90[0] = 0LL;
  v95 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v90, v95);
  *(_DWORD *)a4 = 0;
  v11 = *((_DWORD *)a1 + 28);
  if ( (v11 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v90, v9, v10);
    v90[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v88, v81, v82);
    v88[0] = 0LL;
    goto LABEL_76;
  }
  if ( *((_WORD *)a1 + 50) == 3 )
  {
LABEL_5:
    v12 = a1;
    goto LABEL_8;
  }
  if ( *((_WORD *)a2 + 50) != 3 )
  {
    if ( (v11 & 0x400000) != 0 )
      goto LABEL_5;
    if ( (*((_DWORD *)a2 + 28) & 0x400000) == 0 )
    {
LABEL_76:
      v7 = 0;
      goto LABEL_77;
    }
  }
  v12 = a2;
LABEL_8:
  v13 = *((_QWORD *)v12 + 6);
  if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
    *((_DWORD *)a1 + 29) |= 0x10u;
  v14 = 1024LL;
  if ( a3
    || v13
    && ((*((_DWORD *)v12 + 28) & 0x400) == 0
      ? (v15 = ((__int64 (__fastcall *)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))EngCopyBits)(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v108,
                 &v108))
      : (v15 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))(v13 + 2832))(
                 ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL),
                 v8,
                 0LL,
                 &xloIdent,
                 &v108,
                 &v108)),
        v15) )
  {
    if ( (*(_DWORD *)(v13 + 40) & 0x20000) != 0 )
      *((_DWORD *)a1 + 29) &= ~0x10u;
    v16 = *(_DWORD *)a1;
    v89 = *((_DWORD *)a1 + 29) & 0x80;
    v17 = v16 & 0x800000;
    v86 = v17 && (*((_WORD *)a1 + 51) & 0x200) != 0;
    v85 = v17 && (*((_WORD *)a1 + 51) & 0x400) != 0;
    v18 = *((_QWORD *)a1 + 4);
    AltLock = HmgQueryAltLock(v18);
    v20 = *((_QWORD *)a2 + 4);
    v21 = AltLock;
    v22 = HmgQueryAltLock(v20);
    if ( !(unsigned int)HmgSwapLockedHandleContents(v18, v21, v20, v22, 5) )
    {
      v7 = 0;
      goto LABEL_67;
    }
    HLSURFCloneWrap = 0LL;
    v91 = 0LL;
    v24 = 0;
    v92 = 0;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v26 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_34;
    v24 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_34;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported() >= 0 )
      HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)a1 + 6), v26, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v91, HLSURFCloneWrap);
    if ( !v91 )
    {
      v7 = 0;
    }
    else
    {
LABEL_34:
      OBJECT::SwapShareCount(a1, a2);
      v27 = *((_QWORD *)a1 + 4);
      *((_QWORD *)a1 + 70) = a2;
      *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
      v28 = *((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 4) = v27;
      v29 = *((_QWORD *)a1 + 18);
      *((_QWORD *)a1 + 18) = v28;
      v30 = *((_QWORD *)a2 + 20);
      *((_QWORD *)a2 + 18) = v29;
      v31 = *((_QWORD *)a1 + 20);
      *((_QWORD *)a1 + 20) = v30;
      v32 = *((_WORD *)a2 + 7);
      *((_QWORD *)a2 + 20) = v31;
      v33 = v32 & 0x8000 | *((_WORD *)a1 + 7) & 0x4000;
      *((_WORD *)a1 + 7) = *((_WORD *)a1 + 7) & 0x8000 | v32 & 0x4000;
      LODWORD(v30) = *((_DWORD *)a2 + 42);
      *((_WORD *)a2 + 7) = v33;
      LODWORD(v31) = *((_DWORD *)a1 + 42);
      *((_DWORD *)a1 + 42) = v30;
      v34 = *((_QWORD *)a2 + 22);
      *((_DWORD *)a2 + 42) = v31;
      v35 = *((_QWORD *)a1 + 22);
      *((_QWORD *)a1 + 22) = v34;
      *((_QWORD *)a2 + 22) = v35;
      v36 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 19) = *((_QWORD *)a2 + 19);
      *((_QWORD *)a2 + 19) = v36;
      v37 = *((_QWORD *)a1 + 16);
      *((_QWORD *)a1 + 16) = *((_QWORD *)a2 + 16);
      LODWORD(v36) = *((_DWORD *)a2 + 80);
      *((_QWORD *)a2 + 16) = v37;
      LODWORD(v37) = *((_DWORD *)a1 + 80);
      *((_DWORD *)a1 + 80) = v36;
      LODWORD(v36) = *((_DWORD *)a2 + 81);
      *((_DWORD *)a2 + 80) = v37;
      LODWORD(v37) = *((_DWORD *)a1 + 81);
      *((_DWORD *)a1 + 81) = v36;
      *((_DWORD *)a2 + 81) = v37;
      v38 = *((_QWORD *)a1 + 61);
      v39 = *(_OWORD *)((char *)a1 + 344);
      v97 = *(_OWORD *)((char *)a1 + 328);
      v40 = *(_OWORD *)((char *)a1 + 360);
      v98 = v39;
      v41 = *(_OWORD *)((char *)a1 + 376);
      v99 = v40;
      v42 = *(_OWORD *)((char *)a1 + 392);
      v100 = v41;
      v43 = *(_OWORD *)((char *)a1 + 408);
      v101 = v42;
      v44 = *(_OWORD *)((char *)a1 + 424);
      v102 = v43;
      v45 = *(_OWORD *)((char *)a1 + 440);
      v103 = v44;
      v46 = *(_OWORD *)((char *)a1 + 456);
      v104 = v45;
      v47 = *(_OWORD *)((char *)a1 + 472);
      v105 = v46;
      v106 = v47;
      v107 = v38;
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
      v48 = v98;
      *(_OWORD *)((char *)a2 + 328) = v97;
      v49 = v99;
      *(_OWORD *)((char *)a2 + 344) = v48;
      v50 = v100;
      *(_OWORD *)((char *)a2 + 360) = v49;
      v51 = v101;
      *(_OWORD *)((char *)a2 + 376) = v50;
      v52 = v102;
      *(_OWORD *)((char *)a2 + 392) = v51;
      v53 = v103;
      *(_OWORD *)((char *)a2 + 408) = v52;
      v54 = v104;
      *(_OWORD *)((char *)a2 + 424) = v53;
      v55 = v105;
      *(_OWORD *)((char *)a2 + 440) = v54;
      v56 = v106;
      v57 = v107;
      *(_OWORD *)((char *)a2 + 456) = v55;
      v58 = *((_OWORD *)a2 + 31);
      *(_OWORD *)((char *)a2 + 472) = v56;
      *((_QWORD *)a2 + 61) = v57;
      v59 = *((_OWORD *)a1 + 31);
      v60 = *((_OWORD *)a1 + 32);
      *((_OWORD *)a1 + 31) = v58;
      *((_OWORD *)a1 + 32) = *((_OWORD *)a2 + 32);
      LODWORD(v57) = *((_DWORD *)a2 + 28);
      *((_OWORD *)a2 + 31) = v59;
      *((_OWORD *)a2 + 32) = v60;
      LODWORD(v37) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = *((_DWORD *)a2 + 28) ^ (v37 ^ v57) & 0x3B5EF;
      *((_DWORD *)a2 + 28) = v37 ^ (v37 ^ *((_DWORD *)a2 + 28)) & 0x3B5EF;
      LODWORD(v37) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v37 ^ (v37 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      *((_DWORD *)a2 + 29) ^= (v37 ^ *((_DWORD *)a2 + 29)) & 0x3FFF;
      LODWORD(v37) = *((_DWORD *)a1 + 28);
      *((_DWORD *)a1 + 28) = v37 ^ (v37 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      *((_DWORD *)a2 + 28) ^= (v37 ^ *((_DWORD *)a2 + 28)) & 0xC00000;
      LODWORD(v37) = *((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 29) = v37 ^ (v37 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v61 = *((_QWORD *)a2 + 80);
      *((_DWORD *)a2 + 29) ^= (v37 ^ *((_DWORD *)a2 + 29)) & 0x390D;
      v62 = *((_QWORD *)a1 + 80);
      SURFACE::vAppContainerOwner(a1, v61);
      SURFACE::vAppContainerOwner(a2, v62);
      if ( (*((_DWORD *)a1 + 29) & 0x800) != 0 )
      {
        v63 = *((_DWORD *)a1 + 165);
        v64 = *((_DWORD *)a1 + 166);
        v65 = *(_QWORD *)((char *)a1 + 668);
        *((_DWORD *)a2 + 29) |= 0x800u;
        *((_DWORD *)a2 + 165) = v63;
        *((_DWORD *)a2 + 166) = v64;
        *(_QWORD *)((char *)a2 + 668) = v65;
      }
      if ( v86 )
      {
        *((_WORD *)a1 + 51) &= ~0x200u;
        v66 = *(_DWORD *)a2 & 0x800000;
        if ( v66 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v85 && v66 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *(_DWORD *)v87 = 1;
      }
      if ( v26 )
      {
        v67 = *v26;
        v93 = 0LL;
        v94 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v93, v67);
        if ( v24 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v12 + 6), v93, a2, v91);
        while ( 1 )
        {
          v68 = SURFACE::GetFirstLSurf(a1);
          if ( !v68 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v12 + 6), v68, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v93);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v69 = HmgShareLock(*((_QWORD *)a2 + 18), 5);
        v70 = v69;
        if ( v69 )
        {
          if ( *(_QWORD *)(v69 + 24) && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
            MulReplaceRedirectionChild(*(_QWORD *)(v70 + 24), v96, v95);
          DEC_SHARE_REF_CNT((struct OBJECT *)v70);
        }
      }
      if ( v89 )
      {
        DEC_SHARE_REF_CNT(a1);
        INC_SHARE_REF_CNT(a2);
      }
      if ( *((_DWORD *)a1 + 2) )
      {
        *(_DWORD *)v87 = 1;
LABEL_65:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v91);
LABEL_67:
        if ( !v7 && v86 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v78 = *(_DWORD *)a1 & 0x800000;
          if ( v78 )
            *((_WORD *)a1 + 51) |= 0x200u;
          if ( v85 && v78 )
            *((_WORD *)a1 + 51) |= 0x400u;
        }
        goto LABEL_74;
      }
      v87 = (struct OBJECT *)HmgShareLockCheck(*((_QWORD *)a1 + 4), 5);
      SURFREFVIEW::bUnMapImmediate(v88, v71, v72);
      v88[0] = 0LL;
      v7 = SURFREF::bDeleteSurface(&v87, 0LL);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = 0LL;
      EPALOBJ::~EPALOBJ(&v87);
      if ( v7 )
        goto LABEL_65;
    }
    v73 = *((_QWORD *)a1 + 4);
    v74 = HmgQueryAltLock(v73);
    v75 = *((_QWORD *)a2 + 4);
    v76 = v74;
    v77 = HmgQueryAltLock(v75);
    HmgSwapLockedHandleContents(v75, v77, v73, v76, 5);
    goto LABEL_65;
  }
  v7 = 0;
LABEL_74:
  SURFREFVIEW::bUnMapImmediate(v90, (void *)v14, v10);
  v90[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate(v88, v79, v80);
  v88[0] = 0LL;
LABEL_77:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v90);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v88);
  return v7;
}
