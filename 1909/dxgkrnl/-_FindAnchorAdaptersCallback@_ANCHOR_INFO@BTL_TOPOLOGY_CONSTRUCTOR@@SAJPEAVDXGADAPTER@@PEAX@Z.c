/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00DFAE8
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C00DF980 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00DFA9C (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00DFACC (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00DFF54 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E0048 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E32C4 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E3588 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E4244 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E43B0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6A64 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E7328 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02C58EC (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C02C5930 (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *this,
        _BYTE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int ClientVidPn; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v20; // rcx
  unsigned int PathSourceFromTarget; // r12d
  struct DMMVIDPNTOPOLOGY *v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  MONITOR_MGR *v31; // rcx
  int MonitorInstance; // eax
  struct DXGMONITOR *v33; // r13
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v35; // rcx
  bool v36; // r13
  int PostAdapterPreference; // eax
  DMMVIDPNTOPOLOGY *v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // edx
  DMMVIDPNTOPOLOGY *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rax
  int VmtPreference; // eax
  __int64 v48; // r9
  bool v49; // al
  char v50; // al
  unsigned int v51; // eax
  int VotPreference; // eax
  __int64 v53; // r9
  int v54; // edi
  int v55; // eax
  int v56; // r10d
  int v57; // r11d
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  bool v66; // [rsp+40h] [rbp-49h]
  unsigned int v67; // [rsp+44h] [rbp-45h] BYREF
  DMMVIDPNTOPOLOGY *v68; // [rsp+48h] [rbp-41h]
  int AdapterPreference; // [rsp+50h] [rbp-39h]
  __int64 v70; // [rsp+58h] [rbp-31h] BYREF
  __int64 v71; // [rsp+60h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v72; // [rsp+68h] [rbp-21h]
  struct DXGMONITOR *v73; // [rsp+70h] [rbp-19h] BYREF
  __int64 v74; // [rsp+78h] [rbp-11h]
  __int64 v75; // [rsp+80h] [rbp-9h]
  struct VIDPN_MGR *v76; // [rsp+88h] [rbp-1h]
  __int64 v77; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v78[72]; // [rsp+98h] [rbp+Fh] BYREF
  bool v79; // [rsp+F8h] [rbp+6Fh]
  bool v80; // [rsp+F8h] [rbp+6Fh]
  bool v81; // [rsp+100h] [rbp+77h]
  bool v82; // [rsp+108h] [rbp+7Fh]

  AdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference((__int64)this);
  if ( AdapterPreference < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2552) + 88LL);
  v76 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v77, (__int64)v6);
  v7 = *((_QWORD *)this + 319);
  v71 = 0LL;
  v72 = 0LL;
  if ( *(_BYTE *)(v7 + 234) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6) >= 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v45);
    v72 = (DMMVIDPNTOPOLOGY *)96;
  }
  v70 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  v14 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
    v46[3] = v14;
    v46[4] = this;
    v46[5] = *((int *)this + 70);
    v46[6] = *((unsigned int *)this + 69);
    v46[7] = a2;
    WdLogEvent5_WdError(v46);
    goto LABEL_14;
  }
  v68 = (DMMVIDPNTOPOLOGY *)(v70 + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL));
  v15 = *((_QWORD *)v6 + 10);
  LODWORD(v14) = 0;
  v74 = v15;
  v16 = *(_QWORD *)(v15 + 24);
  if ( v16 == v15 + 24 )
    goto LABEL_13;
  v17 = v16 - 8;
  if ( !v17 )
    goto LABEL_13;
  v82 = v79;
  v80 = v66;
  while ( 1 )
  {
    if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected((DMMVIDEOPRESENTTARGET *)v17, (enum _DMM_VIDPN_MONITOR_TYPE *)&v67)
      || *(_DWORD *)(v17 + 88) )
    {
      goto LABEL_10;
    }
    if ( *((_DWORD *)a2 + 9) >= (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference((__int64)this) )
    {
      BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v67);
      VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(*((unsigned int *)a2 + 8));
      if ( (_DWORD)v11 != VmtPreference )
      {
        v49 = (int)v11 < VmtPreference;
        goto LABEL_65;
      }
      v50 = a2[49];
      if ( *(_BYTE *)(v17 + 412) )
      {
        if ( !v50 )
          goto LABEL_10;
      }
      else if ( v50 )
      {
        goto LABEL_17;
      }
      if ( *(_DWORD *)a2 == *((_DWORD *)this + 69) && *((_DWORD *)a2 + 1) == *((_DWORD *)this + 70) )
      {
        v51 = *(_DWORD *)(v17 + 124);
        if ( v51 != *((_DWORD *)a2 + 7) )
        {
          v49 = v51 < *((_DWORD *)a2 + 7);
          goto LABEL_65;
        }
      }
      LOBYTE(v48) = 1;
      VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                        this,
                        *(unsigned int *)(v17 + 84),
                        *(unsigned int *)(v17 + 96),
                        v48);
      LOBYTE(v53) = 1;
      v54 = VotPreference;
      v55 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(this, *((unsigned int *)a2 + 5), *((unsigned int *)a2 + 6), v53);
      if ( v54 != v55 )
      {
        v49 = v54 < v55;
        LODWORD(v14) = 0;
        goto LABEL_65;
      }
      if ( v56 == v57 && *((_DWORD *)a2 + 1) == *((_DWORD *)this + 70) )
      {
        LODWORD(v14) = 0;
        goto LABEL_10;
      }
      LODWORD(v14) = 0;
      if ( (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference((__int64)this) >= *((_DWORD *)a2 + 11) )
      {
        v49 = 0;
LABEL_65:
        if ( !v49 )
          goto LABEL_10;
      }
    }
LABEL_17:
    if ( !v72
      || (PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v72, *(_DWORD *)(v17 + 24)),
          PathSourceFromTarget == -1) )
    {
      v22 = v68;
    }
    else
    {
      v22 = v68;
      if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v68,
                  PathSourceFromTarget,
                  *(_DWORD *)(v17 + 24),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
        goto LABEL_20;
    }
    PathSourceFromTarget = 0;
    if ( *(_DWORD *)(*((_QWORD *)this + 319) + 80LL) )
    {
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v6,
                    v22,
                    PathSourceFromTarget,
                    *(_DWORD *)(v17 + 24),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++PathSourceFromTarget;
      }
      while ( PathSourceFromTarget < *(_DWORD *)(*((_QWORD *)this + 319) + 80LL) );
      v15 = v74;
    }
LABEL_20:
    v23 = *(unsigned int *)(v17 + 24);
    if ( (_DWORD)v23 == -1 )
    {
      LODWORD(v14) = -1073741811;
      goto LABEL_37;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v75 = *((_QWORD *)this + 319);
    if ( !v75 )
      break;
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v30 = *((_QWORD *)this + 319);
    if ( !v30 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v58);
      v30 = *((_QWORD *)this + 319);
    }
    v31 = *(MONITOR_MGR **)(v30 + 96);
    if ( v31 )
    {
      v73 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v31, v23, 1u, &v73);
      LODWORD(v14) = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v44 = WdLogNewEntry5_WdDmmEvent(v20, v11);
        *(_QWORD *)(v44 + 24) = v23;
        *(_QWORD *)(v44 + 32) = this;
        WdLogEvent5_WdDmmEvent(v44);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v33 = v73;
          if ( !v73 || *((_DWORD *)v73 + 108) != 1 )
          {
            v61 = WdLogNewEntry5_WdAssertion(v20, v11);
            WdLogEvent5_WdAssertion(v61);
          }
          if ( !v33 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v20, v11);
            WdLogEvent5_WdAssertion(v62);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v33 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v33);
          v35 = (struct _ERESOURCE *)((char *)v33 + 296);
          v80 = IsVirtualModeSuportDisabled;
          v36 = IsVirtualModeSuportDisabled;
          ExReleaseResourceLite(v35);
          KeLeaveCriticalRegion();
          LODWORD(v14) = 0;
LABEL_35:
          if ( v36 )
          {
            v82 = 1;
            v81 = 1;
          }
          else
          {
            v82 = *(_BYTE *)(v75 + 234) == 0;
            v81 = *(_BYTE *)(v75 + 233) == 0;
          }
          goto LABEL_37;
        }
        if ( MonitorInstance != -1073741632 )
        {
          v36 = v80;
LABEL_34:
          if ( (int)v14 >= 0 )
            goto LABEL_35;
          goto LABEL_70;
        }
      }
      v36 = 0;
      v80 = 0;
      LODWORD(v14) = 0;
      goto LABEL_34;
    }
    v59 = WdLogNewEntry5_WdError(0LL, v27, v29);
    *(_QWORD *)(v59 + 24) = this;
    WdLogEvent5_WdError(v59);
    LODWORD(v14) = -1073741811;
LABEL_70:
    v60 = WdLogNewEntry5_WdAssertion(v20, v11);
    *(_QWORD *)(v60 + 24) = (int)v14;
    WdLogEvent5_WdAssertion(v60);
LABEL_37:
    if ( (int)v14 < 0 )
      goto LABEL_77;
    *(_QWORD *)a2 = *(_QWORD *)((char *)this + 276);
    *((_DWORD *)a2 + 2) = PathSourceFromTarget;
    *((_DWORD *)a2 + 3) = *(_DWORD *)(v17 + 24);
    *((_DWORD *)a2 + 4) = *(_DWORD *)(v17 + 80);
    *((_DWORD *)a2 + 5) = *(_DWORD *)(v17 + 84);
    *((_DWORD *)a2 + 6) = *(_DWORD *)(v17 + 96);
    *((_DWORD *)a2 + 7) = *(_DWORD *)(v17 + 124);
    *((_DWORD *)a2 + 8) = v67;
    *((_DWORD *)a2 + 9) = AdapterPreference;
    a2[40] = *(_BYTE *)(v17 + 405);
    PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference((__int64)this);
    v38 = v68;
    *((_DWORD *)a2 + 11) = PostAdapterPreference;
    LODWORD(v14) = 0;
    LOBYTE(v39) = 2;
    a2[41] = !v81;
    a2[48] = !v82;
    a2[49] = *(_BYTE *)(v17 + 412);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v78, (char *)v38 + 56, v39);
    v40 = PathSourceFromTarget;
    v41 = v68;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v68, v40, *(_DWORD *)(v17 + 24), 0LL) < 0 || *((_QWORD *)v41 + 5) )
    {
      v63 = WdLogNewEntry5_WdAssertion(v43, v42);
      WdLogEvent5_WdAssertion(v63);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v78);
    v6 = v76;
LABEL_10:
    v18 = *(_QWORD *)(v17 + 8);
    v17 = v18 - 8;
    if ( v18 == v15 + 24 )
      v17 = 0LL;
    if ( !v17 )
      goto LABEL_13;
  }
  v64 = WdLogNewEntry5_WdError(v25, v24, v26);
  *(_QWORD *)(v64 + 24) = 8960LL;
  WdLogEvent5_WdError(v64);
  LODWORD(v14) = -1073741811;
LABEL_77:
  v65 = (_QWORD *)WdLogNewEntry5_WdError(v20, v11, v13);
  v65[3] = *(unsigned int *)(v17 + 24);
  v65[4] = *((int *)this + 70);
  v65[5] = *((unsigned int *)this + 69);
  WdLogEvent5_WdError(v65);
LABEL_13:
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64), v11, v13);
LABEL_14:
  auto_rc<DMMVIDPN>::reset(&v70, 0LL);
  auto_rc<DMMVIDPN>::reset(&v71, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v77 + 40));
  return (unsigned int)v14;
}
