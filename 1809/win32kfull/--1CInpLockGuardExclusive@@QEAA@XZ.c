/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C015E674
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0211080 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)this);
  CInpLockGuard::UnLock(this[5]);
}
