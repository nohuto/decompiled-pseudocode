/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C013E0C4
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C013449C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C013E308 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C013B1AC (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C0162B3C (ApiSetEditionPointerSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  CInputDest *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  CInputDest *v31; // [rsp+40h] [rbp-278h] BYREF
  CInpLockGuard *v32[7]; // [rsp+48h] [rbp-270h] BYREF
  _OWORD v33[11]; // [rsp+80h] [rbp-238h] BYREF
  char v34; // [rsp+130h] [rbp-188h] BYREF
  _QWORD v35[24]; // [rsp+1E0h] [rbp-D8h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  *a2 = 0;
  if ( *((_DWORD *)this + 119) )
  {
    if ( CInputDest::IsEqualByWindowHandle((__int64)this + 392, *((void **)this + 32), 1) )
    {
      if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 392, *((void **)this + 32), 2) )
      {
        *a2 = 1;
        return 0LL;
      }
      if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 392)) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
      if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 392)) + 54) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
      return (CPointerInfoNode *)((char *)this + 392);
    }
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
  }
  CTouchProcessor::GetPointerCapture(
    (struct _KTHREAD **)WPP_MAIN_CB.Queue.ListEntry.Blink,
    *((_QWORD *)this + 2),
    0LL,
    &v31,
    0LL);
  v14 = v31;
  if ( !v31 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v32,
      (struct CInpLockGuard *)&WPP_MAIN_CB.Queue.ListEntry.Blink[3].Blink,
      0LL);
    v21 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v34, (int)this + 232, 0, 0, 0LL, 0LL, 0LL);
    v22 = v21[1];
    v33[0] = *v21;
    v23 = v21[2];
    v33[1] = v22;
    v24 = v21[3];
    v33[2] = v23;
    v25 = v21[4];
    v33[3] = v24;
    v26 = v21[5];
    v33[4] = v25;
    v27 = v21[6];
    v33[5] = v26;
    v28 = v21[8];
    v33[6] = v27;
    v33[7] = v21[7];
    v29 = v21[9];
    v33[8] = v28;
    v30 = v21[10];
    v33[9] = v29;
    v33[10] = v30;
    CInputDest::CInputDest((CInputDest *)v35, (const struct tagINPUTDEST *)v33);
    CInputDest::operator=((__int64)this + 392, v35);
    CInputDest::SetEmpty((CInputDest *)v35);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v32);
    if ( !*((_DWORD *)this + 98) )
      return 0LL;
    return (CPointerInfoNode *)((char *)this + 392);
  }
  if ( !CInputDest::GetThreadInfo(v31) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  if ( !*((_QWORD *)CInputDest::GetThreadInfo(v14) + 54) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  return v14;
}
