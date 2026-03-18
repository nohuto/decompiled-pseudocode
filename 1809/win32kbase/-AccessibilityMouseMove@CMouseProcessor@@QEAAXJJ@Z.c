/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C015746C
 * Callers:
 *     MouseMove @ 0x1C01514B0 (MouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0032110 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, int a2, unsigned int a3)
{
  __int64 v6; // [rsp+20h] [rbp-88h] BYREF
  int v7; // [rsp+28h] [rbp-80h]
  int v8; // [rsp+2Ch] [rbp-7Ch]
  __int64 v9; // [rsp+30h] [rbp-78h]
  struct tagPOINT v10; // [rsp+40h] [rbp-68h] BYREF

  if ( *((_DWORD *)this + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("AccessibilityMouseMove - This should be desktop only");
  v6 = 0LL;
  v7 = 0;
  v8 = a2;
  v9 = a3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v10, (__int64)&v6, 1, 0x100u);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v10, 0LL);
}
