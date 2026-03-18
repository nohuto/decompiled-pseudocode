/*
 * XREFs of SynthesizeMouseInputWithNextPreview @ 0x1C01828F0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0086668 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizeMouseInputWithNextPreview(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct _MOUSE_INPUT_DATA *a6)
{
  CMouseProcessor *MouseProcessor; // rdi
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
    v14 = a4;
    *(_QWORD *)&v11 = a1 != 0 ? 3uLL : 0;
    v15 = v11;
    v16 = 0LL;
    v11 = v13;
    v12 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v17, a2, &v11, a5, (__int64)&v15, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct tagPOINT)&v17, a6);
  }
}
