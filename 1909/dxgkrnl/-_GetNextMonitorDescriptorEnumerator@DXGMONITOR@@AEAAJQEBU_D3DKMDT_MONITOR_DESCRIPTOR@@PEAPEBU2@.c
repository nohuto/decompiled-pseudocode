/*
 * XREFs of ?_GetNextMonitorDescriptorEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU2@@Z @ 0x1C02CF788
 * Callers:
 *     ?AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORDESCRIPTORSET__@@QEBU_D3DKMDT_MONITOR_DESCRIPTOR@@PEAPEBU3@@Z @ 0x1C02CC490 (-AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORD.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0176254 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorDescriptorEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR *const a2,
        const struct _D3DKMDT_MONITOR_DESCRIPTOR **a3)
{
  DXGMONITOR *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdi
  DXGMONITOR *v9; // rax
  D3DKMDT_MONITOR_DESCRIPTOR_ID v10; // eax
  __int64 v12; // rbp
  __int64 v13; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  const struct _D3DKMDT_MONITOR_DESCRIPTOR *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct _D3DKMDT_MONITOR_DESCRIPTOR **v23; // rcx
  struct _D3DKMDT_MONITOR_DESCRIPTOR *v24; // rax
  __int64 v25; // rax

  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (char *)v5 + 192;
  if ( !a2 )
    goto LABEL_27;
  v9 = *(DXGMONITOR **)v8;
  if ( *(char **)v8 == v8 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v9 != this )
  {
    if ( v8 == (char *)v9 )
      goto LABEL_27;
    v9 = *(DXGMONITOR **)v9;
  }
  this = (DXGMONITOR *)*((unsigned int *)v5 + 32);
  if ( (unsigned int)this <= a2->Id )
  {
LABEL_27:
    v25 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = v5;
    WdLogEvent5_WdError(v25);
    return 3223192368LL;
  }
  v10 = a2->Id + 1;
  if ( (unsigned int)this <= v10 )
  {
LABEL_13:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v5;
    *a3 = 0LL;
    return 0LL;
  }
  if ( a2->Id == -1 )
  {
    v12 = *((_QWORD *)v5 + 18);
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(*((_QWORD *)v5 + 17) + 8LL * v10);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, a2);
    WdLogEvent5_WdAssertion(v13);
LABEL_19:
    if ( !v12 )
      goto LABEL_13;
  }
  v14 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)operator new[](0x30uLL, 0x4D677844u, PagedPool);
  v18 = v14;
  if ( v14 )
  {
    v14->Id = a2->Id + 1;
    v14->Type = *(_DWORD *)(v12 + 12);
    v14->DataSize = *(_QWORD *)(v12 + 16);
    v14->pData = (void *)(v12 + 24);
    if ( (int)ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v12 + 8), &v14->Origin) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21, v20);
      WdLogEvent5_WdAssertion(v22);
    }
    v23 = (struct _D3DKMDT_MONITOR_DESCRIPTOR **)*((_QWORD *)v8 + 1);
    v24 = (struct _D3DKMDT_MONITOR_DESCRIPTOR *)&v18[1];
    if ( *v23 != (struct _D3DKMDT_MONITOR_DESCRIPTOR *)v8 )
      __fastfail(3u);
    *(_QWORD *)&v24->Id = v8;
    v18[1].DataSize = (SIZE_T)v23;
    *v23 = v24;
    *((_QWORD *)v8 + 1) = v24;
    *a3 = v18;
    return 0LL;
  }
  v19 = WdLogNewEntry5_WdError(v16, v15, v17);
  WdLogEvent5_WdError(v19);
  return 3221225495LL;
}
