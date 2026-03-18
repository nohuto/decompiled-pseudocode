/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C016D3CC
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004196C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0041A84 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C009E5B8 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C016B9A8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C016CE40 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C016D1D8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C016DBD0 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C016E05C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C017146C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0171B20 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0174448 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C019FE58 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C01A1514 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r12d
  __int64 v13; // r8
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r8
  CTouchProcessor *v18; // rcx
  struct tagPOINT v20; // rax
  struct tagPOINT v21; // [rsp+30h] [rbp-50h] BYREF
  struct CInputDest *v22; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v23[64]; // [rsp+40h] [rbp-40h] BYREF
  struct tagPOINT v25; // [rsp+D8h] [rbp+58h] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v12 = *((_DWORD *)v4 + 306) & 0x2000;
  v25.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4, v13);
  v14 = *(_DWORD *)(a4 + 4);
  if ( (v14 & 0x200) == 0
    || (v14 & 0x800) != 0
    || *(_DWORD *)(a4 + 176) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 360)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 188) & 0x10000) == 0 )
  {
    v25 = 0LL;
    CTouchProcessor::GetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 180), &v25);
    v20 = v25;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v16 | v15;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 360)) )
  {
    v21 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v23, (struct CInputDest *)(a4 + 360), v17);
    CInpLockGuard::UnLock((CInpLockGuard *)(a1 + 6));
    ApiSetPerformTargetingWithinPwnd(a4 + 360, a4 + 168, &v21);
    CInpLockGuard::LockExclusive((CInpLockGuard *)(a1 + 6), (struct CLockListEntryStack *)&v22);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v23);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v12 != 0, a3, v25.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v18, v4, v12 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, *(_QWORD *)(a4 + 16), v12 != 0, &v22, (int *)&v25);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 208),
                         a4 + 168,
                         v21,
                         &v21) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 180), &v21);
      v20 = v21;
LABEL_16:
      *(struct tagPOINT *)(a4 + 156) = v20;
    }
  }
  return 0LL;
}
