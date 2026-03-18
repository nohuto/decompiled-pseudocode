/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E7098
 * Callers:
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00DB074 (BmlIsSupportedByMonitorTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0176880 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E727C (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  enum _D3DKMDT_MODE_PRUNING_REASON *v4; // r13
  __int64 v7; // rbx
  __int64 v8; // rdi
  struct HDXGMONITOR__ *v9; // rax
  char v10; // r12
  __int64 v11; // r14
  int MonitorFromHandle; // ebx
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 v21; // r13
  unsigned __int8 v22; // bl
  _BYTE *v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int IsSupportedModeInternal; // eax
  _QWORD *v41; // rax
  char v42[4]; // [rsp+30h] [rbp-28h] BYREF
  int v43; // [rsp+34h] [rbp-24h] BYREF
  struct DXGMONITOR *v44; // [rsp+38h] [rbp-20h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-18h]
  struct HDXGMONITOR__ *v46; // [rsp+48h] [rbp-10h]
  char v47; // [rsp+A0h] [rbp+48h] BYREF
  char v48; // [rsp+A8h] [rbp+50h]
  unsigned __int8 *v49; // [rsp+B0h] [rbp+58h]
  enum _D3DKMDT_MODE_PRUNING_REASON *v50; // [rsp+B8h] [rbp+60h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  v4 = a4;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !v4 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v26);
  }
  *v4 = D3DKMDT_MPR_UNINITIALIZED;
  *a3 = 0;
  v7 = *((_QWORD *)this + 5);
  if ( !v7 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v27);
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
    {
      v28 = WdLogNewEntry5_WdError(this, a2, a3);
      *(_QWORD *)(v28 + 24) = this;
LABEL_32:
      WdLogEvent5_WdError(v28);
      return 3223192337LL;
    }
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( !v8 )
  {
    v28 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v28 + 24) = v7;
    goto LABEL_32;
  }
  v9 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(v8 + 96) + 112LL);
  v46 = v9;
  if ( v9 )
  {
    v10 = 0;
    LODWORD(v11) = 0;
    v47 = 0;
    v43 = 0;
    if ( this == (DMMVIDPNTARGETMODE *)-72LL )
    {
      MonitorFromHandle = -1073741811;
    }
    else
    {
      v44 = 0LL;
      MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v9, &v44);
      if ( MonitorFromHandle >= 0 )
      {
        v13 = v44;
        if ( !v44 )
        {
          v30 = WdLogNewEntry5_WdAssertion(this, a2);
          WdLogEvent5_WdAssertion(v30);
        }
        Resource = (PERESOURCE)((char *)v13 + 296);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 296), 1u);
        v16 = *((unsigned int *)v13 + 12);
        if ( ((unsigned int)(v16 - 1) <= 2 || (_DWORD)v16 == 14) && (*((_DWORD *)v13 + 10) & 8) != 0 )
        {
          v31 = WdLogNewEntry5_WdDmmEvent(v16, v14);
          *(_QWORD *)(v31 + 24) = v13;
          WdLogEvent5_WdDmmEvent(v31);
          LODWORD(v11) = 1;
          MonitorFromHandle = 0;
          v10 = 1;
        }
        else
        {
          v17 = *((unsigned int *)v13 + 30);
          if ( (unsigned int)(v17 - 1) <= 1 )
          {
            LOBYTE(v15) = v48;
            IsSupportedModeInternal = DXGMONITOR::_IsSupportedModeInternal(v13, (char *)this + 72, v17, v15, &v47, &v43);
            v10 = v47;
            MonitorFromHandle = IsSupportedModeInternal;
            LODWORD(v11) = v43;
          }
          else
          {
            if ( (_DWORD)v17 != 3 )
            {
              v32 = WdLogNewEntry5_WdAssertion(v16, v14);
              WdLogEvent5_WdAssertion(v32);
            }
            LOBYTE(v15) = v48;
            MonitorFromHandle = DXGMONITOR::_IsSupportedModeInternal(v13, (char *)this + 72, 2LL, v15, &v47, &v43);
            if ( MonitorFromHandle >= 0 )
            {
              LOBYTE(v18) = v48;
              MonitorFromHandle = DXGMONITOR::_IsSupportedModeInternal(v13, (char *)this + 72, 1LL, v18, v42, &v44);
              if ( MonitorFromHandle >= 0 )
              {
                v21 = v47;
                v22 = v42[0];
                v11 = (int)v44;
                if ( v47 != v42[0] )
                {
                  v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20, v19);
                  v33[4] = v21;
                  v33[5] = v43;
                  v33[6] = v22;
                  v33[3] = v13;
                  v33[7] = v11;
                  WdLogEvent5_WdDmmEvent(v33);
                  v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v34);
                  v36[3] = *((unsigned int *)this + 21);
                  v36[4] = *((unsigned int *)this + 22);
                  v36[5] = *((unsigned int *)this + 23);
                  v36[6] = *((unsigned int *)this + 24);
                  v36[7] = (int)(*((_DWORD *)this + 30) << 29) >> 29;
                  WdLogEvent5_WdDmmEvent(v36);
                  v39 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v38, v37);
                  v39[3] = *((unsigned int *)this + 25);
                  v39[4] = *((unsigned int *)this + 26);
                  v39[5] = *((_QWORD *)this + 14);
                  WdLogEvent5_WdDmmEvent(v39);
                }
                if ( !v22 && !v21 || (v10 = 1, !v22) )
                  LODWORD(v11) = v43;
                v4 = v50;
                MonitorFromHandle = 0;
              }
            }
          }
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
      }
    }
    if ( MonitorFromHandle < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(this, a2, a3);
      v41[4] = v46;
      v41[5] = MonitorFromHandle;
      v41[3] = this;
      WdLogEvent5_WdError(v41);
      return (unsigned int)MonitorFromHandle;
    }
    else
    {
      v23 = v49;
      *v4 = v11;
      *v23 = v10;
      return 0LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v29 + 24) = *(unsigned int *)(v8 + 24);
    *(_QWORD *)(v29 + 32) = this;
    WdLogEvent5_WdWarning(v29);
    return 3223192376LL;
  }
}
