/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C013FF10
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C013F548 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C0162A10 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(struct _KTHREAD **this, struct CInputDest *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  CInpLockGuard *v22[6]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-F8h] BYREF
  _OWORD v24[11]; // [rsp+90h] [rbp-B8h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v23, a2, v11);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
    (CInpUnlockGuardExclusive *)v22,
    (struct CInpLockGuard *)(this + 7),
    a3[2]);
  v12 = a3[2];
  v13 = *((_OWORD *)a2 + 1);
  v24[0] = *(_OWORD *)a2;
  v14 = *((_OWORD *)a2 + 2);
  v24[1] = v13;
  v15 = *((_OWORD *)a2 + 3);
  v24[2] = v14;
  v16 = *((_OWORD *)a2 + 4);
  v24[3] = v15;
  v17 = *((_OWORD *)a2 + 5);
  v24[4] = v16;
  v18 = *((_OWORD *)a2 + 6);
  v24[5] = v17;
  v19 = *((_OWORD *)a2 + 8);
  v24[6] = v18;
  v24[7] = *((_OWORD *)a2 + 7);
  v20 = *((_OWORD *)a2 + 9);
  v24[8] = v19;
  v21 = *((_OWORD *)a2 + 10);
  v24[9] = v20;
  v24[10] = v21;
  ApiSetEditionPointerParentNotify(v24, a3, v12);
  CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v22);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v23);
}
