/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0166D8C
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01756AC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C017A2DC (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C017B728 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0166EFC (-FreeFrame@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0167390 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0167564 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01675B8 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016DABC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rdx
  CTouchProcessor *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  CTouchProcessor *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct CPointerInfoNode *v22; // rdx
  struct CPointerQFrame *v23; // rdx
  CInpLockGuard *v24; // [rsp+20h] [rbp-18h] BYREF
  int v25; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v24,
    (struct CInpLockGuard *)(this + 6));
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v7, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  InputTraceLogging::Pointer::FreeFrame(a2);
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    v15 = (_QWORD *)((char *)a2 + 8);
    v16 = *((_QWORD *)a2 + 1);
    if ( *(struct CPointerInputFrame **)(v16 + 8) != (struct CPointerInputFrame *)((char *)a2 + 8) )
      goto LABEL_18;
    v17 = (_QWORD *)*((_QWORD *)a2 + 2);
    if ( (_QWORD *)*v17 != v15
      || (*v17 = v16,
          *(_QWORD *)(v16 + 8) = v17,
          *((_QWORD *)a2 + 2) = (char *)a2 + 8,
          *v15 = v15,
          v18 = (_QWORD *)((char *)a2 + 24),
          v12 = *((_QWORD *)a2 + 3),
          *(struct CPointerInputFrame **)(v12 + 8) != (struct CPointerInputFrame *)((char *)a2 + 24))
      || (v13 = (CTouchProcessor *)*((_QWORD *)a2 + 4), *(_QWORD **)v13 != v18) )
    {
LABEL_18:
      __fastfail(3u);
    }
    *(_QWORD *)v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *((_QWORD *)a2 + 4) = (char *)a2 + 24;
    *v18 = v18;
  }
  v19 = *((_DWORD *)a2 + 28);
  if ( (v19 & 0x200) == 0 )
  {
    if ( (v19 & 0x100) != 0 )
    {
      v20 = *((_DWORD *)this + 48);
      if ( !v20 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
        v20 = *((_DWORD *)this + 48);
      }
      *((_DWORD *)this + 48) = v20 - 1;
    }
    else
    {
      v21 = *((_DWORD *)this + 49);
      if ( !v21 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
        v21 = *((_DWORD *)this + 49);
      }
      *((_DWORD *)this + 49) = v21 - 1;
    }
  }
  v22 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 16);
  if ( v22 )
    CTouchProcessor::FreePointerInfoList(v13, v22, *((_DWORD *)a2 + 12));
  v23 = (struct CPointerQFrame *)*((_QWORD *)a2 + 17);
  if ( v23 )
    CTouchProcessor::FreePointerQFrameList(v13, v23, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 18);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 15));
  Win32FreePool((__int64)a2);
  if ( !v25 )
    CInpLockGuard::UnLock(v24);
}
