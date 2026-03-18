/*
 * XREFs of ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108
 * Callers:
 *     DCompHitTest @ 0x1C002F760 (DCompHitTest.c)
 * Callees:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C0003404 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C002F4CC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ApiSetClientCallDitThread @ 0x1C002FEA4 (ApiSetClientCallDitThread.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C002FF64 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C002FFE4 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C003D314 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C00749B8 (WPP_RECORDER_SF_ddd.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0079AAC (ApiSetAddMagnificationOutputTransform.c)
 *     ApiSetRemoveMagnificationOutputTransform @ 0x1C0079EC4 (ApiSetRemoveMagnificationOutputTransform.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BYTE *__fastcall CSpatialProcessor::HitTest(
        __int64 a1,
        _BYTE *a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  char v12; // r12
  int v13; // edx
  char v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  CSpatialProcessor *v17; // rcx
  __int64 v18; // rax
  _QWORD v21[14]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v22[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v23[192]; // [rsp+160h] [rbp+60h] BYREF

  memset(a2, 0, 0xB0uLL);
  v12 = 0;
  a2[176] = 0;
  memset(v21, 0, sizeof(v21));
  v14 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 0;
  if ( !a3 || a3 == 6 )
    v12 = 1;
  v21[2] = a5;
  HIDWORD(v21[11]) = a4;
  LODWORD(v21[12]) = a7;
  LODWORD(v21[0]) = a3;
  if ( (unsigned int)(a3 - 4) <= 1 )
    *(struct _LUID *)(a1 + 32) = InputConfig::Mouse::GetInputSpaceId();
  *(_QWORD *)((char *)&v21[12] + 4) = *(_QWORD *)(a1 + 32);
  v15 = *(_DWORD *)(a1 + 16);
  LODWORD(v21[11]) = 1065353216;
  HIDWORD(v21[8]) = 1065353216;
  LODWORD(v21[6]) = 1065353216;
  HIDWORD(v21[3]) = 1065353216;
  if ( v15 == 1 )
    goto LABEL_10;
  if ( v15 != 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_10:
    ApiSetAddMagnificationOutputTransform(&v21[2], (char *)&v21[3] + 4);
    v14 = 1;
  }
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(a1 + 8),
    v13,
    8,
    10,
    (__int64)&WPP_60fe7c87ea7f3241f2da4ccd4094f073_Traceguids,
    v21[0],
    v21[2],
    SBYTE4(v21[2]));
  InputTraceLogging::DWM::HitTestRequest(a6, (const struct _InputHitTestRequest *)v21);
  memset(v22, 0, sizeof(v22));
  if ( (unsigned int)ApiSetClientCallDitThread(v16, v21, v22) )
  {
    if ( v14 )
      ApiSetRemoveMagnificationOutputTransform(&v22[3]);
    if ( v12 )
    {
      if ( *(_DWORD *)a2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      CSpatialProcessor::SatisfyNonPointerInputSinkInfoRequest(v17, (const struct _InputHitTestResult *)v22);
    }
    else
    {
      v18 = CSpatialProcessor::ResolveDcompHitTestResultToInputDest(a1, v23, v22, LODWORD(v21[0]), a6);
      CInputDest::operator=(a2, v18);
      CInputDest::SetEmpty((CInputDest *)v23);
      if ( *(_DWORD *)a2 )
      {
        if ( a8 )
          *a8 = -((__int64)v22[17] & 1);
        if ( a9 )
          *a9 = v22[11];
      }
    }
    if ( v22[2] )
      NtClose(v22[2]);
  }
  InputTraceLogging::DWM::HitTestResult(a6, (const struct _InputHitTestResult *)v22, (const struct CInputDest *)a2);
  return a2;
}
