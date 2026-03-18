/*
 * XREFs of ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00F1D60
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005690 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1C01395CC (--$AcquireDdiEnumeratorCachedPathInfo@V-$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOL.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1C014B408 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E8240 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00EE55C (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  DXGADAPTER *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // si
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct _FAST_MUTEX *v20; // rcx
  int MonitorInstance; // eax
  int v22; // ebx
  struct DXGMONITOR *v23; // rdi
  char IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v25; // rcx
  char v26; // di
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  struct DXGMONITOR *v39; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v4 = *(_QWORD *)(v3 + 40);
  if ( !v4 )
  {
    v28 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v28);
    v4 = *(_QWORD *)(v3 + 40);
  }
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v29);
    v6 = *(_QWORD *)(v5 + 8);
  }
  v7 = *(DXGADAPTER **)(v6 + 16);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v7) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v30);
  }
  v10 = 1;
  if ( !v7 || (v11 = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL), (_DWORD)v11 == -1) )
  {
    v22 = -1073741811;
    goto LABEL_22;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v7);
  v15 = *((_QWORD *)v7 + 319);
  if ( !v15 )
  {
    v31 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v31 + 24) = 8960LL;
    WdLogEvent5_WdError(v31);
    goto LABEL_25;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(v7);
  v19 = *((_QWORD *)v7 + 319);
  if ( !v19 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v33);
    v19 = *((_QWORD *)v7 + 319);
  }
  v20 = *(struct _FAST_MUTEX **)(v19 + 96);
  if ( !v20 )
  {
    v34 = WdLogNewEntry5_WdError(0LL, v16, v18);
    *(_QWORD *)(v34 + 24) = v7;
    WdLogEvent5_WdError(v34);
    v22 = -1073741811;
LABEL_30:
    v36 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v36 + 24) = v22;
    WdLogEvent5_WdAssertion(v36);
    goto LABEL_22;
  }
  v39 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v20, (unsigned int)v11, 1, &v39);
  v22 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    v35 = WdLogNewEntry5_WdDmmEvent(v9, v8);
    *(_QWORD *)(v35 + 24) = v11;
    *(_QWORD *)(v35 + 32) = v7;
    WdLogEvent5_WdDmmEvent(v35);
LABEL_28:
    v26 = 0;
    v22 = 0;
    goto LABEL_29;
  }
  if ( MonitorInstance >= 0 )
  {
    v23 = v39;
    if ( !v39 || *((_DWORD *)v39 + 108) != 1 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v37);
    }
    if ( !v23 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v38);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v23 + 296), 1u);
    IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v23);
    v25 = (struct _ERESOURCE *)((char *)v23 + 296);
    v26 = IsVirtualModeSuportDisabled;
    ExReleaseResourceLite(v25);
    KeLeaveCriticalRegion();
    v22 = 0;
    goto LABEL_20;
  }
  if ( MonitorInstance == -1073741632 )
    goto LABEL_28;
  v26 = (char)v39;
LABEL_29:
  if ( v22 < 0 )
    goto LABEL_30;
LABEL_20:
  if ( !v26 )
    v10 = *(_BYTE *)(v15 + 233) == 0;
LABEL_22:
  if ( v22 < 0 )
  {
LABEL_25:
    v32 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v32);
  }
  return !v10;
}
