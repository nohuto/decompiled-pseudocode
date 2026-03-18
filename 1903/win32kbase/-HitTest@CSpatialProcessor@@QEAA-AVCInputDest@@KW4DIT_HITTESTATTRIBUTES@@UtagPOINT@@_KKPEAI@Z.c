/*
 * XREFs of ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C002C8E8
 * Callers:
 *     DCompHitTest @ 0x1C0083B70 (DCompHitTest.c)
 * Callees:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C0003DB0 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0031954 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C0034A14 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0034A88 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ApiSetClientCallDitThread @ 0x1C0034B08 (ApiSetClientCallDitThread.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0034D8C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0067650 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C008B464 (WPP_RECORDER_SF_ddd.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C008C19C (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1C008C358 (ApiSetRemoveMagnificationOutputTransform.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // r12
  bool v15; // r15
  DWORD LowPart; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  CSpatialProcessor *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  int v23; // eax
  _QWORD v26[14]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v27[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v28[128]; // [rsp+140h] [rbp+40h] BYREF

  memset(a2, 0, 0x78uLL);
  *((_BYTE *)a2 + 120) = 0;
  memset(v26, 0, 0x68uLL);
  v14 = 0;
  if ( a8 )
    *a8 = 0;
  v15 = !a3 || a3 == 6;
  v26[2] = a5;
  v26[11] = __PAIR64__(a7, a4);
  LODWORD(v26[0]) = a3;
  if ( (unsigned int)(a3 - 4) <= 1 )
    a1[3] = InputConfig::Mouse::GetInputSpaceId();
  v26[12] = a1[3];
  LowPart = a1[1].LowPart;
  HIDWORD(v26[10]) = 1065353216;
  LODWORD(v26[8]) = 1065353216;
  HIDWORD(v26[5]) = 1065353216;
  LODWORD(v26[3]) = 1065353216;
  if ( LowPart == 1 )
    goto LABEL_9;
  if ( LowPart != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
LABEL_9:
    ApiSetAddMagnificationOutputTransform(&v26[2], &v26[3]);
    v14 = 1;
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
      v26[0],
      v26[2],
      SBYTE4(v26[2]));
  }
  InputTraceLogging::DWM::HitTestRequest(a6, (const struct _InputHitTestRequest *)v26);
  memset(v27, 0, 0x78uLL);
  if ( (unsigned int)ApiSetClientCallDitThread(v17, v26, v27) )
  {
    if ( v14 )
      ApiSetRemoveMagnificationOutputTransform(&v27[3]);
    if ( v15 )
    {
      if ( *a2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(v19, (const struct _InputHitTestResult *)v27);
    }
    else
    {
      v21 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(a1, v28, v27, LODWORD(v26[0]), a6);
      CInputDest::operator=(a2, v21);
      CInputDest::SetEmpty((CInputDest *)v28);
      if ( *a2 )
      {
        ThreadInfo = CInputDest::GetThreadInfo((CInputDest *)a2);
        if ( ThreadInfo )
        {
          v23 = *(_DWORD *)(*((_QWORD *)ThreadInfo + 52) + 1080LL);
          if ( v23 )
            a2[29] = v23;
        }
        if ( a8 )
          *a8 = v27[11];
      }
    }
    if ( v27[2] )
      NtClose(v27[2]);
  }
  InputTraceLogging::DWM::HitTestResult(a6, (const struct _InputHitTestResult *)v27, (const struct CInputDest *)a2);
  return a2;
}
