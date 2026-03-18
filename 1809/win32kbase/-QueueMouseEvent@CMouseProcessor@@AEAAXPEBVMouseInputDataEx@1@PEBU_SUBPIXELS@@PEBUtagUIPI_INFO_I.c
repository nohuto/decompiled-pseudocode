/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030860
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0030BA4 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C00311BC (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00311F0 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0031264 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     IsEqualInputSource @ 0x1C0034590 (IsEqualInputSource.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C0095320 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C009533C (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01579B8 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4)
{
  bool v7; // r14
  char *v8; // rdi
  __int64 v9; // rbx
  struct CMouseProcessor::RawMouseEvent *v10; // rax
  int v11; // edx
  struct CMouseProcessor::RawMouseEvent *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  char v22; // [rsp+30h] [rbp-99h]
  char v23; // [rsp+31h] [rbp-98h]
  char v24; // [rsp+32h] [rbp-97h]
  __int64 v25; // [rsp+38h] [rbp-91h] BYREF
  int v26; // [rsp+40h] [rbp-89h] BYREF
  int v27; // [rsp+44h] [rbp-85h] BYREF
  const struct _SUBPIXELS *v28; // [rsp+48h] [rbp-81h] BYREF
  __int128 v29; // [rsp+50h] [rbp-79h] BYREF
  __int64 v30; // [rsp+60h] [rbp-69h] BYREF
  int v31; // [rsp+68h] [rbp-61h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  __int128 *v33; // [rsp+90h] [rbp-39h]
  __int64 v34; // [rsp+98h] [rbp-31h]
  int *v35; // [rsp+A0h] [rbp-29h]
  __int64 v36; // [rsp+A8h] [rbp-21h]
  int *v37; // [rsp+B0h] [rbp-19h]
  __int64 v38; // [rsp+B8h] [rbp-11h]
  const struct _SUBPIXELS **v39; // [rsp+C0h] [rbp-9h]
  __int64 v40; // [rsp+C8h] [rbp-1h]
  __int64 *v41; // [rsp+D0h] [rbp+7h]
  __int64 v42; // [rsp+D8h] [rbp+Fh]

  v28 = a3;
  v23 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v7 = 0;
  v24 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v22 = 0;
  v30 = 0LL;
  v31 = 0;
  if ( !v23 || (int)IsEditionComputeInjectorUIPISupported() < 0 )
    goto LABEL_2;
  v17 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
  if ( a4 )
  {
    if ( v17 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    v21 = *((_DWORD *)a4 + 2);
    v30 = *(_QWORD *)a4;
    v31 = v21;
  }
  else
  {
    if ( v17 )
      goto LABEL_2;
    EditionComputeInjectorUIPI(&v30);
  }
  v22 = 1;
LABEL_2:
  RIMLockExclusive((char *)this + 2408);
  if ( *((_WORD *)this + 1201) )
    v8 = (char *)this + 144 * *((unsigned __int16 *)this + 1200) + 96;
  else
    v8 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v25);
  v9 = v25;
  if ( v8
    && !*((_WORD *)v8 + 8)
    && (unsigned __int8)IsEqualInputSource(v8 + 80, &v25)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v7 = *(_QWORD *)(v8 + 124) == *((_QWORD *)a2 + 8);
  }
  v10 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 96), v7);
  v12 = v10;
  if ( v7 )
  {
    if ( !v10 )
      MicrosoftTelemetryAssertTriggeredMsgKM("We should always be able to obtain RawMouseEvent* for coalescing");
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v11, 10, 18, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
    EtwTraceMouseInputCoalesced();
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 6));
  }
  else
  {
    v13 = *((_QWORD *)this + 1);
    if ( !v10 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(v13, v11, 10, 19, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
      *((_QWORD *)this + 302) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 2408, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionInitiateMouseEventProcessing(1LL);
      InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 6), 4LL);
      return;
    }
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_(v13, v11, 10, 20, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
    *((_WORD *)v12 + 8) = *((_WORD *)a2 + 2);
    *((_WORD *)v12 + 9) = *((_WORD *)a2 + 3);
    *((_DWORD *)v12 + 5) = *((_DWORD *)a2 + 2);
    *((_WORD *)v12 + 12) = *((_WORD *)a2 + 1);
    *((_QWORD *)v12 + 10) = v9;
    *(_QWORD *)((char *)v12 + 124) = *((_QWORD *)a2 + 8);
  }
  *(_OWORD *)v12 = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)v12 + 4) = *((unsigned int *)a2 + 5);
  *((_QWORD *)v12 + 7) = 0LL;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x10000LL) )
  {
    v25 = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v12 + 6) = v25;
    *((_QWORD *)v12 + 5) = 0LL;
  }
  else
  {
    *((struct tagPOINT *)v12 + 6) = gptCursorAsync;
    v25 = *(_QWORD *)((char *)a2 + 12);
    *((_QWORD *)v12 + 5) = v25;
    if ( v28 )
      *((_QWORD *)v12 + 7) = *(_QWORD *)v28;
  }
  *((_OWORD *)v12 + 4) = *(_OWORD *)((char *)a2 + 40);
  *((_DWORD *)v12 + 22) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
  if ( v22 )
  {
    if ( !v23 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    *(_QWORD *)&v29 = v30;
    DWORD2(v29) = v31;
    BYTE12(v29) = 1;
    *(_OWORD *)((char *)v12 + 92) = v29;
  }
  *((_QWORD *)this + 302) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 2408, 0LL);
  KeLeaveCriticalRegion();
  if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x40uLL) )
  {
    *(_QWORD *)&v29 = *((_QWORD *)v12 + 9);
    v33 = &v29;
    v26 = *((_DWORD *)v12 + 12);
    v35 = &v26;
    v27 = *((_DWORD *)v12 + 13);
    v37 = &v27;
    LODWORD(v28) = *((unsigned __int16 *)v12 + 8);
    v39 = &v28;
    LODWORD(v25) = *((unsigned __int16 *)v12 + 9);
    v41 = &v25;
    v34 = 8LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C01A1AA8, 0LL, 0LL, 7u, &pData);
  }
  if ( v24 )
    ApiSetEditionInitiateMouseEventProcessing(0LL);
}
