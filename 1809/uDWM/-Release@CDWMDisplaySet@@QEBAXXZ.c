/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002BEF4
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x180028C1C (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180029128 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B7A4 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x1800797A8 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18002BF1C (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this, unsigned int a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      CDWMDisplaySet::`scalar deleting destructor'(this, a2);
  }
}
