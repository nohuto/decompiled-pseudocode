/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B6C20 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0001FF0 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0002060 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0003814 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C004DA50 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00B78C0 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00C3A54 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00C3AE8 (MonitorGetMonitorHandle.c)
 *     MonitorGetNativeFlags @ 0x1C00C44D4 (MonitorGetNativeFlags.c)
 *     MonitorGetUsageClass @ 0x1C00CE230 (MonitorGetUsageClass.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00D9938 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(_QWORD *a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned int v13; // ebx
  int MonitorHandle; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct HDXGMONITOR__ *v17; // r14
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v18; // r8
  int NativeFlags; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  char v25; // al
  char v26; // cl
  char v27; // al
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r12
  int v31; // eax
  char v32; // cl
  char v33; // al
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v35; // rcx
  char v36; // al
  unsigned int v37; // edx
  _QWORD *v38; // r14
  _QWORD *v39; // rcx
  ADAPTER_DISPLAY *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int PathSourceFromTarget; // r14d
  DXGADAPTER **v44; // rcx
  __int64 v45; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // r14
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int UsageClass; // eax
  __int64 v71; // rax
  char v72; // [rsp+30h] [rbp-20h] BYREF
  char v73; // [rsp+31h] [rbp-1Fh] BYREF
  char v74[2]; // [rsp+32h] [rbp-1Eh] BYREF
  int v75; // [rsp+34h] [rbp-1Ch] BYREF
  int v76; // [rsp+38h] [rbp-18h]
  int v77; // [rsp+3Ch] [rbp-14h] BYREF
  struct HDXGMONITOR__ *v78; // [rsp+40h] [rbp-10h] BYREF
  __int64 v79; // [rsp+48h] [rbp-8h] BYREF
  char v80; // [rsp+90h] [rbp+40h] BYREF
  __int64 v81; // [rsp+A0h] [rbp+50h] BYREF

  v81 = a3;
  v6 = a2;
  if ( *(struct _KTHREAD **)(a1[5] + 8LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1[10] + 72LL));
  v8 = a1[10];
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v6);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    v11 = a1[1];
    v12 = *((_QWORD *)TargetById + 14);
    v13 = *((_DWORD *)TargetById + 6);
    v79 = v12;
    v78 = 0LL;
    if ( !v11 )
    {
      v48 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v48);
      v11 = a1[1];
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(v11 + 16), v13, 0, TargetById, (__int64)&v78);
    v16 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v17 = v78;
      if ( v78 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v49);
      }
      LODWORD(v16) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v51[3] = v6;
      v52 = a1[1];
      if ( !v52 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v50);
        WdLogEvent5_WdAssertion(v53);
        v52 = a1[1];
      }
      v51[4] = *(_QWORD *)(v52 + 16);
      v51[5] = v16;
      WdLogEvent5_WdError(v51);
      v17 = 0LL;
      v78 = 0LL;
    }
    else
    {
      v17 = v78;
    }
    if ( v17 == (struct HDXGMONITOR__ *)v12 )
    {
      if ( a4 == 10 )
      {
        v74[0] = 0;
        UsageClass = MonitorGetUsageClass(v17, &v77, v74);
        LODWORD(v16) = UsageClass;
        if ( UsageClass < 0 )
        {
          LODWORD(v16) = 0;
        }
        else
        {
          *((_DWORD *)TargetById + 22) = v77;
          *((_BYTE *)TargetById + 92) = v74[0];
        }
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v17);
      *((_BYTE *)TargetById + 413) = 1;
      if ( v17 )
      {
        v80 = 0;
        v72 = 0;
        v73 = 0;
        NativeFlags = MonitorGetNativeFlags(v17, &v80, &v72, &v73);
        v21 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v55[3] = v6;
          v56 = a1[1];
          if ( !v56 )
          {
            v57 = WdLogNewEntry5_WdAssertion(v54);
            WdLogEvent5_WdAssertion(v57);
            v56 = a1[1];
          }
          v55[4] = *(_QWORD *)(v56 + 16);
          v55[5] = v21;
          WdLogEvent5_WdError(v55);
        }
        v22 = a1[1];
        if ( !v22 )
        {
          v58 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v58);
          v22 = a1[1];
        }
        v23 = *(_QWORD *)(v22 + 16);
        v24 = *(_QWORD *)(v23 + 2520);
        if ( *(_BYTE *)(v24 + 132) && *(_BYTE *)(v24 + 133)
          || (v25 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
        {
          v25 = 1;
        }
        v26 = v80;
        *((_BYTE *)TargetById + 405) = v80;
        if ( v25 || !v26 || (v27 = 1, !v72) )
          v27 = 0;
        *((_BYTE *)TargetById + 406) = v27;
        v75 = 0;
        LOBYTE(v81) = 0;
        v28 = MonitorGetUsageClass(v17, &v75, &v81);
        v30 = v28;
        if ( v28 < 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdError(v29);
          v60[3] = v6;
          v61 = a1[1];
          if ( !v61 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v59);
            WdLogEvent5_WdAssertion(v62);
            v61 = a1[1];
          }
          v60[4] = *(_QWORD *)(v61 + 16);
          v60[5] = v30;
          WdLogEvent5_WdError(v60);
          v31 = 0;
          v32 = 0;
          v75 = 0;
          LOBYTE(v81) = 0;
        }
        else
        {
          v31 = v75;
          v32 = v81;
        }
        *((_DWORD *)TargetById + 22) = v31;
        v33 = v73;
        *((_BYTE *)TargetById + 92) = v32;
        *((_BYTE *)TargetById + 412) = v33;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v17);
        v16 = IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable < 0 )
        {
          v64 = (_QWORD *)WdLogNewEntry5_WdError(v35);
          v64[3] = v6;
          v65 = a1[1];
          if ( !v65 )
          {
            v66 = WdLogNewEntry5_WdAssertion(v63);
            WdLogEvent5_WdAssertion(v66);
            v65 = a1[1];
          }
          v64[4] = *(_QWORD *)(v65 + 16);
          v64[5] = v16;
          WdLogEvent5_WdError(v64);
          v36 = 0;
          LODWORD(v16) = 0;
          v76 = 0;
        }
        else
        {
          v36 = v76;
        }
        v12 = v79;
        *((_BYTE *)TargetById + 418) = v36 & 1;
      }
      else
      {
        *(_WORD *)((char *)TargetById + 405) = 0;
        *((_DWORD *)TargetById + 22) = 0;
        *((_BYTE *)TargetById + 92) = 0;
        *((_BYTE *)TargetById + 412) = 1;
      }
      v37 = (_DWORD)a1 + 120;
      v38 = 0LL;
      v39 = (_QWORD *)a1[15];
      if ( v39 != a1 + 15 )
        v38 = v39 - 1;
      if ( v38 )
      {
        do
        {
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v38 + 12), v6) )
            DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v38 + 12));
          v67 = (_QWORD *)v38[1];
          v38 = v67 - 1;
          if ( v67 == a1 + 15 )
            v38 = 0LL;
        }
        while ( v38 );
        v12 = v79;
      }
      v40 = (ADAPTER_DISPLAY *)a1[1];
      if ( !v40 )
      {
        v68 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v68);
        v40 = (ADAPTER_DISPLAY *)a1[1];
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v40, v37, v18);
      v41 = a1[11];
      v79 = 0LL;
      if ( v41 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v41 + 32));
        v42 = a1[11];
      }
      else
      {
        v42 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v79, v42);
      if ( v79 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v79 + 96), v6);
        if ( PathSourceFromTarget != -1 )
        {
          v44 = (DXGADAPTER **)a1[1];
          if ( !v44 )
          {
            v69 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v69);
            v44 = (DXGADAPTER **)a1[1];
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(v44, PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v79, 0LL);
    }
    if ( v12 )
    {
      v45 = a1[1];
      if ( !v45 )
      {
        v71 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v71);
        v45 = a1[1];
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v45 + 16));
    }
    return (unsigned int)v16;
  }
  else
  {
    v47 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v47 + 24) = v6;
    *(_QWORD *)(v47 + 32) = a1;
    WdLogEvent5_WdError(v47);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    return 3223192325LL;
  }
}
