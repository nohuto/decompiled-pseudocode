/*
 * XREFs of ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01602C4
 * Callers:
 *     ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C0169800 (-GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C0169AF0 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0169B90 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C0169D70 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016A060 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C016A320 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C016A870 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C016B030 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C016BC48 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C016BE40 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C016C9B0 (-GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C016DDC0 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 *     ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C016DEA0 (-IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C01713B0 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0179560 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 */

CInpLockGuardShared *__fastcall CInpLockGuardShared::CInpLockGuardShared(
        CInpLockGuardShared *this,
        struct CInpLockGuard *a2)
{
  BOOL v3; // r8d

  *(_QWORD *)this = a2;
  v3 = *((_QWORD *)a2 + 4) == (_QWORD)KeGetCurrentThread();
  *((_DWORD *)this + 2) = v3;
  if ( !v3 )
    CInpLockGuard::LockShared(a2, this);
  return this;
}
