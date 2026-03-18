/*
 * XREFs of ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C0161638
 * Callers:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C01614C0 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     CalcPostInputInfoFrameSize @ 0x1C0176C60 (CalcPostInputInfoFrameSize.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcPostInputInfoFrameSize(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v10,
    (CTouchProcessor *)((char *)this + 48));
  v5 = *((_DWORD *)a2 + 12);
  if ( !v5 || (v6 = 144LL * (unsigned int)(v5 - 1), v6 > 0xFFFFFFFF) || (v7 = v6 + 152, (unsigned int)v6 >= 0xFFFFFF68) )
    v7 = 0;
  v8 = v7 - 1;
  if ( (unsigned int)v8 <= 0x96 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v3, v4);
  if ( !v11 )
    CInpLockGuard::UnLock(v10);
  return v7;
}
