/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00B7600
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C015FE64 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  CTouchProcessor *v4; // rbx
  struct CInputPointerNode *v5; // rdx
  CInpLockGuard *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( this[10] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v6, (struct CInpLockGuard *)(this + 6));
  v4 = this[17];
  while ( v4 != (CTouchProcessor *)(this + 17) )
  {
    v5 = (CTouchProcessor *)((char *)v4 - 16);
    v4 = *(CTouchProcessor **)v4;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v5);
  }
  CInpLockGuard::UnLock(v6);
}
