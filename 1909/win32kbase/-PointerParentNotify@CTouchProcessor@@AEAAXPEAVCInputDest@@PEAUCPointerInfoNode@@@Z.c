/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C016C758
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004C06C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C004C184 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A3D70 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C016BE70 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C019B124 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        struct _KTHREAD **this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _OWORD v19[7]; // [rsp+28h] [rbp-69h] BYREF
  __int64 v20; // [rsp+98h] [rbp+7h]
  _BYTE v21[64]; // [rsp+A8h] [rbp+17h] BYREF
  char v22; // [rsp+F8h] [rbp+67h] BYREF

  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v21, a2, v11);
  CInpLockGuard::UnLock((CInpLockGuard *)(this + 6));
  v12 = *((_QWORD *)a3 + 2);
  v13 = *((_OWORD *)a2 + 1);
  v19[0] = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  v19[1] = v13;
  v15 = *((_OWORD *)a2 + 3);
  v19[2] = v14;
  v16 = *((_OWORD *)a2 + 4);
  v19[3] = v15;
  v17 = *((_OWORD *)a2 + 5);
  v19[4] = v16;
  v18 = *((_OWORD *)a2 + 6);
  v19[5] = v17;
  *(_QWORD *)&v17 = *((_QWORD *)a2 + 14);
  v19[6] = v18;
  v20 = v17;
  ApiSetEditionPointerParentNotify(v19, a3, v12);
  CInpLockGuard::LockExclusive((CInpLockGuard *)(this + 6), (struct CLockListEntryStack *)&v22);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
}
