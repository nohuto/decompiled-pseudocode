/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C01641F4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0228FF4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  CInpLockGuard::UnLock(*this);
}
