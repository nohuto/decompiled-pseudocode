/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C013A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00040B0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C00227A8 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ @ 0x1C00227C4 (--1-$auto_rc@$$CBVDMMVIDEOPRESENTTARGETSET@@@@QEAA@XZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C004527C (DxgkIsMSBDDFallbackEnabled.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00BF624 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00BF6E4 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rsi
  struct VIDPN_MGR *v11; // rsi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DMMVIDPN *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct DMMVIDPNTOPOLOGY *v20; // r12
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rbx
  _QWORD *v24; // r8
  __int64 v25; // r13
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned __int8 v30; // r9
  __int64 v31; // rcx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // r14
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  _QWORD *v65; // r14
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // [rsp+20h] [rbp-99h]
  __int64 v77; // [rsp+40h] [rbp-79h] BYREF
  __int64 v78; // [rsp+48h] [rbp-71h] BYREF
  __int64 v79; // [rsp+50h] [rbp-69h] BYREF
  DMMVIDPNTOPOLOGY *v80; // [rsp+58h] [rbp-61h]
  _BYTE v81[8]; // [rsp+60h] [rbp-59h] BYREF
  struct DXGADAPTER *v82; // [rsp+68h] [rbp-51h]
  char v83; // [rsp+70h] [rbp-49h]
  _BYTE v84[24]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v85[8]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v86[32]; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v87[88]; // [rsp+B8h] [rbp-1h] BYREF
  unsigned int v88; // [rsp+120h] [rbp+67h]
  unsigned int v89; // [rsp+130h] [rbp+77h]
  struct DMMVIDPN *v90; // [rsp+138h] [rbp+7Fh] BYREF

  v82 = a1;
  v83 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v85, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v85);
  LODWORD(v9) = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_33;
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v34[3] = a1;
    v34[4] = *((int *)a1 + 70);
    v34[5] = *((unsigned int *)a1 + 69);
    v34[6] = this;
    goto LABEL_40;
  }
  if ( *((_BYTE *)a1 + 2429)
    || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled()
    || (v10 = *((_QWORD *)a1 + 315)) == 0 )
  {
LABEL_40:
    LODWORD(v9) = 0;
    goto LABEL_33;
  }
  v11 = *(struct VIDPN_MGR **)(v10 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v77, (__int64)v11);
  v90 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v90);
  v9 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v35[3] = v9;
    v35[4] = v11;
    v36 = *(_QWORD *)this;
    v35[5] = *(_QWORD *)this;
    v37 = *((_QWORD *)v11 + 1);
    if ( !v37 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v36);
      WdLogEvent5_WdAssertion(v38);
      v37 = *((_QWORD *)v11 + 1);
    }
    v39 = *(int *)(*(_QWORD *)(v37 + 16) + 280LL);
    v35[6] = v39;
    v40 = *((_QWORD *)v11 + 1);
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v39);
      WdLogEvent5_WdAssertion(v41);
      v40 = *((_QWORD *)v11 + 1);
    }
    v35[7] = *(unsigned int *)(*(_QWORD *)(v40 + 16) + 276LL);
    v42 = v35;
    goto LABEL_49;
  }
  v16 = v90;
  v80 = (struct DMMVIDPN *)((char *)v90 + 96);
  if ( v90 == (struct DMMVIDPN *)-96LL )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v46[3] = -96LL;
    v46[4] = this;
    v47 = *(_QWORD *)this;
    v46[5] = *(_QWORD *)this;
    v48 = *((_QWORD *)v11 + 1);
    if ( !v48 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v47);
      WdLogEvent5_WdAssertion(v49);
      v48 = *((_QWORD *)v11 + 1);
    }
    v50 = *(int *)(*(_QWORD *)(v48 + 16) + 280LL);
    v46[6] = v50;
    v51 = *((_QWORD *)v11 + 1);
    if ( !v51 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v50);
      WdLogEvent5_WdAssertion(v52);
      v51 = *((_QWORD *)v11 + 1);
    }
    v46[7] = *(unsigned int *)(*(_QWORD *)(v51 + 16) + 276LL);
    WdLogEvent5_WdWarning(v46);
    goto LABEL_53;
  }
  LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, v90, 1);
  if ( (int)v9 < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v53[3] = v16;
    v53[4] = this;
    v54 = *(_QWORD *)this;
    v53[5] = *(_QWORD *)this;
    v55 = *((_QWORD *)v11 + 1);
    if ( !v55 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v54);
      WdLogEvent5_WdAssertion(v56);
      v55 = *((_QWORD *)v11 + 1);
    }
    v57 = *(int *)(*(_QWORD *)(v55 + 16) + 280LL);
    v53[6] = v57;
    v58 = *((_QWORD *)v11 + 1);
    if ( !v58 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v57);
      WdLogEvent5_WdAssertion(v43);
      v58 = *((_QWORD *)v11 + 1);
    }
    v53[7] = *(unsigned int *)(*(_QWORD *)(v58 + 16) + 276LL);
    v42 = v53;
LABEL_49:
    WdLogEvent5_WdError(v42);
    goto LABEL_53;
  }
  v78 = 0LL;
  v18 = VIDPN_MGR::CreateClientVidPn(v11, &v78);
  v9 = v18;
  if ( v18 < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v59[3] = v9;
    v59[4] = v11;
    v60 = *(_QWORD *)this;
    v59[5] = *(_QWORD *)this;
    v61 = *((_QWORD *)v11 + 1);
    if ( !v61 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v60);
      WdLogEvent5_WdAssertion(v62);
      v61 = *((_QWORD *)v11 + 1);
    }
    v63 = *(int *)(*(_QWORD *)(v61 + 16) + 280LL);
    v59[6] = v63;
    v64 = *((_QWORD *)v11 + 1);
    if ( !v64 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v63);
      WdLogEvent5_WdAssertion(v44);
      v64 = *((_QWORD *)v11 + 1);
    }
    v59[7] = *(unsigned int *)(*(_QWORD *)(v64 + 16) + 276LL);
    v45 = v59;
    goto LABEL_51;
  }
  v20 = (struct DMMVIDPNTOPOLOGY *)(v78 + 96);
  if ( v78 == -96 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v65[3] = -96LL;
    v65[4] = this;
    v66 = *(_QWORD *)this;
    v65[5] = *(_QWORD *)this;
    v67 = *((_QWORD *)v11 + 1);
    if ( !v67 )
    {
      v68 = WdLogNewEntry5_WdAssertion(v66);
      WdLogEvent5_WdAssertion(v68);
      v67 = *((_QWORD *)v11 + 1);
    }
    v69 = *(int *)(*(_QWORD *)(v67 + 16) + 280LL);
    v65[6] = v69;
    v70 = *((_QWORD *)v11 + 1);
    if ( !v70 )
    {
      v71 = WdLogNewEntry5_WdAssertion(v69);
      WdLogEvent5_WdAssertion(v71);
      v70 = *((_QWORD *)v11 + 1);
    }
    v65[7] = *(unsigned int *)(*(_QWORD *)(v70 + 16) + 276LL);
    v45 = v65;
LABEL_51:
    WdLogEvent5_WdError(v45);
    goto LABEL_52;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 10) + 72LL));
  v21 = *((_QWORD *)a1 + 315);
  v22 = 0;
  v23 = *((_QWORD *)v11 + 10);
  v79 = v23;
  v88 = 0;
  if ( !*(_DWORD *)(v21 + 80) )
  {
LABEL_30:
    if ( v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
    auto_rc<DMMVIDPN>::reset(&v78, 0LL);
    auto_rc<DMMVIDPN>::reset((__int64 *)&v90, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v77 + 40));
    goto LABEL_33;
  }
  v24 = (_QWORD *)(v23 + 24);
  while ( 1 )
  {
    v25 = 0LL;
    if ( (_QWORD *)*v24 != v24 )
      v25 = *v24 - 8LL;
    if ( v25 )
      break;
LABEL_29:
    v88 = ++v22;
    if ( v22 >= *(_DWORD *)(*((_QWORD *)a1 + 315) + 80LL) )
      goto LABEL_30;
  }
  while ( 1 )
  {
    v89 = *(_DWORD *)(v25 + 24);
    if ( DMMVIDPNTOPOLOGY::FindPath(v80, v22, v89) || *(_DWORD *)(v25 + 84) == 15 && !*(_QWORD *)(v25 + 112) )
      goto LABEL_27;
    if ( *((_QWORD *)v20 + 5) )
    {
      v72 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v72 + 24) = 809LL;
      WdLogEvent5_WdAssertion(v72);
    }
    v27 = VIDPN_MGR::AddPathToVidPnTopology(
            v11,
            v20,
            v88,
            v89,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_IGNORE);
    v9 = v27;
    if ( v27 == -1071774975 )
    {
      LODWORD(v9) = 0;
      goto LABEL_27;
    }
    if ( v27 < 0 )
      break;
    if ( *((_QWORD *)v20 + 5) != 1LL )
    {
      v73 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v73 + 24) = 840LL;
      WdLogEvent5_WdAssertion(v73);
    }
    Path = DMMVIDPNTOPOLOGY::FindPath(v20, v88, v89);
    LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(this, a1, Path, 0, 0);
    if ( (int)v9 < 0 )
      goto LABEL_74;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v84,
      (__int64)v20 + 56,
      2u,
      v30,
      v76,
      0xFFuLL);
    DMMVIDPNTOPOLOGY::RemovePath(v20, v88, v89, 0LL);
    if ( *((_QWORD *)v20 + 5) )
    {
      v74 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v74 + 24) = 864LL;
      WdLogEvent5_WdAssertion(v74);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v84);
LABEL_27:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                   (DMMVIDEOPRESENTTARGETSET *)v23,
                   (const struct DMMVIDEOPRESENTTARGET *const)v25);
    v22 = v88;
    v25 = (__int64)NextTarget;
    if ( !NextTarget )
    {
      v24 = (_QWORD *)(v23 + 24);
      goto LABEL_29;
    }
  }
  v75 = WdLogNewEntry5_WdError(v28);
  *(_QWORD *)(v75 + 24) = v9;
  WdLogEvent5_WdError(v75);
LABEL_74:
  auto_rc<DMMVIDEOPRESENTTARGETSET const>::~auto_rc<DMMVIDEOPRESENTTARGETSET const>(&v79);
LABEL_52:
  auto_rc<DMMVIDPN>::reset(&v78, 0LL);
LABEL_53:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v90, 0LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v77);
LABEL_33:
  COREACCESS::~COREACCESS((COREACCESS *)v87);
  COREACCESS::~COREACCESS((COREACCESS *)v86);
  if ( v83 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v81);
  return (unsigned int)v9;
}
