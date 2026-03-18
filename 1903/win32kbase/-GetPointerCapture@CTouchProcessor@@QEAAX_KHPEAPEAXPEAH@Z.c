/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0169910
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01699BC (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(struct _KTHREAD **this, __int64 a2, int a3, void **a4, int *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  CInpLockGuard *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (struct CInpLockGuard *)(this + 6));
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v12 = *(_QWORD *)(a2 + 40);
  if ( v12 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(
            (CTouchProcessor *)this,
            (struct CPointerCaptureInfo *)(v12 + 32 + (a3 != 0 ? 0x90 : 0)),
            a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
  if ( !v14 )
    CInpLockGuard::UnLock(v13);
}
