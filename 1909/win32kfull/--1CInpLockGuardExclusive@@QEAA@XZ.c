/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C01651C4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C02289D4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  CInpLockGuard::UnLock(*this);
}
