/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00E29EC
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000F840 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C00D3E48 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C0129B6C (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E2274 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  DXGADAPTER *v6; // rdi
  __int64 v7; // rcx
  bool v8; // si
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _FAST_MUTEX *v14; // rcx
  int MonitorInstance; // eax
  __int64 v16; // rdx
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
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct DXGMONITOR *v36; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v3 = *(_QWORD *)(v2 + 40);
  if ( !v3 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
    v3 = *(_QWORD *)(v2 + 40);
  }
  v4 = *(_QWORD *)(v3 + 88);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6 = *(DXGADAPTER **)(v5 + 16);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v28);
  }
  v8 = 1;
  if ( !v6 || (v9 = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL), (_DWORD)v9 == -1) )
  {
    v19 = -1073741811;
    goto LABEL_22;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v6);
  v11 = *((_QWORD *)v6 + 315);
  if ( !v11 )
  {
    v29 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v29 + 24) = 8248LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_29;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v6);
  v13 = *((_QWORD *)v6 + 315);
  if ( !v13 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v31);
    v13 = *((_QWORD *)v6 + 315);
  }
  v14 = *(struct _FAST_MUTEX **)(v13 + 96);
  if ( !v14 )
  {
    v32 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v32 + 24) = v6;
    WdLogEvent5_WdError(v32);
    v19 = -1073741811;
LABEL_31:
    v33 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v33 + 24) = v19;
    WdLogEvent5_WdAssertion(v33);
    goto LABEL_22;
  }
  v36 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v14, v9, 1, &v36);
  v19 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v25 = WdLogNewEntry5_WdDmmEvent(v7, v16, v17, v18);
    *(_QWORD *)(v25 + 24) = v9;
    *(_QWORD *)(v25 + 32) = v6;
    WdLogEvent5_WdDmmEvent(v25);
LABEL_25:
    v23 = 0;
    v19 = 0;
    goto LABEL_26;
  }
  if ( MonitorInstance >= 0 )
  {
    v20 = v36;
    if ( !v36 || *((_DWORD *)v36 + 108) != 1 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v34);
    }
    if ( !v20 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v35);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v20 + 296), 1u);
    IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v20);
    v22 = (struct _ERESOURCE *)((char *)v20 + 296);
    v23 = IsVirtualModeSuportDisabled;
    ExReleaseResourceLite(v22);
    KeLeaveCriticalRegion();
    v19 = 0;
    goto LABEL_20;
  }
  if ( MonitorInstance == -1073741632 )
    goto LABEL_25;
  v23 = (char)v36;
LABEL_26:
  if ( v19 < 0 )
    goto LABEL_31;
LABEL_20:
  if ( !v23 )
    v8 = *(_BYTE *)(v11 + 132) == 0;
LABEL_22:
  if ( v19 < 0 )
  {
LABEL_29:
    v30 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v30);
  }
  return !v8;
}
