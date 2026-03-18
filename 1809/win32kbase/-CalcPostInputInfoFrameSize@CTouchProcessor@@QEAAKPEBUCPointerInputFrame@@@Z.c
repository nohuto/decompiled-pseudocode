/*
 * XREFs of ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C0134358
 * Callers:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C01341A8 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     CalcPostInputInfoFrameSize @ 0x1C0147C60 (CalcPostInputInfoFrameSize.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  CInpLockGuard *v10[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  v5 = *((_DWORD *)a2 + 12);
  if ( v5 && (v6 = 144LL * (unsigned int)(v5 - 1), v6 <= 0xFFFFFFFF) && (unsigned int)(v6 + 152) >= 0x98 )
    v7 = v6 + 152;
  else
    v7 = 0;
  v8 = v7 - 1;
  if ( (unsigned int)v8 <= 0x96 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v3, v4);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v10);
  return v7;
}
