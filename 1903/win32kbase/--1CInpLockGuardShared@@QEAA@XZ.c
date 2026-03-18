/*
 * XREFs of ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C00BF690
 * Callers:
 *     ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016A060 (-GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C016BE40 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall CInpLockGuardShared::~CInpLockGuardShared(CInpLockGuard **this)
{
  if ( !*((_DWORD *)this + 2) )
    CInpLockGuard::UnLock(*this);
}
