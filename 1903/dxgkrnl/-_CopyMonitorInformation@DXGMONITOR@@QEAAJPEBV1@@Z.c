/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CED98
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0176214 (MonitorNotifyDeviceNodeReady.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02C8708 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C016FEA4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01747EC (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02CAC0C (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02CEC44 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(DXGMONITOR *this, const struct DXGMONITOR *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  const struct DXGMONITOR *i; // rax
  char *v16; // rax
  __int64 v17; // rdx
  void **v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGMONITOR *v21; // rcx
  DXGMONITOR **v22; // r8
  char *v23; // rdi
  const struct DXGMONITOR *j; // rax
  __int64 v25; // rax
  _OWORD *v27; // rax
  DXGMONITOR **v28; // rdx
  DXGMONITOR *v29; // rax
  char *v30; // rdi
  PVOID v31; // rax
  void *v32; // rcx

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 108) == 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  DXGMONITOR::_CleanupMonitorDescriptors(this, (__int64)a2, a3);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v7, v8);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v9);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v10);
  if ( *((_DWORD *)this + 52) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 64) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ *((_DWORD *)a2 + 10)) & 8;
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  for ( i = (const struct DXGMONITOR *)*((_QWORD *)a2 + 27);
        i != (const struct DXGMONITOR *)((char *)a2 + 216);
        i = (const struct DXGMONITOR *)*((_QWORD *)v23 + 12) )
  {
    v23 = (char *)i - 96;
    if ( !i )
      v23 = 0LL;
    if ( !v23 )
      break;
    v16 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    if ( !v16 )
      goto LABEL_20;
    v21 = (DXGMONITOR *)(v16 + 96);
    *(_OWORD *)v16 = *(_OWORD *)v23;
    *((_OWORD *)v16 + 1) = *((_OWORD *)v23 + 1);
    *((_OWORD *)v16 + 2) = *((_OWORD *)v23 + 2);
    *((_OWORD *)v16 + 3) = *((_OWORD *)v23 + 3);
    *((_OWORD *)v16 + 4) = *((_OWORD *)v23 + 4);
    *((_OWORD *)v16 + 5) = *((_OWORD *)v23 + 5);
    *((_OWORD *)v16 + 6) = *((_OWORD *)v23 + 6);
    *((_QWORD *)v16 + 14) = *((_QWORD *)v23 + 14);
    v22 = (DXGMONITOR **)*((_QWORD *)this + 28);
    if ( *v22 != (DXGMONITOR *)((char *)this + 216) )
LABEL_33:
      __fastfail(3u);
    *(_QWORD *)v21 = (char *)this + 216;
    *((_QWORD *)v16 + 13) = v22;
    *v22 = v21;
    *((_QWORD *)this + 28) = v21;
    ++*((_DWORD *)this + 52);
    if ( v23 == *((char **)a2 + 29) )
      *((_QWORD *)this + 29) = v16;
  }
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  for ( j = (const struct DXGMONITOR *)*((_QWORD *)a2 + 33);
        j != (const struct DXGMONITOR *)((char *)a2 + 264);
        j = (const struct DXGMONITOR *)*((_QWORD *)v30 + 6) )
  {
    v30 = (char *)j - 48;
    if ( !j )
      v30 = 0LL;
    if ( !v30 )
      break;
    v27 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
    if ( !v27 )
      goto LABEL_20;
    *v27 = *(_OWORD *)v30;
    v27[1] = *((_OWORD *)v30 + 1);
    v27[2] = *((_OWORD *)v30 + 2);
    v27[3] = *((_OWORD *)v30 + 3);
    v28 = (DXGMONITOR **)*((_QWORD *)this + 34);
    v29 = (DXGMONITOR *)(v27 + 3);
    if ( *v28 != (DXGMONITOR *)((char *)this + 264) )
      goto LABEL_33;
    *(_QWORD *)v29 = (char *)this + 264;
    *((_QWORD *)v29 + 1) = v28;
    *v28 = v29;
    *((_QWORD *)this + 34) = v29;
    ++*((_DWORD *)this + 64);
  }
  if ( *((_QWORD *)a2 + 18) )
  {
    v31 = operator new[](8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 17) = v31;
    if ( !v31
      || (**((_QWORD **)this + 17) = operator new[](0x9FuLL, 0x4D677844u, PagedPool),
          v18 = (void **)*((_QWORD *)this + 17),
          !*v18) )
    {
LABEL_20:
      v25 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      WdLogEvent5_WdLowResource(v25);
      return 3221225495LL;
    }
    *((_DWORD *)this + 32) = 1;
    v32 = *v18;
    *((_QWORD *)this + 18) = v32;
    memmove(v32, *((const void **)a2 + 18), 0x9FuLL);
  }
  return 0LL;
}
