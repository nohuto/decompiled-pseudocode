/*
 * XREFs of ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C0296F70
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C00B4640 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C02994F4 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00E4434 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

bool __fastcall DXGMONITOR::_ValidateMonitorOrientation(DXGMONITOR *this)
{
  char IsVirtualModeSuportDisabled; // al
  __int64 v2; // rcx
  int v3; // r9d
  char v4; // r8

  IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(this);
  v4 = 0;
  if ( IsVirtualModeSuportDisabled )
    return v3 == 0;
  if ( (v3 & 0xFFFFFFFD) == 0 || v3 == *(_DWORD *)(v2 + 448) )
    return 1;
  return v4;
}
