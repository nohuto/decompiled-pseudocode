/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0180660
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015C7D0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00058C0 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000E2C4 (-IsAddapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001B504 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C00227BC (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0054CEC (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D6920 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E6A64 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00EC42C (MonitorGetMonitorHandle.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00ED228 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C00ED2BC (MonitorGetNativeFlags.c)
 *     MonitorGetUsageClass @ 0x1C012981C (MonitorGetUsageClass.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C018091C (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C0277028 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // ebx
  int MonitorHandle; // eax
  struct _LUID *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  struct HDXGMONITOR__ *v21; // r14
  __int64 v22; // r8
  __int64 v23; // r11
  int NativeFlags; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32; // al
  unsigned __int8 v33; // cl
  char v34; // al
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r12
  int v40; // eax
  char v41; // cl
  bool v42; // al
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // r14
  _QWORD *v48; // rcx
  __int64 v49; // rax
  unsigned int PathSourceFromTarget; // r15d
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v55; // r8
  ADAPTER_DISPLAY *v56; // r14
  DXGADAPTER *v57; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _QWORD *v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  _QWORD *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // r14
  __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  struct DXGGLOBAL *Global; // rax
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r14
  __int64 v93; // rax
  int UsageClass; // eax
  __int64 v95; // rcx
  __int64 v96; // rax
  bool v97; // [rsp+30h] [rbp-30h] BYREF
  bool v98; // [rsp+31h] [rbp-2Fh] BYREF
  _BYTE v99[2]; // [rsp+32h] [rbp-2Eh] BYREF
  int v100; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v101; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v102; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v103; // [rsp+40h] [rbp-20h] BYREF
  struct HDXGMONITOR__ *v104; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v105[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v106; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v107; // [rsp+B0h] [rbp+50h] BYREF

  v107 = a3;
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(a1[5] + 16LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1[10] + 72LL));
  v8 = a1[10];
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, (unsigned int)v6);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v9, v12);
    v13 = a1[1];
    v14 = *((_QWORD *)TargetById + 14);
    v15 = *((_DWORD *)TargetById + 6);
    v103 = v14;
    v104 = 0LL;
    if ( !v13 )
    {
      v62 = WdLogNewEntry5_WdAssertion(0LL, v9);
      WdLogEvent5_WdAssertion(v62);
      v13 = a1[1];
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(v13 + 16), v15, 0, TargetById, &v104);
    v20 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v21 = v104;
      LODWORD(v20) = 0;
      if ( v104 )
      {
        v63 = WdLogNewEntry5_WdAssertion(v18, v17);
        WdLogEvent5_WdAssertion(v63);
      }
    }
    else if ( MonitorHandle < 0 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
      v66[3] = v6;
      v67 = a1[1];
      if ( !v67 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v65, v64);
        WdLogEvent5_WdAssertion(v68);
        v67 = a1[1];
      }
      v66[4] = *(_QWORD *)(v67 + 16);
      v66[5] = v20;
      WdLogEvent5_WdError(v66);
      v21 = 0LL;
      v104 = 0LL;
    }
    else
    {
      v21 = v104;
    }
    if ( v21 == (struct HDXGMONITOR__ *)v14 )
    {
      if ( a4 == 10 )
      {
        v99[0] = 0;
        UsageClass = MonitorGetUsageClass(v21, v105, v99);
        LODWORD(v20) = UsageClass;
        if ( UsageClass < 0 )
        {
          LODWORD(v20) = 0;
        }
        else
        {
          *((_DWORD *)TargetById + 22) = v105[0];
          *((_BYTE *)TargetById + 92) = v99[0];
        }
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v21);
      v23 = 0LL;
      *((_BYTE *)TargetById + 413) = 1;
      if ( v21 )
      {
        v106 = 0;
        v97 = 0;
        v98 = 0;
        NativeFlags = MonitorGetNativeFlags(v21, &v106, &v97, &v98);
        v28 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
          v71[3] = v6;
          v72 = a1[1];
          if ( !v72 )
          {
            v73 = WdLogNewEntry5_WdAssertion(v70, v69);
            WdLogEvent5_WdAssertion(v73);
            v72 = a1[1];
          }
          v71[4] = *(_QWORD *)(v72 + 16);
          v71[5] = v28;
          WdLogEvent5_WdError(v71);
        }
        v29 = a1[1];
        if ( !v29 )
        {
          v74 = WdLogNewEntry5_WdAssertion(v26, v25);
          WdLogEvent5_WdAssertion(v74);
          v29 = a1[1];
        }
        v30 = *(_QWORD *)(v29 + 16);
        v31 = *(_QWORD *)(v30 + 2552);
        if ( *(_BYTE *)(v31 + 233) && *(_BYTE *)(v31 + 234)
          || (v32 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
        {
          v32 = 1;
        }
        v33 = v106;
        *((_BYTE *)TargetById + 405) = v106;
        if ( v32 || !v33 || (v34 = 1, !v97) )
          v34 = 0;
        *((_BYTE *)TargetById + 406) = v34;
        v100 = 0;
        LOBYTE(v107) = 0;
        v35 = MonitorGetUsageClass(v21, &v100, &v107);
        v39 = v35;
        if ( v35 < 0 )
        {
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
          v77[3] = v6;
          v78 = a1[1];
          if ( !v78 )
          {
            v79 = WdLogNewEntry5_WdAssertion(v76, v75);
            WdLogEvent5_WdAssertion(v79);
            v78 = a1[1];
          }
          v77[4] = *(_QWORD *)(v78 + 16);
          v77[5] = v39;
          WdLogEvent5_WdError(v77);
          v40 = 0;
          v100 = 0;
          v41 = 0;
          LOBYTE(v107) = 0;
        }
        else
        {
          v40 = v100;
          v41 = v107;
        }
        *((_DWORD *)TargetById + 22) = v40;
        v42 = v98;
        *((_BYTE *)TargetById + 92) = v41;
        *((_BYTE *)TargetById + 412) = v42;
        v101 = 0;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v21, &v101);
        v23 = 0LL;
        v20 = IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable < 0 )
        {
          v82 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44, v22);
          v82[3] = v6;
          v83 = a1[1];
          if ( !v83 )
          {
            v84 = WdLogNewEntry5_WdAssertion(v81, v80);
            WdLogEvent5_WdAssertion(v84);
            v83 = a1[1];
          }
          v82[4] = *(_QWORD *)(v83 + 16);
          v82[5] = v20;
          WdLogEvent5_WdError(v82);
          v23 = 0LL;
          v46 = 0;
          LODWORD(v20) = 0;
          v101 = 0;
        }
        else
        {
          v46 = v101;
        }
        v14 = v103;
        *((_BYTE *)TargetById + 418) = v46 & 1;
      }
      else
      {
        *(_WORD *)((char *)TargetById + 405) = 0;
        *((_DWORD *)TargetById + 22) = 0;
        *((_BYTE *)TargetById + 92) = 0;
        *((_BYTE *)TargetById + 412) = 1;
      }
      v47 = 0LL;
      v48 = (_QWORD *)a1[15];
      if ( v48 != a1 + 15 )
        v47 = (__int64)(v48 - 1);
      while ( v47 )
      {
        if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v47 + 96), v6) )
        {
          DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v47 + 96));
          v23 = 0LL;
        }
        v85 = *(_QWORD **)(v47 + 8);
        v47 = (__int64)(v85 - 1);
        if ( v85 == a1 + 15 )
          v47 = v23;
      }
      v49 = a1[11];
      PathSourceFromTarget = -1;
      v103 = v23;
      if ( v49 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v49 + 32));
        v51 = a1[11];
      }
      else
      {
        v51 = v23;
      }
      auto_rc<DMMVIDPN const>::reset(&v103, v51, v22);
      if ( v103 )
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v103 + 96),
                                 (unsigned int)v6);
      auto_rc<DMMVIDPN const>::reset(&v103, 0LL, v52);
      v56 = (ADAPTER_DISPLAY *)a1[1];
      if ( !v56 )
      {
        v86 = WdLogNewEntry5_WdAssertion(v54, v53);
        WdLogEvent5_WdAssertion(v86);
        v56 = (ADAPTER_DISPLAY *)a1[1];
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v56, v53, v55);
      if ( PathSourceFromTarget != -1 )
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((PERESOURCE **)v56, PathSourceFromTarget, 1);
      v57 = (DXGADAPTER *)*((_QWORD *)v56 + 2);
      if ( (*((_DWORD *)v57 + 77) & 0x100) != 0 && DXGADAPTER::IsAddapterSessionized(v57, v17, &v102, 0LL) )
      {
        Global = DXGGLOBAL::GetGlobal(v87, (__int64)v17);
        v89 = DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(*((DXGSESSIONMGR **)Global + 74), v102);
        v92 = v89;
        if ( v89 < 0 )
        {
          v93 = WdLogNewEntry5_WdError(v90, v17, v91);
          *(_QWORD *)(v93 + 24) = v102;
          *(_QWORD *)(v93 + 32) = v92;
          WdLogEvent5_WdError(v93);
        }
      }
    }
    if ( v14 )
    {
      v95 = a1[1];
      if ( !v95 )
      {
        v96 = WdLogNewEntry5_WdAssertion(0LL, v17);
        WdLogEvent5_WdAssertion(v96);
        v95 = a1[1];
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v95 + 16), v14, TargetById);
    }
    return (unsigned int)v20;
  }
  else
  {
    v59 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v59 + 24) = v6;
    *(_QWORD *)(v59 + 32) = a1;
    WdLogEvent5_WdError(v59);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v60, v61);
    return 3223192325LL;
  }
}
