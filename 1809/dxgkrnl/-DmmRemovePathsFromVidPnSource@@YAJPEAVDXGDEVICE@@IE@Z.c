/*
 * XREFs of ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C027C6A8
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00F62A0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00034EC (-GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A71C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00172C8 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D0FBC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D2CC0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C011FB7C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C013A3AC (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmRemovePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  struct VIDPN_MGR *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int8 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  char v19; // r13
  unsigned int i; // r12d
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v29; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r13
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  struct DMMVIDPN *v40; // rbx
  struct DXGDEVICE *v41; // r13
  VIDPN_MGR *v42; // r12
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r14
  _QWORD *v48; // rax
  ADAPTER_DISPLAY *v49; // r14
  int v50; // eax
  int ClientCommittedVidPnRef; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r14
  _QWORD *v57; // rax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rbx
  _QWORD *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r8
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rbx
  _QWORD *v67; // rax
  __int64 v69; // [rsp+20h] [rbp-E0h]
  _BYTE v70[4]; // [rsp+50h] [rbp-B0h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v71; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v72; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPN *v73; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v74; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTOPOLOGY *v75; // [rsp+70h] [rbp-90h]
  ADAPTER_DISPLAY *v76; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v77; // [rsp+80h] [rbp-80h]
  struct DXGDEVICE *v78; // [rsp+88h] [rbp-78h]
  _BYTE v79[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v80; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v81[32]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v82[64]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = *((_QWORD *)a1 + 216);
  v78 = a1;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v3) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v76 = *(ADAPTER_DISPLAY **)(v3 + 2520);
  v77 = (VIDPN_MGR *)*((_QWORD *)v76 + 11);
  v8 = v77;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v80, (__int64)v77);
  v13 = WdLogNewEntry5_WdDmmEvent(v10, v9, v11, v12);
  *(_QWORD *)(v13 + 24) = v5;
  *(_QWORD *)(v13 + 32) = v8;
  WdLogEvent5_WdDmmEvent(v13);
  v73 = 0LL;
  if ( (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v8, (__int64 *)&v73) < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v8;
    WdLogEvent5_WdError(v16);
    goto LABEL_50;
  }
  v75 = (struct DMMVIDPN *)((char *)v73 + 96);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v81,
    ((unsigned __int64)v73 + 152) & -(__int64)((struct DMMVIDPN *)((char *)v73 + 96) != 0LL),
    2u,
    v15,
    v69,
    *((_QWORD *)v73 + 17));
  v72 = -1;
  if ( a3 )
  {
    ADAPTER_DISPLAY::GetPrimaryPath(*(ADAPTER_DISPLAY **)(v3 + 2520), &v74, &v72, (enum _DXGK_PRIMARY_TARGET_TYPE *)v79);
    v17 = v72;
    if ( v74 != (_DWORD)v5 )
      v17 = -1;
    v72 = v17;
  }
  v18 = v72;
  v19 = 0;
  for ( i = 0; ; ++i )
  {
    v71 = -1;
    v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v75, v5, i, (unsigned int *)&v71);
    v23 = v21;
    if ( v21 < 0 )
    {
      if ( v21 == -1071774919 )
        break;
      v24 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v24);
    }
    if ( v23 == -1071774919 || v71 == -1 )
      break;
    if ( v71 == v18 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v75, v5, v71);
      if ( !Path )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v29);
      }
      v30 = *((_DWORD *)Path + 28);
      v71 = v30;
      if ( v30 == D3DKMDT_VPPS_UNPINNED )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v31 + 24) = 13818LL;
        WdLogEvent5_WdAssertion(v31);
        v30 = v71;
      }
      if ( ((v30 - 1) & 0xFFFFFFFD) != 0 && (*((_DWORD *)Path + 30) & 4) != 0 )
      {
        if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling(Path) < 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v32);
          WdLogEvent5_WdAssertion(v33);
        }
        v34 = DMMVIDPNPRESENTPATH::PinContentScaling(Path, D3DKMDT_VPPS_STRETCHED);
        v36 = v34;
        if ( v34 < 0 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v35);
          v37[3] = v5;
          v37[4] = v3;
          v37[5] = v36;
          WdLogEvent5_WdError(v37);
          if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling(Path, v71) < 0 )
          {
            v39 = WdLogNewEntry5_WdAssertion(v38);
            WdLogEvent5_WdAssertion(v39);
          }
        }
        v19 = 1;
      }
    }
    else
    {
      if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v75, v5, v71, 0LL) < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v26);
      }
      v19 = 1;
      --i;
    }
  }
  v40 = v73;
  if ( !v19 )
  {
    v42 = v77;
    v41 = v78;
    goto LABEL_39;
  }
  memset(v82, 0, 0xF8uLL);
  v41 = v78;
  v42 = v77;
  v70[0] = 0;
  v43 = VIDPN_MGR::SetTimingsFromVidPn(
          v77,
          0,
          1,
          v73,
          (struct D3DKMT_VIDPN_SOURCE_MASKS *)v82,
          (struct DMMVIDPN *)v70,
          0,
          v78,
          0LL);
  v47 = v43;
  if ( v43 >= 0 )
  {
    v50 = v82[19];
    if ( _bittest(&v50, v5) )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
      v48[4] = v5;
      v48[5] = -1071774970LL;
      goto LABEL_35;
    }
LABEL_39:
    ClientCommittedVidPnRef = VIDPN_MGR::CacheLastClientCommittedVidPnRef(v42, v40);
    v56 = ClientCommittedVidPnRef;
    if ( ClientCommittedVidPnRef < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
      v57[3] = v40;
      v57[4] = v3;
      v57[5] = v56;
    }
    v49 = v76;
    v58 = ADAPTER_DISPLAY::DestroyCddAllocations((PERESOURCE **)v76, v41, v5);
    v60 = v58;
    if ( v58 < 0 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      v61[3] = v5;
      v61[4] = v3;
      v61[5] = v60;
      WdLogEvent5_WdError(v61);
    }
    goto LABEL_43;
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
  v48[4] = v47;
LABEL_35:
  v48[3] = v40;
  WdLogEvent5_WdWarning(v48);
  v49 = v76;
LABEL_43:
  v62 = *(_QWORD *)(v3 + 2528);
  if ( v62 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v62 + 520) + 8LL) + 880LL))(
      *(_QWORD *)(v62 + 528),
      (unsigned int)v5);
  }
  else
  {
    v63 = *((_QWORD *)v49 + 33);
    if ( v63 )
      _InterlockedExchange((volatile __int32 *)(2704 * v5 + *(_QWORD *)(v63 + 8) + 856), 0);
  }
  v64 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v49, v5, 0, 0x100u, 0);
  v66 = v64;
  if ( v64 < 0 )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v65);
    v67[3] = v5;
    v67[4] = v3;
    v67[5] = v66;
    WdLogEvent5_WdError(v67);
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v81);
LABEL_50:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v73, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v80 + 40));
  return 0LL;
}
