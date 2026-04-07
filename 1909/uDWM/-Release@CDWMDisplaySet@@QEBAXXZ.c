/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002C3EC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002A878 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18002B054 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18007FC2C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18002C414 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this, unsigned int a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      CDWMDisplaySet::`scalar deleting destructor'(this, a2);
  }
}
