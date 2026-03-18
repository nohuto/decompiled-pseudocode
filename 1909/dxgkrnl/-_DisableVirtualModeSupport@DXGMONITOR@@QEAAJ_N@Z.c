/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z @ 0x1C02CE234
 * Callers:
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02C9320 (MonitorDisableMonitorVirtualModeSupport.c)
 * Callees:
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02CBA10 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DisableVirtualModeSupport(DXGMONITOR *this, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v4; // si
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 result; // rax

  v2 = *((_DWORD *)this + 10);
  v4 = a2;
  v5 = v2;
  if ( (v2 & 2) != 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2, a2);
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 10);
  }
  *((_DWORD *)this + 10) = v5 & 0xFFFFFF7F | (v4 << 7);
  result = DXGMONITOR::_SaveVirtualModeSupportToRegistry(this);
  if ( (int)result < 0 )
    *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ v2) & 0x80;
  return result;
}
