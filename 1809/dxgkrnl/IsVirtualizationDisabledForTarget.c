/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C00C2428
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00C2320 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(DXGADAPTER *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rax
  MONITOR_MGR *v12; // rcx
  bool v13; // si
  int MonitorInstance; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  struct DXGMONITOR *v20; // rdi
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v22; // rcx
  char v23; // di
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGMONITOR *v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( this && a2 != -1 && a3 && a4 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v9 = *((_QWORD *)this + 315);
    if ( v9 )
    {
      DXGADAPTER::IsCoreResourceSharedOwner(this);
      v11 = *((_QWORD *)this + 315);
      if ( !v11 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v27);
        v11 = *((_QWORD *)this + 315);
      }
      v12 = *(MONITOR_MGR **)(v11 + 96);
      if ( !v12 )
      {
        v28 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v28 + 24) = this;
        WdLogEvent5_WdError(v28);
        v19 = -1073741811;
        goto LABEL_28;
      }
      v32 = 0LL;
      v13 = 1;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v12, v4, 1u, &v32);
      v19 = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v25 = WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
        *(_QWORD *)(v25 + 24) = v4;
        *(_QWORD *)(v25 + 32) = this;
        WdLogEvent5_WdDmmEvent(v25);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v20 = v32;
          if ( !v32 || *((_DWORD *)v32 + 108) != 1 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v30);
          }
          if ( !v20 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v16);
            WdLogEvent5_WdAssertion(v31);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v20);
          v22 = (struct _ERESOURCE *)((char *)v20 + 296);
          v23 = IsVirtualModeSuportDisabled;
          ExReleaseResourceLite(v22);
          KeLeaveCriticalRegion();
          v19 = 0;
          goto LABEL_16;
        }
        if ( MonitorInstance != -1073741632 )
        {
          v23 = (char)v32;
LABEL_22:
          if ( v19 >= 0 )
          {
LABEL_16:
            if ( v23 )
            {
              *a3 = 1;
            }
            else
            {
              *a3 = *(_BYTE *)(v9 + 132) == 0;
              v13 = *(_BYTE *)(v9 + 133) == 0;
            }
            *a4 = v13;
            return (unsigned int)v19;
          }
LABEL_28:
          v29 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v29 + 24) = v19;
          WdLogEvent5_WdAssertion(v29);
          return (unsigned int)v19;
        }
      }
      v23 = 0;
      v19 = 0;
      goto LABEL_22;
    }
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = 8248LL;
    WdLogEvent5_WdError(v26);
  }
  return 3221225485LL;
}
