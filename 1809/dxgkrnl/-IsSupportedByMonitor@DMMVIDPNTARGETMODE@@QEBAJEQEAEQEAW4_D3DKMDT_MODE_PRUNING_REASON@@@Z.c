/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C3F18
 * Callers:
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C3E00 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00C5CC0 (BmlIsSupportedByMonitorTargetMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C40F4 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  struct HDXGMONITOR__ *v9; // rax
  unsigned __int8 v10; // r14
  __int64 v11; // rsi
  int MonitorFromHandle; // ebx
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 v24; // bl
  unsigned __int8 *v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  int IsSupportedModeInternal; // eax
  _QWORD *v47; // rax
  int v48; // [rsp+30h] [rbp-28h] BYREF
  int v49; // [rsp+34h] [rbp-24h] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-20h]
  struct HDXGMONITOR__ *v51; // [rsp+40h] [rbp-18h]
  struct DXGMONITOR *v52; // [rsp+A0h] [rbp+48h] BYREF
  char v53; // [rsp+A8h] [rbp+50h]
  unsigned __int8 *v54; // [rsp+B0h] [rbp+58h]
  int v55; // [rsp+B8h] [rbp+60h] BYREF

  v54 = a3;
  v53 = a2;
  if ( !a3 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !a4 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v28);
  }
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  *a3 = 0;
  v7 = *((_QWORD *)this + 5);
  if ( !v7 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v29);
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
    {
      v30 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v30 + 24) = this;
LABEL_32:
      WdLogEvent5_WdError(v30);
      return 3223192337LL;
    }
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( !v8 )
  {
    v30 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v30 + 24) = v7;
    goto LABEL_32;
  }
  v9 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(v8 + 96) + 112LL);
  v51 = v9;
  if ( !v9 )
  {
    v31 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v31 + 24) = *(unsigned int *)(v8 + 24);
    *(_QWORD *)(v31 + 32) = this;
    WdLogEvent5_WdWarning(v31);
    return 3223192376LL;
  }
  v10 = 0;
  LODWORD(v11) = 0;
  if ( this != (DMMVIDPNTARGETMODE *)-72LL )
  {
    v52 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v9, &v52);
    if ( MonitorFromHandle < 0 )
      goto LABEL_25;
    v13 = v52;
    if ( !v52 )
    {
      v32 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v32);
    }
    Resource = (PERESOURCE)((char *)v13 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 296), 1u);
    v17 = *((unsigned int *)v13 + 12);
    v10 = 0;
    v55 = 0;
    LOBYTE(v52) = 0;
    if ( ((unsigned int)(v17 - 1) <= 2 || (_DWORD)v17 == 14) && (*((_DWORD *)v13 + 10) & 8) != 0 )
    {
      v33 = WdLogNewEntry5_WdDmmEvent(v17, v14, v15, v16);
      *(_QWORD *)(v33 + 24) = v13;
      WdLogEvent5_WdDmmEvent(v33);
      LODWORD(v11) = 1;
      v10 = 1;
    }
    else
    {
      v18 = *((unsigned int *)v13 + 30);
      if ( (unsigned int)(v18 - 1) <= 1 )
      {
        LOBYTE(v16) = v53;
        IsSupportedModeInternal = DXGMONITOR::_IsSupportedModeInternal(v13, (char *)this + 72, v18, v16, &v52, &v55);
        v10 = (unsigned __int8)v52;
        MonitorFromHandle = IsSupportedModeInternal;
        LODWORD(v11) = v55;
        goto LABEL_24;
      }
      if ( (_DWORD)v18 != 3 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v17);
        WdLogEvent5_WdAssertion(v34);
      }
      LOBYTE(v16) = v53;
      MonitorFromHandle = DXGMONITOR::_IsSupportedModeInternal(v13, (char *)this + 72, 2LL, v16, &v52, &v48);
      if ( MonitorFromHandle < 0 )
        goto LABEL_24;
      LOBYTE(v19) = v53;
      MonitorFromHandle = DXGMONITOR::_IsSupportedModeInternal(v13, (char *)this + 72, 1LL, v19, &v55, &v49);
      if ( MonitorFromHandle < 0 )
        goto LABEL_24;
      v10 = (unsigned __int8)v52;
      v24 = v55;
      v11 = v49;
      if ( (_BYTE)v52 != (_BYTE)v55 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
        v35[4] = v10;
        v35[5] = v48;
        v35[6] = v24;
        v35[3] = v13;
        v35[7] = v11;
        WdLogEvent5_WdDmmEvent(v35);
        v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37, v36, v38, v39);
        v40[3] = *((unsigned int *)this + 21);
        v40[4] = *((unsigned int *)this + 22);
        v40[5] = *((unsigned int *)this + 23);
        v40[6] = *((unsigned int *)this + 24);
        v40[7] = (int)(*((_DWORD *)this + 30) << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v40);
        v45 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42, v41, v43, v44);
        v45[3] = *((unsigned int *)this + 25);
        v45[4] = *((unsigned int *)this + 26);
        v45[5] = *((_QWORD *)this + 14);
        WdLogEvent5_WdDmmEvent(v45);
      }
      if ( !v24 && !v10 || (v10 = 1, !v24) )
        LODWORD(v11) = v48;
    }
    MonitorFromHandle = 0;
LABEL_24:
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  MonitorFromHandle = -1073741811;
LABEL_25:
  if ( MonitorFromHandle < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v47[4] = v51;
    v47[5] = MonitorFromHandle;
    v47[3] = this;
    WdLogEvent5_WdError(v47);
    return (unsigned int)MonitorFromHandle;
  }
  else
  {
    v25 = v54;
    *a4 = v11;
    *v25 = v10;
    return 0LL;
  }
}
