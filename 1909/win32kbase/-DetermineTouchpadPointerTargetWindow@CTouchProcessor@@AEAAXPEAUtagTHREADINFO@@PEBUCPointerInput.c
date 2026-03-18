/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01639E8
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C015B794 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01635DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01697A8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016F27C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        struct tagQ *a5,
        unsigned int a6,
        int a7,
        int *a8,
        struct tagPOINT *a9,
        struct CInputDest *a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  CInputDest *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  struct CInputDest *v24; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v25[128]; // [rsp+50h] [rbp-C8h] BYREF

  CInputDest::SetEmpty(a10, (__int64)a2, (__int64)a3);
  if ( (*((_DWORD *)a3 + 28) & 0x10) != 0 && !a6 )
    memset((char *)a5 + 456, 0, 0x20uLL);
  if ( (*((_DWORD *)a4 + 47) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 47) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 114) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 58) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 118) = *a8;
        *(struct tagPOINT *)((char *)a5 + 476) = *a9;
      }
    }
  }
  else if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a4 + 2), a7, &v24, a8) )
  {
    CTouchProcessor::GetPointerOffset(this, *((_WORD *)a4 + 90), a9);
    CInputDest::operator=((__int64)a10, (__int64)v24, v17);
  }
  else if ( *((_DWORD *)a5 + 114) )
  {
    *a8 = 0;
    *a9 = 0LL;
    v18 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 58), 1);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 40);
      if ( *(char *)(v19 + 20) >= 0 && *(char *)(v19 + 19) >= 0 )
      {
        *a8 = *((_DWORD *)a5 + 118);
        *a9 = *(struct tagPOINT *)((char *)a5 + 476);
        v20 = CInputDest::CInputDest((CInputDest *)v25, (struct tagWND *const)v18);
        CInputDest::operator=((__int64)a10, v20, v21);
        CInputDest::SetEmpty((CInputDest *)v25, v22, v23);
      }
    }
  }
  else if ( *(_DWORD *)a10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  }
}
