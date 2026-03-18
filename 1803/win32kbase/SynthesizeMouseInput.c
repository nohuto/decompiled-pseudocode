/*
 * XREFs of SynthesizeMouseInput @ 0x1C00675A0
 * Callers:
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C0127230 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ApiSetSendPTPAsMouse @ 0x1C0141544 (ApiSetSendPTPAsMouse.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0039698 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A424 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *v9; // rsi
  __int128 v10; // [rsp+38h] [rbp-41h] BYREF
  __int128 v11; // [rsp+48h] [rbp-31h] BYREF
  struct tagPOINT v12; // [rsp+58h] [rbp-21h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v9 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
  if ( v9 )
  {
    *((_QWORD *)&v10 + 1) = a1;
    *(_QWORD *)&v11 = a3;
    *((_QWORD *)&v11 + 1) = a4;
    LODWORD(v10) = a1 != 0 ? 3 : 0;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v12, a2, &v11, a5, &v10, 0LL);
    CMouseProcessor::SynthesizeMouse(v9, (struct tagPOINT)&v12, 0LL);
  }
}
