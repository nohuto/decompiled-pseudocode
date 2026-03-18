/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C0140F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        CTouchProcessor *this,
        __int64 a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  _DWORD *v10; // rsi
  _QWORD *FrameById; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  CInpLockGuard *v18[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v18,
    (CTouchProcessor *)((char *)this + 56),
    (void *)a2);
  v10 = 0LL;
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
    v14 = FrameById;
    if ( FrameById )
    {
      v15 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v15 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
        v15 = *(unsigned int *)(a2 + 32);
      }
      v16 = (_DWORD *)(v14[13] + 576LL * (unsigned int)v15);
      v10 = v16 + 58;
      if ( v16[59] != *(unsigned __int16 *)(a2 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
      *a3 = *(struct tagPOINT *)(v16 + 53);
      *a4 = v16[52];
      *a5 = -__CFSHR__(*v16, 18);
      *a6 = -__CFSHR__(*v16, 19);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v18);
  return (const struct tagPOINTER_INFO *)v10;
}
