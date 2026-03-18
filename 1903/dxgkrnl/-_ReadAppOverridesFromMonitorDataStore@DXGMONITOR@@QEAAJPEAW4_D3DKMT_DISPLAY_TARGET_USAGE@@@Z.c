/*
 * XREFs of ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02CB02C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01748A8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C00C6058 (-_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01752C0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z @ 0x1C02CACFC (-_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(
        DXGMONITOR *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // edi
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  GUID Guid; // [rsp+30h] [rbp-18h] BYREF
  bool v11; // [rsp+60h] [rbp+18h] BYREF
  bool v12; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v12 = 0;
  v11 = 0;
  if ( (int)DXGMONITOR::_GetPseudoSpecializedState(this, &v11, &v12) < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !v11 )
    return 0LL;
  LOBYTE(v4) = 1;
  result = DXGMONITOR::_OpenMonitorDataStore(this, v4, &Handle);
  v8 = result;
  if ( (int)result >= 0 )
  {
    Guid = GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED;
    if ( DXGMONITOR::_GetAppOverride(this, Handle, &Guid) )
    {
      *((_DWORD *)this + 10) |= 0x1000u;
      *(_DWORD *)a2 = 2;
    }
    ZwClose(Handle);
    return v8;
  }
  return result;
}
