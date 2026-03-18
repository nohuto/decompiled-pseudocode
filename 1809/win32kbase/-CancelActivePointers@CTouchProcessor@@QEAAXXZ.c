/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C0062FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0134BD0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  CTouchProcessor *v4; // rdi
  struct CInputPointerNode *v5; // rdx
  _BYTE v6[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( this[8] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v6, (struct CInpLockGuard *)(this + 7), 0LL);
  v4 = this[13];
  while ( v4 != (CTouchProcessor *)(this + 13) )
  {
    v5 = (CTouchProcessor *)((char *)v4 - 16);
    v4 = *(CTouchProcessor **)v4;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v5);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v6);
}
