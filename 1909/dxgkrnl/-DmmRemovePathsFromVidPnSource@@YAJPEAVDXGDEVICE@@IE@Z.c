/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02B4EC8
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00CE2F0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000576C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C001AB7C (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001FF60 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00C9470 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E0048 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0129F1C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C014B824 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct VIDPN_MGR *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int8 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r13d
  char v20; // bl
  unsigned int i; // r12d
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v33; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbx
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  VIDPN_MGR *v50; // r13
  bool v51; // zf
  struct DMMVIDPN *v52; // rbx
  struct DXGDEVICE *v53; // r12
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r14
  _QWORD *v59; // rax
  ADAPTER_DISPLAY *v60; // r14
  int v61; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r14
  _QWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rbx
  _QWORD *v72; // rax
  __int64 v73; // r8
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rbx
  _QWORD *v80; // rax
  __int64 v82; // [rsp+20h] [rbp-E0h]
  unsigned int v83; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v84; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v85; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPN *v86; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v87; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v88; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY *v89; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v90; // [rsp+80h] [rbp-80h]
  _BYTE v91[8]; // [rsp+88h] [rbp-78h] BYREF
  VIDPN_MGR *v92; // [rsp+90h] [rbp-70h]
  __int64 v93; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v94[32]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v95[64]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = *((_QWORD *)a1 + 216);
  v90 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v8);
  }
  v89 = *(ADAPTER_DISPLAY **)(v3 + 2552);
  v92 = (VIDPN_MGR *)*((_QWORD *)v89 + 11);
  v9 = v92;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v93, (__int64)v92);
  v12 = WdLogNewEntry5_WdDmmEvent(v11, v10);
  *(_QWORD *)(v12 + 24) = v5;
  *(_QWORD *)(v12 + 32) = v9;
  WdLogEvent5_WdDmmEvent(v12);
  v86 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v9, (__int64 *)&v86) < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v9;
    WdLogEvent5_WdError(v17);
    goto LABEL_50;
  }
  v88 = (struct DMMVIDPN *)((char *)v86 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v94,
    ((unsigned __int64)v86 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v86 + 96) != 0LL),
    2u,
    v16,
    v82,
    *((_QWORD *)v86 + 17));
  v85 = -1;
  if ( a3 )
  {
    ADAPTER_DISPLAY::GetPrimaryPath(*(ADAPTER_DISPLAY **)(v3 + 2552), &v87, &v85, (enum _DXGK_PRIMARY_TARGET_TYPE *)v91);
    v18 = v85;
    if ( v87 != (_DWORD)v5 )
      v18 = -1;
    v85 = v18;
  }
  v19 = v85;
  v20 = 0;
  for ( i = 0; ; ++i )
  {
    v84 = -1;
    v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v88, (unsigned int)v5, i, (unsigned int *)&v84);
    v25 = v22;
    if ( v22 < 0 )
    {
      if ( v22 == -1071774919 )
        break;
      v26 = WdLogNewEntry5_WdAssertion(v24, v23);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v25 == -1071774919 || v84 == -1 )
      break;
    if ( v84 == v19 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v88, v5, v84);
      if ( !Path )
      {
        v33 = WdLogNewEntry5_WdAssertion(v31, v30);
        WdLogEvent5_WdAssertion(v33);
      }
      v34 = *((_DWORD *)Path + 28);
      v84 = v34;
      if ( v34 == D3DKMDT_VPPS_UNPINNED )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31, v30);
        *(_QWORD *)(v35 + 24) = 13539LL;
        WdLogEvent5_WdAssertion(v35);
        v34 = v84;
      }
      if ( ((v34 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
      {
        if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path, v30) < 0 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v37, v36);
          WdLogEvent5_WdAssertion(v39);
        }
        v40 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, 3LL, v38);
        v44 = v40;
        if ( v40 < 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
          v45[3] = v5;
          v45[4] = v3;
          v45[5] = v44;
          WdLogEvent5_WdError(v45);
          if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, (unsigned int)v84, v46) < 0 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v48, v47);
            WdLogEvent5_WdAssertion(v49);
          }
        }
        v20 = 1;
      }
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v88, v5, v84, 0LL) < 0 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v29);
      }
      v20 = 1;
      --i;
    }
  }
  v50 = v92;
  v51 = v20 == 0;
  v52 = v86;
  if ( v51 )
  {
    v53 = v90;
    goto LABEL_39;
  }
  memset(v95, 0, 0xFCuLL);
  v53 = v90;
  LOBYTE(v83) = 0;
  v54 = VIDPN_MGR::SetTimingsFromVidPn(
          v92,
          0LL,
          1u,
          (char *)v86,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v95,
          &v83,
          0,
          v90,
          0LL);
  v58 = v54;
  if ( v54 >= 0 )
  {
    v61 = v95[20];
    if ( _bittest(&v61, v5) )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
      v59[4] = v5;
      v59[5] = -1071774970LL;
      goto LABEL_35;
    }
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v50, v52);
    v65 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdTrace(v64, v63);
      v66[3] = v52;
      v66[4] = v3;
      v66[5] = v65;
    }
    v60 = v89;
    v67 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)v89, v53, v5);
    v71 = v67;
    if ( v67 < 0 )
    {
      v72 = (_QWORD *)WdLogNewEntry5_WdError(v69, v68, v70);
      v72[3] = v5;
      v72[4] = v3;
      v72[5] = v71;
      WdLogEvent5_WdError(v72);
    }
    goto LABEL_43;
  }
  v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
  v59[4] = v58;
LABEL_35:
  v59[3] = v52;
  WdLogEvent5_WdWarning(v59);
  v60 = v89;
LABEL_43:
  v73 = *(_QWORD *)(v3 + 2560);
  if ( v73 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v73 + 520) + 8LL) + 880LL))(
      *(_QWORD *)(v73 + 528),
      (unsigned int)v5);
  }
  else
  {
    v74 = *((_QWORD *)v60 + 46);
    if ( v74 )
      _InterlockedExchange((volatile __int32 *)(2760 * v5 + *(_QWORD *)(v74 + 8) + 856), 0);
  }
  v75 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v60, (unsigned int)v5, 0, 256, 0);
  v79 = v75;
  if ( v75 < 0 )
  {
    v80 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76, v78);
    v80[3] = v5;
    v80[4] = v3;
    v80[5] = v79;
    WdLogEvent5_WdError(v80);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v94, v76);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v86, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v93 + 40));
  return 0LL;
}
