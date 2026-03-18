/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01378E0
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0143E40 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0130E94 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01374A8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C013CFF4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01426CC (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v17; // rax
  __int64 v18; // rcx
  CInputDest *v19; // rax
  struct CInputDest *v20; // [rsp+40h] [rbp-118h] BYREF
  _BYTE v21[192]; // [rsp+50h] [rbp-108h] BYREF

  CInputDest::SetEmpty(a10);
  if ( (*((_DWORD *)a3 + 23) & 8) != 0 && !a6 )
    memset((char *)a5 + 448, 0, 0x20uLL);
  if ( (*((_DWORD *)a4 + 61) & 0x2000) != 0 )
  {
    CTouchProcessor::DeterminePointerTargetWindow(this, a2, a4, a5, a7, a8, a9, a10);
    if ( (*((_DWORD *)a4 + 61) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 112) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 57) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 116) = *a8;
        *(struct tagPOINT *)((char *)a5 + 468) = *a9;
      }
    }
  }
  else if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)a4 + 2), a7, &v20, a8) )
  {
    CTouchProcessor::GetPointerOffset(this, *((_WORD *)a4 + 118), a9);
    CInputDest::operator=((__int64)a10, (__int64)v20);
  }
  else if ( *((_DWORD *)a5 + 112) )
  {
    *a8 = 0;
    *a9 = 0LL;
    v17 = HMValidateHandleNoSecure(*((_QWORD *)a5 + 57), 1);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 40);
      if ( *(char *)(v18 + 20) >= 0 && *(char *)(v18 + 19) >= 0 )
      {
        *a8 = *((_DWORD *)a5 + 116);
        *a9 = *(struct tagPOINT *)((char *)a5 + 468);
        v19 = CInputDest::CInputDest((CInputDest *)v21, (struct tagWND *const)v17);
        CInputDest::operator=((__int64)a10, v19);
        CInputDest::SetEmpty((CInputDest *)v21);
      }
    }
  }
  else if ( *(_DWORD *)a10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
  }
}
