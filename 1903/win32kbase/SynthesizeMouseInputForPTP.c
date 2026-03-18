/*
 * XREFs of SynthesizeMouseInputForPTP @ 0x1C01849C0
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C017F080 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C0183F30 (ChildProcessRootSynthesizedMouseInput.c)
 *     ApiSetSendPTPAsMouse @ 0x1C01A0910 (ApiSetSendPTPAsMouse.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0032110 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C008A928 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizeMouseInputForPTP(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int128 v11; // [rsp+38h] [rbp-99h] BYREF
  __int64 v12; // [rsp+48h] [rbp-89h]
  __int128 v13; // [rsp+58h] [rbp-79h]
  __int64 v14; // [rsp+68h] [rbp-69h]
  __int128 v15; // [rsp+78h] [rbp-59h] BYREF
  __int64 v16; // [rsp+88h] [rbp-49h]
  struct tagPOINT v17; // [rsp+98h] [rbp-39h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 0LL);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *((_QWORD *)&v11 + 1) = a1;
    *(_QWORD *)&v13 = a3;
    *((_QWORD *)&v13 + 1) = a4;
    *(_QWORD *)&v11 = a1 != 0 ? 3uLL : 0;
    v14 = a5;
    v16 = 0LL;
    v15 = v11;
    v12 = a5;
    v11 = v13;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v17, a2, &v11, a6, (__int64)&v15, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v17, 0LL);
  }
}
