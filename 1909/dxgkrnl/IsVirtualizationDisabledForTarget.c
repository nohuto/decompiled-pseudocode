/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1C00F5A10
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0130CC0 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0142E58 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(DXGADAPTER *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _FAST_MUTEX *v16; // rcx
  bool v17; // si
  int MonitorInstance; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  struct DXGMONITOR *v22; // rdi
  bool IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v24; // rcx
  char v25; // di
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct DXGMONITOR *v34; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( this && a2 != -1 && a3 && a4 )
  {
    DXGADAPTER::IsCoreResourceSharedOwner(this);
    v11 = *((_QWORD *)this + 319);
    if ( v11 )
    {
      DXGADAPTER::IsCoreResourceSharedOwner(this);
      v15 = *((_QWORD *)this + 319);
      if ( !v15 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v13, v12);
        WdLogEvent5_WdAssertion(v29);
        v15 = *((_QWORD *)this + 319);
      }
      v16 = *(struct _FAST_MUTEX **)(v15 + 96);
      if ( !v16 )
      {
        v30 = WdLogNewEntry5_WdError(0LL, v12, v14);
        *(_QWORD *)(v30 + 24) = this;
        WdLogEvent5_WdError(v30);
        v21 = -1073741811;
        goto LABEL_29;
      }
      v34 = 0LL;
      v17 = 1;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v16, (unsigned int)v4, 1, &v34);
      v21 = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v27 = WdLogNewEntry5_WdDmmEvent(v20, v19);
        *(_QWORD *)(v27 + 24) = v4;
        *(_QWORD *)(v27 + 32) = this;
        WdLogEvent5_WdDmmEvent(v27);
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v22 = v34;
          if ( !v34 || *((_DWORD *)v34 + 108) != 1 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v20, v19);
            WdLogEvent5_WdAssertion(v32);
          }
          if ( !v22 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v20, v19);
            WdLogEvent5_WdAssertion(v33);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 296), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v22);
          v24 = (struct _ERESOURCE *)((char *)v22 + 296);
          v25 = IsVirtualModeSuportDisabled;
          ExReleaseResourceLite(v24);
          KeLeaveCriticalRegion();
          v21 = 0;
          goto LABEL_19;
        }
        if ( MonitorInstance != -1073741632 )
        {
          v25 = (char)v34;
LABEL_18:
          if ( v21 >= 0 )
          {
LABEL_19:
            if ( v25 )
            {
              *a3 = 1;
            }
            else
            {
              *a3 = *(_BYTE *)(v11 + 233) == 0;
              v17 = *(_BYTE *)(v11 + 234) == 0;
            }
            *a4 = v17;
            return (unsigned int)v21;
          }
LABEL_29:
          v31 = WdLogNewEntry5_WdAssertion(v20, v19);
          *(_QWORD *)(v31 + 24) = v21;
          WdLogEvent5_WdAssertion(v31);
          return (unsigned int)v21;
        }
      }
      v25 = 0;
      v21 = 0;
      goto LABEL_18;
    }
    v28 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v28 + 24) = 8960LL;
    WdLogEvent5_WdError(v28);
  }
  return 3221225485LL;
}
