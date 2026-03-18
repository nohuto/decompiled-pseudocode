/*
 * XREFs of ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0177AE0
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0023000 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C0177370 (-LockShared@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CInpLockGuard::WaitForGuard(PVOID *this)
{
  return KeWaitForSingleObject(this[1], UserRequest, 0, 0, 0LL);
}
