/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0138A2C
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C014A6F8 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0138B74 (-FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0139064 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01391A8 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01391FC (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0142C48 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  CTouchProcessor *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  struct CPointerInputFrame **v16; // rcx
  struct CPointerInputFrame *v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct CPointerInfoNode *v21; // rdx
  struct CPointerQFrame *v22; // rdx
  CInpLockGuard *v23[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v23,
    (struct CInpLockGuard *)(this + 7),
    0LL);
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v7, (__int64)a2, v8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  InputTraceLogging::Pointer::FreeFrame(a2);
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    v15 = (_QWORD *)((char *)a2 + 8);
    v16 = (struct CPointerInputFrame **)*((_QWORD *)a2 + 1);
    if ( v16[1] != (struct CPointerInputFrame *)((char *)a2 + 8)
      || (v17 = (struct CPointerInputFrame *)*((_QWORD *)a2 + 2), *(_QWORD **)v17 != v15) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v17 = v16;
    v16[1] = v17;
    *((_QWORD *)a2 + 2) = (char *)a2 + 8;
    *v15 = v15;
    CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList((CTouchProcessor *)v16, a2);
  }
  v18 = *((_DWORD *)a2 + 23);
  if ( (v18 & 0x100) == 0 )
  {
    if ( (v18 & 0x80u) == 0 )
    {
      v20 = *((_DWORD *)this + 41);
      if ( !v20 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
        v20 = *((_DWORD *)this + 41);
      }
      *((_DWORD *)this + 41) = v20 - 1;
    }
    else
    {
      v19 = *((_DWORD *)this + 40);
      if ( !v19 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
        v19 = *((_DWORD *)this + 40);
      }
      *((_DWORD *)this + 40) = v19 - 1;
    }
  }
  v21 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 13);
  if ( v21 )
    CTouchProcessor::FreePointerInfoList(v13, v21, *((_DWORD *)a2 + 12));
  v22 = (struct CPointerQFrame *)*((_QWORD *)a2 + 14);
  if ( v22 )
    CTouchProcessor::FreePointerQFrameList(v13, v22, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 15);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 12));
  Win32FreePool((__int64)a2);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v23);
}
