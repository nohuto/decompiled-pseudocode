/*
 * XREFs of ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C01542FC
 * Callers:
 *     MonitorCreateMonitorManager @ 0x1C0154260 (MonitorCreateMonitorManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InitializeMonitorManager(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( g_IsInternalRelease || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 308LL) & 0x200) != 0 )
  {
    v6 = 0;
    v7 = 0;
    qword_1C008DD08 = (__int64)&v6;
    qword_1C008DD18 = (__int64)&v6;
    qword_1C008DD40 = (__int64)&v7;
    qword_1C008DD50 = (__int64)&v7;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_1C008DCF0, 0LL, 0LL);
    if ( v6 )
      *((_BYTE *)this + 164) = 0;
    if ( v7 )
      *((_BYTE *)this + 3) = 0;
  }
  *((_BYTE *)this + 4) = 1;
  return 0LL;
}
