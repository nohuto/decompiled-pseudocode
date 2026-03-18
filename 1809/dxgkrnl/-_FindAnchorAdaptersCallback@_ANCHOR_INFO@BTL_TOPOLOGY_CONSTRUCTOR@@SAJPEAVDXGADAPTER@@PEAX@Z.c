/*
 * XREFs of ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C0814
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C00BD720 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_ANCHOR_INFO--_FindAnchorAdaptersCallback_.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00040D0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00BD810 (-_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_ADAPTER_PREFERENCE@12@AEBVD.c)
 *     ?_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA?AW4_POST_ADAPTER_PREFERENCE@12@AEBVDXGADAPTER@@@Z @ 0x1C00BD840 (-_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SA-AW4_POST_ADAPTER_PREFERENCE.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BD85C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00C0C70 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2760 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00E4FE0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00E5198 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C028CFB8 (-_GetVmtPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VMT_PREFERENCE@1@W4_DMM_VIDPN_MONITOR_TYPE@@.c)
 *     ?_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA?AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@E@Z @ 0x1C028CFFC (-_GetVotPreference@BTL_TOPOLOGY_CONSTRUCTOR@@CA-AW4_VOT_PREFERENCE@1@AEBVDXGADAPTER@@W4_D3DKMDT_.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(
        struct DXGADAPTER *this,
        _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  struct VIDPN_MGR *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  int ClientVidPn; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v16; // rcx
  unsigned int PathSourceFromTarget; // eax
  struct DMMVIDPNTOPOLOGY *v18; // rdi
  unsigned int v19; // r12d
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  MONITOR_MGR *v24; // rcx
  int MonitorInstance; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGMONITOR *v29; // r13
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v31; // rcx
  bool v32; // r13
  int PostAdapterPreference; // eax
  DMMVIDPNTOPOLOGY *v34; // rdx
  __int64 v35; // r8
  unsigned int v36; // edx
  DMMVIDPNTOPOLOGY *v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  int VmtPreference; // eax
  __int64 v43; // r9
  int v44; // edx
  bool v45; // sf
  bool v46; // of
  char v47; // al
  char v48; // al
  unsigned int v49; // eax
  int VotPreference; // eax
  __int64 v51; // r9
  int v52; // edi
  int v53; // eax
  int v54; // r10d
  int v55; // r11d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  bool v64; // [rsp+40h] [rbp-49h]
  unsigned int v65; // [rsp+44h] [rbp-45h] BYREF
  DMMVIDPNTOPOLOGY *v66; // [rsp+48h] [rbp-41h]
  int AdapterPreference; // [rsp+50h] [rbp-39h]
  __int64 v68; // [rsp+58h] [rbp-31h] BYREF
  __int64 v69; // [rsp+60h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *v70; // [rsp+68h] [rbp-21h]
  struct DXGMONITOR *v71; // [rsp+70h] [rbp-19h] BYREF
  _QWORD *v72; // [rsp+78h] [rbp-11h]
  __int64 v73; // [rsp+80h] [rbp-9h]
  struct VIDPN_MGR *v74; // [rsp+88h] [rbp-1h]
  __int64 v75; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v76[72]; // [rsp+98h] [rbp+Fh] BYREF
  bool v77; // [rsp+F8h] [rbp+6Fh]
  bool v78; // [rsp+F8h] [rbp+6Fh]
  bool v79; // [rsp+100h] [rbp+77h]
  bool v80; // [rsp+108h] [rbp+7Fh]

  AdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference((__int64)this);
  if ( AdapterPreference < *(_DWORD *)(v5 + 36) )
    return 0LL;
  v6 = *(struct VIDPN_MGR **)(*(_QWORD *)(v4 + 2520) + 88LL);
  v74 = v6;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v75, (__int64)v6);
  v7 = *((_QWORD *)this + 315);
  v69 = 0LL;
  v70 = 0LL;
  if ( *(_BYTE *)(v7 + 133) && (int)VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v6) >= 0 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v40);
    v70 = (DMMVIDPNTOPOLOGY *)96;
  }
  v68 = 0LL;
  ClientVidPn = VIDPN_MGR::CreateClientVidPn(v6);
  v11 = ClientVidPn;
  if ( ClientVidPn < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v41[3] = v11;
    v41[4] = this;
    v41[5] = *((int *)this + 70);
    v41[6] = *((unsigned int *)this + 69);
    v41[7] = a2;
    WdLogEvent5_WdError(v41);
    goto LABEL_13;
  }
  v66 = (DMMVIDPNTOPOLOGY *)(v68 + 96);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v6 + 10) + 72LL));
  v12 = (_QWORD *)*((_QWORD *)v6 + 10);
  v72 = v12;
  v13 = (_QWORD *)v12[3];
  if ( v13 == v12 + 3 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1)) == 0LL )
  {
LABEL_11:
    LODWORD(v11) = 0;
    goto LABEL_12;
  }
  v80 = v77;
  v78 = v64;
  while ( 1 )
  {
    if ( !DMMVIDEOPRESENTTARGET::IsMonitorConnected(NextTarget, (enum _DMM_VIDPN_MONITOR_TYPE *)&v65)
      || *((_DWORD *)NextTarget + 22) )
    {
      goto LABEL_10;
    }
    if ( a2[9] < (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetAdapterPreference((__int64)this) )
      goto LABEL_16;
    BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference(v65);
    VmtPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVmtPreference((unsigned int)a2[8]);
    v46 = __OFSUB__(v44, VmtPreference);
    v45 = v44 - VmtPreference < 0;
    if ( v44 != VmtPreference )
    {
LABEL_51:
      v48 = v45 ^ v46;
      goto LABEL_62;
    }
    v47 = *((_BYTE *)a2 + 49);
    if ( *((_BYTE *)NextTarget + 412) )
    {
      if ( !v47 )
        goto LABEL_10;
    }
    else if ( v47 )
    {
      goto LABEL_16;
    }
    if ( *a2 == *((_DWORD *)this + 69)
      && a2[1] == *((_DWORD *)this + 70)
      && (v49 = *((_DWORD *)NextTarget + 31), v16 = (unsigned int)a2[7], v49 != (_DWORD)v16) )
    {
      v48 = v49 < (unsigned int)v16;
    }
    else
    {
      LOBYTE(v43) = 1;
      VotPreference = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(
                        this,
                        *((unsigned int *)NextTarget + 21),
                        *((unsigned int *)NextTarget + 24),
                        v43);
      LOBYTE(v51) = 1;
      v52 = VotPreference;
      v53 = BTL_TOPOLOGY_CONSTRUCTOR::_GetVotPreference(this, (unsigned int)a2[5], (unsigned int)a2[6], v51);
      v46 = __OFSUB__(v52, v53);
      v45 = v52 - v53 < 0;
      if ( v52 != v53 )
        goto LABEL_51;
      if ( v54 == v55 && a2[1] == *((_DWORD *)this + 70) )
        goto LABEL_10;
      if ( (int)BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference((__int64)this) < a2[11] )
        goto LABEL_16;
      v48 = 0;
    }
LABEL_62:
    if ( !v48 )
      goto LABEL_10;
LABEL_16:
    if ( v70 )
    {
      PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v70, *((_DWORD *)NextTarget + 6));
      v18 = v66;
      v19 = PathSourceFromTarget;
      if ( PathSourceFromTarget != -1
        && (int)VIDPN_MGR::AddPathToVidPnTopology(
                  v6,
                  v66,
                  PathSourceFromTarget,
                  *((_DWORD *)NextTarget + 6),
                  (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                  0xFFFFu,
                  0,
                  D3DKMDT_MCC_IGNORE) >= 0 )
      {
        goto LABEL_19;
      }
    }
    else
    {
      v18 = v66;
    }
    v19 = 0;
    if ( *(_DWORD *)(*((_QWORD *)this + 315) + 80LL) )
    {
      do
      {
        if ( (int)VIDPN_MGR::AddPathToVidPnTopology(
                    v6,
                    v18,
                    v19,
                    *((_DWORD *)NextTarget + 6),
                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
                    0xFFFFu,
                    0,
                    D3DKMDT_MCC_IGNORE) >= 0 )
          break;
        ++v19;
      }
      while ( v19 < *(_DWORD *)(*((_QWORD *)this + 315) + 80LL) );
      v12 = v72;
    }
LABEL_19:
    v20 = *((unsigned int *)NextTarget + 6);
    if ( (_DWORD)v20 == -1 )
    {
      LODWORD(v11) = -1073741811;
      goto LABEL_33;
    }
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v73 = *((_QWORD *)this + 315);
    if ( !v73 )
      break;
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v23 = *((_QWORD *)this + 315);
    if ( !v23 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v22);
      WdLogEvent5_WdAssertion(v56);
      v23 = *((_QWORD *)this + 315);
    }
    v24 = *(MONITOR_MGR **)(v23 + 96);
    if ( v24 )
    {
      v71 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v24, v20, 1u, &v71);
      LODWORD(v11) = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v39 = WdLogNewEntry5_WdDmmEvent(v16, v26, v27, v28);
        *(_QWORD *)(v39 + 24) = v20;
        *(_QWORD *)(v39 + 32) = this;
        WdLogEvent5_WdDmmEvent(v39);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v29 = v71;
          if ( !v71 || *((_DWORD *)v71 + 108) != 1 )
          {
            v59 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v59);
          }
          if ( !v29 )
          {
            v60 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v60);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v29);
          v31 = (struct _ERESOURCE *)((char *)v29 + 296);
          v78 = IsVirtualModeSuportDisabled;
          v32 = IsVirtualModeSuportDisabled;
          ExReleaseResourceLite(v31);
          KeLeaveCriticalRegion();
          LODWORD(v11) = 0;
LABEL_31:
          if ( v32 )
          {
            v80 = 1;
            v79 = 1;
          }
          else
          {
            v80 = *(_BYTE *)(v73 + 133) == 0;
            v79 = *(_BYTE *)(v73 + 132) == 0;
          }
          goto LABEL_33;
        }
        if ( MonitorInstance != -1073741632 )
        {
          v32 = v78;
LABEL_39:
          if ( (int)v11 >= 0 )
            goto LABEL_31;
          goto LABEL_67;
        }
      }
      v32 = 0;
      v78 = 0;
      LODWORD(v11) = 0;
      goto LABEL_39;
    }
    v57 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v57 + 24) = this;
    WdLogEvent5_WdError(v57);
    LODWORD(v11) = -1073741811;
LABEL_67:
    v58 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v58 + 24) = (int)v11;
    WdLogEvent5_WdAssertion(v58);
LABEL_33:
    if ( (int)v11 < 0 )
      goto LABEL_75;
    *(_QWORD *)a2 = *(_QWORD *)((char *)this + 276);
    a2[2] = v19;
    a2[3] = *((_DWORD *)NextTarget + 6);
    a2[4] = *((_DWORD *)NextTarget + 20);
    a2[5] = *((_DWORD *)NextTarget + 21);
    a2[6] = *((_DWORD *)NextTarget + 24);
    a2[7] = *((_DWORD *)NextTarget + 31);
    a2[8] = v65;
    a2[9] = AdapterPreference;
    *((_BYTE *)a2 + 40) = *((_BYTE *)NextTarget + 405);
    PostAdapterPreference = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_GetPostAdapterPreference((__int64)this);
    v34 = v66;
    LOBYTE(v35) = 2;
    a2[11] = PostAdapterPreference;
    *((_BYTE *)a2 + 41) = !v79;
    *((_BYTE *)a2 + 48) = !v80;
    *((_BYTE *)a2 + 49) = *((_BYTE *)NextTarget + 412);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v76, (char *)v34 + 56, v35);
    v36 = v19;
    v37 = v66;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v66, v36, *((_DWORD *)NextTarget + 6), 0LL) < 0 || *((_QWORD *)v37 + 5) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v38);
      WdLogEvent5_WdAssertion(v61);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v76);
    v6 = v74;
LABEL_10:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, NextTarget);
    if ( !NextTarget )
      goto LABEL_11;
  }
  v62 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v62 + 24) = 8248LL;
  WdLogEvent5_WdError(v62);
  LODWORD(v11) = -1073741811;
LABEL_75:
  v63 = (_QWORD *)WdLogNewEntry5_WdError(v16);
  v63[3] = *((unsigned int *)NextTarget + 6);
  v63[4] = *((int *)this + 70);
  v63[5] = *((unsigned int *)this + 69);
  WdLogEvent5_WdError(v63);
LABEL_12:
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
LABEL_13:
  auto_rc<DMMVIDPN>::reset(&v68, 0LL);
  auto_rc<DMMVIDPN>::reset(&v69, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v75 + 40));
  return (unsigned int)v11;
}
