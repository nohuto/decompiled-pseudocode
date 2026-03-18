/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011C50
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000E840 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ @ 0x1C000F7B4 (-GetAnalogExclusive@CompositionSurfaceObject@@QEAA_NXZ.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C000F98C (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C000FD50 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 *     ?GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C0010FD0 (-GetSurfaceUpdates@CCompositionFrame@@UEAA_NPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C00116E0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C750 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C91C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z @ 0x1C0059DC0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAX@Z.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C005A15C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C005A1B4 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?MarkCompleted@FlipManagerTokenObject@@QEAAJXZ @ 0x1C005A234 (-MarkCompleted@FlipManagerTokenObject@@QEAAJXZ.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C005A4D8 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C005B400 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?MarkPending@FlipManagerTokenObject@@QEAAJXZ @ 0x1C005B6D0 (-MarkPending@FlipManagerTokenObject@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
    return (unsigned int)-1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 8, 0LL);
  if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return (unsigned int)-1073741816;
  }
  return v2;
}
