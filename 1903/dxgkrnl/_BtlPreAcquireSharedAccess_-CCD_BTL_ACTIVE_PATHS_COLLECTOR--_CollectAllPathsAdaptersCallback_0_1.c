/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C014B060
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0003D00 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00062E4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024A90 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00452E0 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004B918 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00D7AEC (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00D8BF4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00DFA08 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2C84 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2F48 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E3C04 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E3D70 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E6D08 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  struct VIDPN_MGR *v10; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DMMVIDPN *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // r8
  struct DMMVIDPNTOPOLOGY *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int8 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rcx
  __int64 v55; // rdx
  _QWORD *v56; // r14
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // r14
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // r14
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // [rsp+20h] [rbp-E0h]
  unsigned int v90; // [rsp+40h] [rbp-C0h]
  struct DMMVIDPN *v91; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v92; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v93; // [rsp+58h] [rbp-A8h]
  __int64 v94; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v96; // [rsp+70h] [rbp-90h]
  _BYTE v97[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v98; // [rsp+80h] [rbp-80h]
  char v99; // [rsp+88h] [rbp-78h]
  _BYTE v100[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v101[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v102[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v103[72]; // [rsp+F8h] [rbp-8h] BYREF

  v98 = a1;
  v99 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v101, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((__int64)v101, 0xFFFFFFFFLL, v4);
  LODWORD(v8) = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
      goto LABEL_33;
    v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v42[3] = a1;
    v42[4] = *((int *)a1 + 70);
    v42[5] = *((unsigned int *)a1 + 69);
    v42[6] = this;
    goto LABEL_40;
  }
  if ( *((_BYTE *)a1 + 2465)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v9 = *((_QWORD *)a1 + 319)) == 0 )
  {
LABEL_40:
    LODWORD(v8) = 0;
    goto LABEL_33;
  }
  v10 = *(struct VIDPN_MGR **)(v9 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v92, (__int64)v10);
  v91 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10, (__int64 *)&v91);
  v8 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
    v44[3] = v8;
    v44[4] = v10;
    v45 = *(_QWORD *)this;
    v44[5] = *(_QWORD *)this;
    v46 = *((_QWORD *)v10 + 1);
    if ( !v46 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v45, v43);
      WdLogEvent5_WdAssertion(v47);
      v46 = *((_QWORD *)v10 + 1);
    }
    v48 = *(int *)(*(_QWORD *)(v46 + 16) + 280LL);
    v44[6] = v48;
    v49 = *((_QWORD *)v10 + 1);
    if ( !v49 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v48, v43);
      WdLogEvent5_WdAssertion(v50);
      v49 = *((_QWORD *)v10 + 1);
    }
    v44[7] = *(unsigned int *)(*(_QWORD *)(v49 + 16) + 276LL);
    v51 = v44;
    goto LABEL_49;
  }
  v15 = v91;
  v96 = (struct DMMVIDPN *)((char *)v91 + 96);
  if ( v91 == (struct DMMVIDPN *)-96LL )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14);
    v56[3] = -96LL;
    v56[4] = this;
    v57 = *(_QWORD *)this;
    v56[5] = *(_QWORD *)this;
    v58 = *((_QWORD *)v10 + 1);
    if ( !v58 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v57, v55);
      WdLogEvent5_WdAssertion(v59);
      v58 = *((_QWORD *)v10 + 1);
    }
    v60 = *(int *)(*(_QWORD *)(v58 + 16) + 280LL);
    v56[6] = v60;
    v61 = *((_QWORD *)v10 + 1);
    if ( !v61 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v60, v55);
      WdLogEvent5_WdAssertion(v62);
      v61 = *((_QWORD *)v10 + 1);
    }
    v56[7] = *(unsigned int *)(*(_QWORD *)(v61 + 16) + 276LL);
    WdLogEvent5_WdWarning(v56);
    goto LABEL_53;
  }
  LODWORD(v8) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v91, 1);
  if ( (int)v8 < 0 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v64[3] = v15;
    v64[4] = this;
    v65 = *(_QWORD *)this;
    v64[5] = *(_QWORD *)this;
    v66 = *((_QWORD *)v10 + 1);
    if ( !v66 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v65, v63);
      WdLogEvent5_WdAssertion(v67);
      v66 = *((_QWORD *)v10 + 1);
    }
    v68 = *(int *)(*(_QWORD *)(v66 + 16) + 280LL);
    v64[6] = v68;
    v69 = *((_QWORD *)v10 + 1);
    if ( !v69 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v68, v63);
      WdLogEvent5_WdAssertion(v52);
      v69 = *((_QWORD *)v10 + 1);
    }
    v64[7] = *(unsigned int *)(*(_QWORD *)(v69 + 16) + 276LL);
    v51 = v64;
LABEL_49:
    WdLogEvent5_WdError(v51);
    goto LABEL_53;
  }
  v94 = 0LL;
  v19 = VIDPN_MGR::CreateClientVidPn(v10, &v94);
  v8 = v19;
  if ( v19 < 0 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v71[3] = v8;
    v71[4] = v10;
    v72 = *(_QWORD *)this;
    v71[5] = *(_QWORD *)this;
    v73 = *((_QWORD *)v10 + 1);
    if ( !v73 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v72, v70);
      WdLogEvent5_WdAssertion(v74);
      v73 = *((_QWORD *)v10 + 1);
    }
    v75 = *(int *)(*(_QWORD *)(v73 + 16) + 280LL);
    v71[6] = v75;
    v76 = *((_QWORD *)v10 + 1);
    if ( !v76 )
    {
      v53 = WdLogNewEntry5_WdAssertion(v75, v70);
      WdLogEvent5_WdAssertion(v53);
      v76 = *((_QWORD *)v10 + 1);
    }
    v71[7] = *(unsigned int *)(*(_QWORD *)(v76 + 16) + 276LL);
    v54 = v71;
    goto LABEL_51;
  }
  v23 = (struct DMMVIDPNTOPOLOGY *)(v94 + 96);
  if ( v94 == -96 )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20, v22);
    v78[3] = -96LL;
    v78[4] = this;
    v79 = *(_QWORD *)this;
    v78[5] = *(_QWORD *)this;
    v80 = *((_QWORD *)v10 + 1);
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v79, v77);
      WdLogEvent5_WdAssertion(v81);
      v80 = *((_QWORD *)v10 + 1);
    }
    v82 = *(int *)(*(_QWORD *)(v80 + 16) + 280LL);
    v78[6] = v82;
    v83 = *((_QWORD *)v10 + 1);
    if ( !v83 )
    {
      v84 = WdLogNewEntry5_WdAssertion(v82, v77);
      WdLogEvent5_WdAssertion(v84);
      v83 = *((_QWORD *)v10 + 1);
    }
    v78[7] = *(unsigned int *)(*(_QWORD *)(v83 + 16) + 276LL);
    v54 = v78;
LABEL_51:
    WdLogEvent5_WdError(v54);
    goto LABEL_52;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v10 + 10) + 72LL));
  v24 = *((_QWORD *)a1 + 319);
  v25 = 0LL;
  v26 = *((_QWORD *)v10 + 10);
  v95 = v26;
  v90 = 0;
  if ( !*(_DWORD *)(v24 + 80) )
  {
LABEL_30:
    if ( v26 )
      ReferenceCounted::Release((ReferenceCounted *)(v26 + 64), v25, (__int64)v22);
    auto_rc<DMMVIDPN>::reset(&v94, 0LL);
    auto_rc<DMMVIDPN>::reset((__int64 *)&v91, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v92 + 40));
    goto LABEL_33;
  }
  v22 = (_QWORD *)(v26 + 24);
  while ( 1 )
  {
    v27 = 0LL;
    if ( (_QWORD *)*v22 != v22 )
      v27 = *v22 - 8LL;
    if ( v27 )
      break;
LABEL_29:
    v25 = (unsigned int)(v25 + 1);
    v90 = v25;
    if ( (unsigned int)v25 >= *(_DWORD *)(*((_QWORD *)a1 + 319) + 80LL) )
      goto LABEL_30;
  }
  while ( 1 )
  {
    v93 = *(_DWORD *)(v27 + 24);
    if ( DMMVIDPNTOPOLOGY::FindPath(v96, v25, v93) || *(_DWORD *)(v27 + 84) == 15 && !*(_QWORD *)(v27 + 112) )
      goto LABEL_27;
    if ( *((_QWORD *)v23 + 5) )
    {
      v85 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v85 + 24) = 809LL;
      WdLogEvent5_WdAssertion(v85);
    }
    v30 = VIDPN_MGR::AddPathToVidPnTopology(
            v10,
            v23,
            v90,
            v93,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v8 = v30;
    if ( v30 == -1071774975 )
    {
      LODWORD(v8) = 0;
      goto LABEL_27;
    }
    if ( v30 < 0 )
      break;
    if ( *((_QWORD *)v23 + 5) != 1LL )
    {
      v86 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v86 + 24) = 840LL;
      WdLogEvent5_WdAssertion(v86);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v23, v90, v93);
    LODWORD(v8) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v8 < 0 )
      goto LABEL_74;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v100,
      (__int64)v23 + 56,
      2u,
      v37,
      v89,
      0xFFuLL);
    DMMVIDPNTOPOLOGY::RemovePath(v23, v90, v93, 0LL);
    if ( *((_QWORD *)v23 + 5) )
    {
      v87 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v87 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v87);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v100, v38);
LABEL_27:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                   (DMMVIDEOPRESENTTARGETSET *)v26,
                   (const struct DMMVIDEOPRESENTTARGET *const)v27);
    LODWORD(v25) = v90;
    v27 = (__int64)NextTarget;
    if ( !NextTarget )
    {
      v22 = (_QWORD *)(v26 + 24);
      goto LABEL_29;
    }
  }
  v88 = WdLogNewEntry5_WdError(v32, v31, v33);
  *(_QWORD *)(v88 + 24) = v8;
  WdLogEvent5_WdError(v88);
LABEL_74:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v95, v35, v36);
LABEL_52:
  auto_rc<DMMVIDPN>::reset(&v94, 0LL);
LABEL_53:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v91, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v92);
LABEL_33:
  COREACCESS::~COREACCESS((COREACCESS *)v103);
  COREACCESS::~COREACCESS((COREACCESS *)v102);
  if ( v99 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v97);
  return (unsigned int)v8;
}
