/*
 * XREFs of ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C015E630
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C0211080 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

CInpLockGuardExclusive *__fastcall CInpLockGuardExclusive::CInpLockGuardExclusive(
        CInpLockGuardExclusive *this,
        struct CInpLockGuard *a2,
        void *a3)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = a2;
  CInpLockGuard::LockExclusive(a2);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(this);
  return this;
}
