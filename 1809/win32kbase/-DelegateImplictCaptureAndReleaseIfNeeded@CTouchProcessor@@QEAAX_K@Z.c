/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0137390
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0137018 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C01430A0 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(struct _KTHREAD **this, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  CInpLockGuard *v9[7]; // [rsp+20h] [rbp-38h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v9, (struct CInpLockGuard *)(this + 7), a2);
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v8 = a2[5];
  if ( !v8 || (*(_DWORD *)(v8 + 432) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit(this, (__int64)a2, v6, v7);
  CTouchProcessor::SetDelegateAction(this, a2);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v9);
}
