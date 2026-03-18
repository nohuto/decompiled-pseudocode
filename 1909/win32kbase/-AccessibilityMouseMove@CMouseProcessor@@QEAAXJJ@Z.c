/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C018DFCC
 * Callers:
 *     MouseMove @ 0x1C01823A0 (MouseMove.c)
 * Callees:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C004E23C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // esi
  __int64 v6; // [rsp+20h] [rbp-98h] BYREF
  int v7; // [rsp+28h] [rbp-90h]
  int v8; // [rsp+2Ch] [rbp-8Ch]
  __int64 v9; // [rsp+30h] [rbp-88h]
  struct tagPOINT v10; // [rsp+40h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  if ( *((_DWORD *)this + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v7 = 0;
  v6 = 0LL;
  v8 = v4;
  v9 = v3;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v10, (__int64)&v6, 1, 0x100u);
  CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v10, 0LL);
}
