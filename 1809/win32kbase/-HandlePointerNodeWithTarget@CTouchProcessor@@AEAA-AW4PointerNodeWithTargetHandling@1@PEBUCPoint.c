/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C013E8A4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C008B2A4 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C013CFF4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C013E308 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C013E678 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C013F070 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C013F548 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01426CC (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0142C7C (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0145504 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C016453C (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C01654F8 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r15d
  __int64 v13; // r8
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r8
  CTouchProcessor *v18; // rcx
  struct tagPOINT v20; // rax
  unsigned __int16 v21; // dx
  struct tagPOINT v22; // [rsp+38h] [rbp-49h] BYREF
  struct CInputDest *v23; // [rsp+40h] [rbp-41h] BYREF
  CInpLockGuard *v24[6]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v25[64]; // [rsp+78h] [rbp-9h] BYREF
  struct tagPOINT v26; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v12 = *((_DWORD *)v4 + 302) & 0x2000;
  v26.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4, v13);
  v14 = *(_DWORD *)(a4 + 4);
  if ( (v14 & 0x200) == 0
    || (v14 & 0x800) != 0
    || *(_DWORD *)(a4 + 232) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 392)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 244) & 0x10000) == 0 )
  {
    v21 = *(_WORD *)(a4 + 236);
    v26 = 0LL;
    CTouchProcessor::GetPointerOffset(a1, v21, &v26);
    v20 = v26;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v16 | v15;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 392)) )
  {
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, (struct CInputDest *)(a4 + 392), v17);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v24,
      (struct CInpLockGuard *)(a1 + 7),
      0LL);
    ApiSetPerformTargetingWithinPwnd(a4 + 392, a4 + 224, &v22);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v24);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v12 != 0, a3, v26.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v18, v4, v12 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, *(_QWORD *)(a4 + 16), v12 != 0, &v23, (int *)&v26);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 264),
                         a4 + 224,
                         v22,
                         &v22) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 236), &v22);
      v20 = v22;
LABEL_16:
      *(struct tagPOINT *)(a4 + 212) = v20;
    }
  }
  return 0LL;
}
