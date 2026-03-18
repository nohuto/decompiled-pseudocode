/*
 * XREFs of ?_GetFirstMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C029B0FC
 * Callers:
 *     ?AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_D3DKMDT_MONITOR_DESCRIPTOR@@@Z @ 0x1C0291EB0 (-AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  char *v9; // rax
  __int64 v10; // rcx
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // rbx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v17; // rax
  char **v18; // rcx

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this + 32) )
  {
    v7 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdDmmEvent(v7);
LABEL_5:
    *a2 = 0LL;
    return 0LL;
  }
  v8 = *((_QWORD *)this + 18);
  if ( !v8 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    goto LABEL_5;
  }
  v9 = (char *)operator new(0x30uLL, 0x4D677844u, PagedPool);
  v11 = (const struct _D3DKMDT_MONITOR_DESCRIPTOR *)v9;
  if ( !v9 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    WdLogEvent5_WdError(v12);
    return 3221225495LL;
  }
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 1) = *(_DWORD *)(v8 + 12);
  *((_QWORD *)v9 + 1) = *(_QWORD *)(v8 + 16);
  *((_QWORD *)v9 + 2) = v8 + 24;
  if ( (int)ConvertMonitorCapablitiesOrigin(
              *(unsigned int *)(v8 + 8),
              (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)(v9 + 24)) < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (char *)this + 192;
  v17 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v11[1];
  v18 = (char **)*((_QWORD *)v16 + 1);
  if ( *v18 != v16 )
    __fastfail(3u);
  *(_QWORD *)&v17->Id = v16;
  v11[1].DataSize = (SIZE_T)v18;
  *v18 = (char *)v17;
  *((_QWORD *)v16 + 1) = v17;
  *a2 = v11;
  return 0LL;
}
