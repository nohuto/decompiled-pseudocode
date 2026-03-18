/*
 * XREFs of ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0005BB4 (UnInitializeInputComponents.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C003CF84 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00412CC (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01533C8 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C015341C (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01534CC (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     <none>
 */

CEResourceLockExclusive *__fastcall CEResourceLockExclusive::CEResourceLockExclusive(
        CEResourceLockExclusive *this,
        struct CEResource *a2)
{
  *(_QWORD *)this = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  return this;
}
