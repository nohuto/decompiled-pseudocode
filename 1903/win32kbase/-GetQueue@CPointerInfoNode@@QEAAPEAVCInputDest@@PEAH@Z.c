/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016CC38
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0161778 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C016CE40 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015DB5C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016987C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C019D508 (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  CInputDest *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  CTouchProcessor *v21; // rbx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  CInputDest *v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v33[7]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  char v35; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v36[16]; // [rsp+140h] [rbp+40h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  *a2 = 0;
  if ( *((_DWORD *)this + 113) )
  {
    if ( CInputDest::IsEqualByWindowHandle((__int64)this + 360, *((_QWORD *)this + 25), 1) )
    {
      if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 360, *((_QWORD *)this + 25), 2) )
      {
        *a2 = 1;
        return 0LL;
      }
      if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 360)) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 360)) + 53) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
      return (CPointerInfoNode *)((char *)this + 360);
    }
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
  }
  CTouchProcessor::GetPointerCapture((struct _KTHREAD **)gpTouchProcessor, *((_QWORD *)this + 2), 0LL, v32, 0LL);
  v14 = v32[0];
  if ( !v32[0] )
  {
    v21 = gpTouchProcessor;
    CInpLockGuard::UnLock((CTouchProcessor *)((char *)gpTouchProcessor + 48));
    v22 = ApiSetEditionPointerSpeedHitTest((unsigned int)&v35, (int)this + 176, 0, 0, 0LL, 0LL);
    v23 = *(_OWORD *)(v22 + 16);
    v33[0] = *(_OWORD *)v22;
    v24 = *(_OWORD *)(v22 + 32);
    v33[1] = v23;
    v25 = *(_OWORD *)(v22 + 48);
    v33[2] = v24;
    v26 = *(_OWORD *)(v22 + 64);
    v33[3] = v25;
    v27 = *(_OWORD *)(v22 + 80);
    v33[4] = v26;
    v28 = *(_OWORD *)(v22 + 96);
    v33[5] = v27;
    *(_QWORD *)&v27 = *(_QWORD *)(v22 + 112);
    v33[6] = v28;
    v34 = v27;
    CInputDest::CInputDest((CInputDest *)v36, (const struct tagINPUTDEST *)v33);
    CInputDest::operator=((__int64)this + 360, v36, v29);
    CInputDest::SetEmpty((CInputDest *)v36, v30, v31);
    CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)v21 + 48), (struct CLockListEntryStack *)v32);
    if ( !*((_DWORD *)this + 90) )
      return 0LL;
    return (CPointerInfoNode *)((char *)this + 360);
  }
  if ( !CInputDest::GetThreadInfo(v32[0]) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  if ( !*((_QWORD *)CInputDest::GetThreadInfo(v14) + 53) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  return v14;
}
