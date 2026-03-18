/*
 * XREFs of ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00D9234
 * Callers:
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00D8130 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_ @ 0x1C014EE20 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_0_1.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003B2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003BD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0003C50 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C5C (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9754 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N1W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00DB2E4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z @ 0x1C00ED968 (-AddingMonitorOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W42@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0130CC0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPnPath(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DXGADAPTER *a2,
        struct DMMVIDPNPRESENTPATH *a3,
        char a4,
        bool a5)
{
  __int64 v7; // rcx
  unsigned __int16 v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  MONITOR_MGR *v26; // rcx
  int MonitorInstance; // eax
  int IsVirtualizationDisabledForTarget; // ebx
  struct DXGMONITOR *v29; // rdi
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v31; // rcx
  bool v32; // di
  bool v33; // al
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  unsigned int *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  DMMVIDPNSOURCEMODE *v47; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v48; // edx
  struct SESSION_VIEW *SessionViewOwner; // rax
  struct SESSION_VIEW *v50; // rdi
  const struct tagRECT *DwmClipBox; // r8
  int TargetLinkTrainingStatus; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // r8
  __int64 v65; // rax
  int v66; // [rsp+20h] [rbp-60h]
  int v67; // [rsp+28h] [rbp-58h]
  char v68; // [rsp+50h] [rbp-30h]
  __int64 v69; // [rsp+58h] [rbp-28h] BYREF
  struct DXGMONITOR *v70; // [rsp+60h] [rbp-20h] BYREF
  __int64 v71; // [rsp+68h] [rbp-18h] BYREF
  __int64 v72; // [rsp+70h] [rbp-10h] BYREF
  bool v73; // [rsp+C0h] [rbp+40h]
  bool v74; // [rsp+D0h] [rbp+50h]
  char v75; // [rsp+D8h] [rbp+58h]

  v75 = a4;
  v7 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v7 + 84) & 5) == 5 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v7, a2);
    WdLogEvent5_WdAssertion(v55);
    v7 = *(_QWORD *)this;
    a4 = v75;
  }
  v9 = 0;
  v10 = *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL);
  v11 = *(_DWORD *)(v7 + 84);
  if ( *(_DWORD *)(v10 + 88) )
  {
    if ( (v11 & 5) != 0 )
      goto LABEL_5;
    return 0LL;
  }
  if ( (v11 & 4) != 0 )
    return 0LL;
LABEL_5:
  if ( (v11 & 4) != 0 && !*(_QWORD *)(v10 + 544) )
    return 0LL;
  if ( a4 && !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(a3) )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v12);
    v56[3] = *((int *)a2 + 70);
    v56[4] = *((unsigned int *)a2 + 69);
    v56[5] = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
    v56[6] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
    v56[7] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    WdLogEvent5_WdAssertion(v56);
    return 0LL;
  }
  ++*((_WORD *)this + 4);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    IsVirtualizationDisabledForTarget = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)((char *)a2 + 276),
                                          *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL),
                                          0LL,
                                          0LL,
                                          0LL);
    goto LABEL_28;
  }
  if ( !a2 || (v17 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL), (_DWORD)v17 == -1) )
  {
    IsVirtualizationDisabledForTarget = -1073741811;
    goto LABEL_28;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v21 = *((_QWORD *)a2 + 319);
  if ( !v21 )
  {
    v57 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v57 + 24) = 8960LL;
    WdLogEvent5_WdError(v57);
    IsVirtualizationDisabledForTarget = -1073741811;
    goto LABEL_55;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a2);
  v25 = *((_QWORD *)a2 + 319);
  if ( !v25 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v23, v22);
    WdLogEvent5_WdAssertion(v59);
    v25 = *((_QWORD *)a2 + 319);
  }
  v26 = *(MONITOR_MGR **)(v25 + 96);
  if ( !v26 )
  {
    v60 = WdLogNewEntry5_WdError(0LL, v22, v24);
    *(_QWORD *)(v60 + 24) = a2;
    WdLogEvent5_WdError(v60);
    IsVirtualizationDisabledForTarget = -1073741811;
    goto LABEL_57;
  }
  v70 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v26, v17, 1u, &v70);
  IsVirtualizationDisabledForTarget = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v54 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v54 + 24) = v17;
    *(_QWORD *)(v54 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v54);
LABEL_23:
    v32 = 0;
    IsVirtualizationDisabledForTarget = 0;
    goto LABEL_24;
  }
  if ( MonitorInstance >= 0 )
  {
    v29 = v70;
    if ( !v70 || *((_DWORD *)v70 + 108) != 1 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v62);
    }
    if ( !v29 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v15, v14);
      WdLogEvent5_WdAssertion(v63);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 296), 1u);
    IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v29);
    v31 = (struct _ERESOURCE *)((char *)v29 + 296);
    v32 = IsVirtualModeSuportDisabled;
    ExReleaseResourceLite(v31);
    KeLeaveCriticalRegion();
    IsVirtualizationDisabledForTarget = 0;
    goto LABEL_25;
  }
  if ( MonitorInstance == -1073741632 )
    goto LABEL_23;
  v32 = v73;
LABEL_24:
  if ( IsVirtualizationDisabledForTarget < 0 )
  {
LABEL_57:
    v61 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v61 + 24) = IsVirtualizationDisabledForTarget;
    WdLogEvent5_WdAssertion(v61);
    goto LABEL_28;
  }
LABEL_25:
  if ( v32 )
  {
    v33 = 1;
    LOBYTE(v15) = 1;
  }
  else
  {
    v33 = *(_BYTE *)(v21 + 234) == 0;
    LOBYTE(v15) = *(_BYTE *)(v21 + 233) == 0;
  }
  v68 = v15;
  v74 = v33;
LABEL_28:
  if ( IsVirtualizationDisabledForTarget >= 0 )
  {
    v34 = *((_QWORD *)a3 + 12);
    v69 = 0LL;
    LOBYTE(v67) = !v74;
    LOBYTE(v66) = v68 == 0;
    if ( (unsigned int)CCD_TOPOLOGY::AddPathDescriptor(
                         *(_QWORD *)this,
                         (char *)a2 + 276,
                         *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL),
                         *(unsigned int *)(v34 + 24),
                         v66,
                         v67,
                         *(_DWORD *)(*(_QWORD *)(v34 + 96) + 80LL),
                         *(_DWORD *)(*(_QWORD *)(v34 + 96) + 84LL),
                         *(_DWORD *)(*(_QWORD *)(v34 + 96) + 88LL),
                         &v69) == -1073741789 )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
      v64[3] = this;
      v64[4] = *(_QWORD *)this;
      v64[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v65 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      if ( v65 )
        v9 = *(_WORD *)(v65 + 22);
      v64[6] = v9;
      v64[7] = *((unsigned __int16 *)this + 4);
      WdLogEvent5_WdWarning(v64);
    }
    else
    {
      v38 = v69;
      *(_DWORD *)(v69 + 252) = *((unsigned __int16 *)a3 + 54);
      *(_DWORD *)(v38 + 88) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 80LL);
      *(_DWORD *)(v38 + 92) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL) + 84LL);
      *(_QWORD *)v38 |= 0x800000000000uLL;
      if ( v75 )
      {
        v39 = (unsigned int *)(v38 + 24);
        *(_QWORD *)v38 |= 0x8000000000000000uLL;
        *(_QWORD *)v38 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceActive(
                                       *((ADAPTER_DISPLAY **)a2 + 319),
                                       *(_DWORD *)(v38 + 24)) != 0) & 0x20000000000LL;
        *(_QWORD *)v38 |= -(__int64)(ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                       *((ADAPTER_DISPLAY **)a2 + 319),
                                       *(_DWORD *)(v38 + 24)) != 0) & 0x80000000000LL;
        v40 = *((_QWORD *)a3 + 12);
        v41 = *(_QWORD *)(v40 + 104);
        if ( v41 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v41 + 96));
          v42 = *(_QWORD *)(v40 + 104);
          v38 = v69;
        }
        else
        {
          v42 = 0LL;
        }
        v72 = v42;
        v43 = *(_QWORD *)(v42 + 144);
        if ( v43 )
        {
          *(_OWORD *)(v38 + 32) = *(_OWORD *)(v43 + 72);
          *(_OWORD *)(v38 + 48) = *(_OWORD *)(v43 + 88);
          *(_OWORD *)(v38 + 64) = *(_OWORD *)(v43 + 104);
          *(_QWORD *)(v38 + 80) = *(_QWORD *)(v43 + 120);
          *(_QWORD *)v38 |= 0x87uLL;
          *(_DWORD *)(v38 + 204) = *(_DWORD *)(v43 + 132);
          *(_DWORD *)(v38 + 208) = *(_DWORD *)(v43 + 136);
          *(_QWORD *)v38 |= 8uLL;
        }
        else
        {
          *(_DWORD *)(v38 + 204) = 0;
          *(_DWORD *)(v38 + 208) = 4;
        }
        v44 = *((_QWORD *)a3 + 11);
        v45 = *(_QWORD *)(v44 + 104);
        if ( v45 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v45 + 96));
          v46 = *(_QWORD *)(v44 + 104);
          v38 = v69;
        }
        else
        {
          v46 = 0LL;
        }
        v47 = *(DMMVIDPNSOURCEMODE **)(v46 + 144);
        v71 = v46;
        if ( v47 )
        {
          *(_BYTE *)(v38 + 128) = (unsigned int)(*((_DWORD *)v47 + 18) - 3) <= 1;
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v38 + 96) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v47);
          *(_QWORD *)v38 |= 0x100uLL;
          v48 = *((_DWORD *)a3 + 29);
          *(_DWORD *)(v38 + 132) = v48;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 24LL) & 2) != 0 )
            *(_DWORD *)(v38 + 132) = ADAPTER_DISPLAY::AddingMonitorOrientation(
                                       *((ADAPTER_DISPLAY **)a2 + 319),
                                       v48,
                                       *(_DWORD *)(*((_QWORD *)a3 + 12) + 24LL));
          *(_DWORD *)(v38 + 136) = *((_DWORD *)a3 + 28);
          *(_QWORD *)v38 |= 0x40000000200uLL;
          if ( a5 )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)a2 + 319), *v39);
            *(_QWORD *)(v38 + 256) = SessionViewOwner;
            v50 = SessionViewOwner;
            if ( SessionViewOwner )
            {
              DwmClipBox = ADAPTER_DISPLAY::GetDwmClipBox(*((DXGADAPTER ***)a2 + 319), *v39);
              *(_DWORD *)(v38 + 152) = *((_DWORD *)v50 + 8) - *((_DWORD *)v50 + 6);
              *(_DWORD *)(v38 + 156) = *((_DWORD *)v50 + 9) - *((_DWORD *)v50 + 7);
              *(_DWORD *)(v38 + 144) = *((_DWORD *)v50 + 6);
              *(_DWORD *)(v38 + 148) = *((_DWORD *)v50 + 7);
              *(struct tagRECT *)(v38 + 168) = *DwmClipBox;
              *(_QWORD *)v38 |= 0x820800uLL;
              *(_QWORD *)(v38 + 196) = *((_QWORD *)v50 + 8);
            }
            *(_DWORD *)(v38 + 216) = *(_DWORD *)(3968LL * *v39 + *(_QWORD *)(*((_QWORD *)a2 + 319) + 112LL) + 3756);
            *(_QWORD *)v38 |= 0x1000000000000uLL;
            TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                                         *(_QWORD *)(*((_QWORD *)a3 + 12) + 96LL),
                                         0LL);
            if ( TargetLinkTrainingStatus == 12 )
            {
              *(_DWORD *)(v38 + 192) = 259;
            }
            else if ( TargetLinkTrainingStatus == 13 )
            {
              *(_DWORD *)(v38 + 192) = -1073741437;
            }
          }
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v71, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v72, 0LL);
      }
    }
    return 0LL;
  }
LABEL_55:
  v58 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14, v16);
  v58[3] = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  v58[4] = *((int *)a2 + 70);
  v58[5] = *((unsigned int *)a2 + 69);
  WdLogEvent5_WdError(v58);
  return (unsigned int)IsVirtualizationDisabledForTarget;
}
