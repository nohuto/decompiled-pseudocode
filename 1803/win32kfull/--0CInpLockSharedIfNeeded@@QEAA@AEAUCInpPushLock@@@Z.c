/*
 * XREFs of ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C01022B8
 * Callers:
 *     FindSiblingPointerDevice @ 0x1C0102228 (FindSiblingPointerDevice.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C01B7A80 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     <none>
 */

CInpLockSharedIfNeeded *__fastcall CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        CInpLockSharedIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = a2;
  v3 = *((_QWORD *)a2 + 1) == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
    CInpPushLock::LockShared(a2);
  return this;
}
