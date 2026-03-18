/*
 * XREFs of ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C0017438
 * Callers:
 *     DCompHitTest @ 0x1C007FD40 (DCompHitTest.c)
 * Callees:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C0003DB0 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C0033CC4 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0033D38 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ApiSetClientCallDitThread @ 0x1C0033DB8 (ApiSetClientCallDitThread.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C003403C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0038234 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0052DE0 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0087084 (WPP_RECORDER_SF_ddd.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0087EAC (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1C00880F8 (ApiSetRemoveMagnificationOutputTransform.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_DWORD *__fastcall CSpatialProcessor::HitTest(
        struct _LUID *a1,
        _DWORD *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  int v11; // edx
  char v12; // r12
  bool v13; // r15
  DWORD LowPart; // eax
  __int64 v15; // rcx
  CSpatialProcessor *v16; // rcx
  __int64 v17; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  int v19; // eax
  _QWORD v22[14]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v23[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v24[128]; // [rsp+140h] [rbp+40h] BYREF

  memset(a2, 0, 0x78uLL);
  *((_BYTE *)a2 + 120) = 0;
  memset(v22, 0, 0x68uLL);
  v12 = 0;
  if ( a8 )
    *a8 = 0;
  v13 = !a3 || a3 == 6;
  v22[2] = a5;
  v22[11] = __PAIR64__(a7, a4);
  LODWORD(v22[0]) = a3;
  if ( (unsigned int)(a3 - 4) <= 1 )
    a1[3] = InputConfig::Mouse::GetInputSpaceId();
  v22[12] = a1[3];
  LowPart = a1[1].LowPart;
  HIDWORD(v22[10]) = 1065353216;
  LODWORD(v22[8]) = 1065353216;
  HIDWORD(v22[5]) = 1065353216;
  LODWORD(v22[3]) = 1065353216;
  if ( LowPart == 1 )
    goto LABEL_9;
  if ( LowPart != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_9:
    ApiSetAddMagnificationOutputTransform(&v22[2], &v22[3]);
    v12 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_ddd(
      (_DWORD)gBaseLog,
      v11,
      5,
      10,
      (__int64)&WPP_8b084b8aee793b57ef299e467cb2c8ed_Traceguids,
      v22[0],
      v22[2],
      SBYTE4(v22[2]));
  }
  InputTraceLogging::DWM::HitTestRequest(a6, (const struct _InputHitTestRequest *)v22);
  memset(v23, 0, 0x78uLL);
  if ( (unsigned int)ApiSetClientCallDitThread(v15, v22, v23) )
  {
    if ( v12 )
      ApiSetRemoveMagnificationOutputTransform(&v23[3]);
    if ( v13 )
    {
      if ( *a2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(v16, (const struct _InputHitTestResult *)v23);
    }
    else
    {
      v17 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(a1, v24, v23, LODWORD(v22[0]), a6);
      CInputDest::operator=(a2, v17);
      CInputDest::SetEmpty((CInputDest *)v24);
      if ( *a2 )
      {
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
        if ( ThreadInfo )
        {
          v19 = *(_DWORD *)(*((_QWORD *)ThreadInfo + 52) + 1080LL);
          if ( v19 )
            a2[29] = v19;
        }
        if ( a8 )
          *a8 = v23[11];
      }
    }
    if ( v23[2] )
      NtClose(v23[2]);
  }
  InputTraceLogging::DWM::HitTestResult(a6, (const struct _InputHitTestResult *)v23, (const struct CInputDest *)a2);
  return a2;
}
