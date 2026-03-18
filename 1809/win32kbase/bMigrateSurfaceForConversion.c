/*
 * XREFs of bMigrateSurfaceForConversion @ 0x1C009CEA0
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C00A03D0 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001F0EC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0022B50 (HmgShareLock.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     PushThreadGuardedObject @ 0x1C00243F0 (PushThreadGuardedObject.c)
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C005DAB0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C005DAE0 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C005DF80 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 *     ?GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ @ 0x1C0080380 (-GetFirstLSurf@SURFACE@@QEAAPEAVSFMLOGICALSURFACE@@XZ.c)
 *     HmgQueryAltLock @ 0x1C008BC90 (HmgQueryAltLock.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C008BFA0 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C008C020 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00AA430 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00AB474 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     HmgSwapLockedHandleContents @ 0x1C00F9430 (HmgSwapLockedHandleContents.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00FF010 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall bMigrateSurfaceForConversion(struct OBJECT *a1, struct _BASEOBJECT *a2, int a3, _DWORD *a4)
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
  int v23; // edi
  HLSURF HLSURFCloneWrap; // rbx
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
  void *v69; // rdx
  struct DC *v70; // r8
  __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rdi
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  void *v77; // rdx
  struct DC *v78; // r8
  void *v79; // rdx
  struct DC *v80; // r8
  BOOL v83; // [rsp+40h] [rbp-C0h]
  BOOL v84; // [rsp+44h] [rbp-BCh]
  SURFACE *v85[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v86; // [rsp+58h] [rbp-A8h]
  SURFACE *v87[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v88; // [rsp+70h] [rbp-90h]
  __int64 v89; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v90[4]; // [rsp+80h] [rbp-80h] BYREF
  int v91; // [rsp+A0h] [rbp-60h]
  struct _SURFOBJ *v92; // [rsp+A8h] [rbp-58h]
  struct _SURFOBJ *v93; // [rsp+B0h] [rbp-50h]
  _BYTE v94[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-28h]
  int v96; // [rsp+E0h] [rbp-20h]
  __int128 v97; // [rsp+F0h] [rbp-10h]
  __int128 v98; // [rsp+100h] [rbp+0h]
  __int128 v99; // [rsp+110h] [rbp+10h]
  __int128 v100; // [rsp+120h] [rbp+20h]
  __int128 v101; // [rsp+130h] [rbp+30h]
  __int128 v102; // [rsp+140h] [rbp+40h]
  __int128 v103; // [rsp+150h] [rbp+50h]
  __int128 v104; // [rsp+160h] [rbp+60h]
  __int128 v105; // [rsp+170h] [rbp+70h]
  __int128 v106; // [rsp+180h] [rbp+80h]
  __int64 v107; // [rsp+190h] [rbp+90h]
  __int64 v108; // [rsp+1A0h] [rbp+A0h] BYREF
  int v109; // [rsp+1A8h] [rbp+A8h]
  int v110; // [rsp+1ACh] [rbp+ACh]

  v109 = *((_DWORD *)a1 + 14);
  v110 = *((_DWORD *)a1 + 15);
  v88 = a4;
  v108 = 0LL;
  v7 = 1;
  v85[0] = 0LL;
  v8 = (struct _SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL));
  v93 = v8;
  SURFREFVIEW::bMap((SURFREFVIEW *)v85, v8);
  v87[0] = 0LL;
  v92 = (struct _SURFOBJ *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  SURFREFVIEW::bMap((SURFREFVIEW *)v87, v92);
  *a4 = 0;
  v11 = *((_DWORD *)a1 + 28);
  if ( (v11 & 0x80100000) != 0 )
  {
    SURFREFVIEW::bUnMapImmediate(v87, v9, v10);
    v87[0] = 0LL;
    SURFREFVIEW::bUnMapImmediate(v85, v79, v80);
    v85[0] = 0LL;
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
      : (v15 = (*(__int64 (__fastcall **)(unsigned __int64, struct _SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, __int64 *))(v13 + 2840))(
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
    v86 = *((_DWORD *)a1 + 29) & 0x80;
    v17 = v16 & 0x800000;
    v84 = v17 && (*((_WORD *)a1 + 51) & 0x200) != 0;
    v83 = v17 && (*((_WORD *)a1 + 51) & 0x400) != 0;
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
    v23 = 0;
    HLSURFCloneWrap = 0LL;
    UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(v94);
    v95 = 0LL;
    v96 = 0;
    FirstLSurf = SURFACE::GetFirstLSurf(a1);
    v26 = (HLSURF *)FirstLSurf;
    if ( !FirstLSurf )
      goto LABEL_34;
    v23 = -__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3);
    if ( !__CFSHR__(*((_DWORD *)FirstLSurf + 61), 3) )
      goto LABEL_34;
    if ( (int)IsSFMLOGICALSURFACE_CreateHLSURFCloneSupported() >= 0 )
      HLSURFCloneWrap = (HLSURF)SFMLOGICALSURFACE_CreateHLSURFCloneWrap(*((_QWORD *)a1 + 6), v26, 0LL, 1LL, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v94, HLSURFCloneWrap);
    if ( !v95 )
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
      if ( v84 )
      {
        *((_WORD *)a1 + 51) &= ~0x200u;
        v66 = *(_DWORD *)a2 & 0x800000;
        if ( v66 )
          *((_WORD *)a2 + 51) |= 0x200u;
        if ( v83 && v66 )
          *((_WORD *)a2 + 51) |= 0x400u;
        *v88 = 1;
      }
      if ( v26 )
      {
        UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(&v89);
        v67 = *v26;
        v90[3] = 0LL;
        v91 = 1;
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v89, v67);
        if ( v23 && (int)IsvSpDwmMigrateSpriteLSurfReferenceSupported() >= 0 )
          vSpDwmMigrateSpriteLSurfReferenceWrap(*((_QWORD *)v12 + 6), v90[3], a2, v95);
        while ( 1 )
        {
          v68 = SURFACE::GetFirstLSurf(a1);
          if ( !v68 )
            break;
          if ( (int)IsvSpDwmMigrateLSurfShapeReferenceSupported() >= 0 )
            vSpDwmMigrateLSurfShapeReferenceWrap(*((_QWORD *)v12 + 6), v68, a2);
        }
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)&v89);
      }
      if ( (*((_DWORD *)a2 + 29) & 4) != 0 )
      {
        v89 = HmgShareLock(*((_QWORD *)a2 + 18), 5);
        memset(v90, 0, sizeof(v90));
        PushThreadGuardedObject(
          v90,
          (__int64)&v89,
          (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic);
        if ( v89 && *(_QWORD *)(v89 + 24) && (int)IsMulReplaceRedirectionChildSupported() >= 0 )
          MulReplaceRedirectionChild(*(_QWORD *)(v89 + 24), v93, v92);
        UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic(&v89);
        PopThreadGuardedObject(v90);
      }
      if ( v86 )
      {
        DEC_SHARE_REF_CNT(a1);
        INC_SHARE_REF_CNT(a2);
      }
      if ( *((_DWORD *)a1 + 2) )
      {
        *v88 = 1;
LABEL_65:
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v94);
LABEL_67:
        if ( !v7 && v84 )
        {
          *((_WORD *)a2 + 51) &= ~0x200u;
          v76 = *(_DWORD *)a1 & 0x800000;
          if ( v76 )
            *((_WORD *)a1 + 51) |= 0x200u;
          if ( v83 && v76 )
            *((_WORD *)a1 + 51) |= 0x400u;
        }
        goto LABEL_74;
      }
      SURFREF::SURFREF((SURFREF *)&v89, *((HSURF *)a1 + 4));
      SURFREFVIEW::bUnMapImmediate(v85, v69, v70);
      v85[0] = 0LL;
      v7 = SURFREF::bDeleteSurface(&v89, 0LL);
      if ( !v7 )
        *((_QWORD *)a1 + 70) = 0LL;
      SURFREF::~SURFREF((SURFREF *)&v89);
      if ( v7 )
        goto LABEL_65;
    }
    v71 = *((_QWORD *)a1 + 4);
    v72 = HmgQueryAltLock(v71);
    v73 = *((_QWORD *)a2 + 4);
    v74 = v72;
    v75 = HmgQueryAltLock(v73);
    HmgSwapLockedHandleContents(v73, v75, v71, v74, 5);
    goto LABEL_65;
  }
  v7 = 0;
LABEL_74:
  SURFREFVIEW::bUnMapImmediate(v87, (void *)v14, v10);
  v87[0] = 0LL;
  SURFREFVIEW::bUnMapImmediate(v85, v77, v78);
  v85[0] = 0LL;
LABEL_77:
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v87);
  SURFREFVIEW::bUnMap((SURFREFVIEW *)v85);
  return v7;
}
