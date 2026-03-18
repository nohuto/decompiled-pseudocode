/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0030C8C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0031458 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0031060 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031188 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C00311C0 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0031258 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00312CC (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     IsEqualInputSource @ 0x1C0038560 (IsEqualInputSource.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z @ 0x1C004A4AC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C00A83B0 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00A83CC (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E6F0 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4,
        struct tagPOINT *a5)
{
  bool v8; // r14
  char v9; // r12
  char *v10; // r13
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rdi
  __int64 v13; // rbx
  struct CMouseProcessor::RawMouseEvent *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct CMouseProcessor::RawMouseEvent *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  char v27; // [rsp+30h] [rbp-B1h]
  char v28; // [rsp+31h] [rbp-B0h]
  __int64 v29; // [rsp+38h] [rbp-A9h] BYREF
  int v30; // [rsp+40h] [rbp-A1h] BYREF
  struct tagPOINT *v31; // [rsp+48h] [rbp-99h] BYREF
  const struct _SUBPIXELS *v32; // [rsp+50h] [rbp-91h] BYREF
  __int128 v33; // [rsp+58h] [rbp-89h] BYREF
  int v34; // [rsp+68h] [rbp-79h]
  __int64 v35; // [rsp+70h] [rbp-71h] BYREF
  int v36; // [rsp+78h] [rbp-69h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-61h] BYREF
  __int128 *v38; // [rsp+A0h] [rbp-41h]
  __int64 v39; // [rsp+A8h] [rbp-39h]
  int *v40; // [rsp+B0h] [rbp-31h]
  __int64 v41; // [rsp+B8h] [rbp-29h]
  struct tagPOINT **v42; // [rsp+C0h] [rbp-21h]
  __int64 v43; // [rsp+C8h] [rbp-19h]
  const struct _SUBPIXELS **v44; // [rsp+D0h] [rbp-11h]
  __int64 v45; // [rsp+D8h] [rbp-9h]
  __int64 *v46; // [rsp+E0h] [rbp-1h]
  __int64 v47; // [rsp+E8h] [rbp+7h]

  v32 = a3;
  v31 = a5;
  v27 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v28 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v9 = 0;
  v35 = 0LL;
  v36 = 0;
  if ( !v27 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_2;
  v22 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
  if ( a4 )
  {
    if ( v22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
    v26 = *((_DWORD *)a4 + 2);
    v35 = *(_QWORD *)a4;
    v36 = v26;
  }
  else
  {
    if ( v22 )
      goto LABEL_2;
    EditionComputeInjectorUIPI(&v35);
  }
  v9 = 1;
LABEL_2:
  v10 = (char *)this + 2656;
  RIMLockExclusive((char *)this + 2656);
  v11 = (unsigned __int16 *)((char *)this + 88);
  if ( v11[1281] )
    v12 = &v11[80 * v11[1280]];
  else
    v12 = 0LL;
  v29 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v29);
  v13 = v29;
  if ( v12
    && !v12[14]
    && (unsigned __int8)IsEqualInputSource(v12 + 48, &v29)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v8 = *(_QWORD *)(v12 + 70) == *((_QWORD *)a2 + 10);
  }
  v14 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor::CMouseQueue *)v11, v8);
  v18 = v14;
  if ( v8 )
  {
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 6, 19, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
    EtwTraceMouseInputCoalesced();
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
    goto LABEL_10;
  }
  if ( v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 6, 21, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
    *((_WORD *)v18 + 12) = *(_WORD *)a2;
    *((_WORD *)v18 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v18 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v18 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v18 + 18) = *((_WORD *)a2 + 1);
    *((_QWORD *)v18 + 12) = v13;
    *((_DWORD *)v18 + 37) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v18 + 140) = *((_QWORD *)a2 + 10);
LABEL_10:
    *(_OWORD *)v18 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v18 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v18 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v18 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v29 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v18 + 52) = v29;
      *(_QWORD *)((char *)v18 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v18 + 52) = gptCursorAsync;
      v29 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v18 + 44) = v29;
      if ( v32 )
        *(_QWORD *)((char *)v18 + 60) = *(_QWORD *)v32;
    }
    *(_OWORD *)((char *)v18 + 72) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v18 + 11) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v18 + 26) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v9 )
    {
      if ( !v27 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      *(_QWORD *)&v33 = v35;
      DWORD2(v33) = v36;
      BYTE12(v33) = 1;
      *(_OWORD *)((char *)v18 + 108) = v33;
    }
    if ( v31 )
    {
      *((_QWORD *)&v33 + 1) = v18;
      *(_QWORD *)&v33 = &CMouseProcessor::CMoveEvent::`vftable';
      v34 = 1;
      CMouseProcessor::InformUMObservers(
        (CMouseProcessor *)&CMouseProcessor::CMoveEvent::`vftable',
        (const struct CMouseProcessor::CMouseEvent *)&v33,
        v31);
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( dword_1C020CB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x40uLL) )
    {
      *(_QWORD *)&v33 = *((_QWORD *)v18 + 10);
      v38 = &v33;
      v30 = *((_DWORD *)v18 + 13);
      v40 = &v30;
      LODWORD(v31) = *((_DWORD *)v18 + 14);
      v42 = &v31;
      LODWORD(v32) = *((unsigned __int16 *)v18 + 14);
      v44 = &v32;
      LODWORD(v29) = *((unsigned __int16 *)v18 + 15);
      v46 = &v29;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E6461, 0LL, 0LL, 7u, &pData);
    }
    if ( v28 )
      ApiSetEditionInitiateMouseEventProcessing(0LL);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v15, 6, 20, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
  }
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionInitiateMouseEventProcessing(1LL);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
}
