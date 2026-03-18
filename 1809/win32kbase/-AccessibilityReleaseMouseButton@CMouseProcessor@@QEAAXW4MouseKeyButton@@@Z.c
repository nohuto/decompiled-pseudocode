/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C015751C
 * Callers:
 *     ReleaseMouseButton @ 0x1C0151500 (ReleaseMouseButton.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0032110 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, char a2)
{
  int v4; // edx
  __int16 v5; // cx
  _BYTE v6[8]; // [rsp+20h] [rbp-88h] BYREF
  struct tagPOINT v7[3]; // [rsp+28h] [rbp-80h] BYREF
  struct tagPOINT v8; // [rsp+40h] [rbp-68h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredMsgKM("Caller is not expected");
  if ( *((_DWORD *)a1 + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("This should be desktop only");
  memset(v7, 0, sizeof(v7));
  v4 = a2 & 1;
  if ( (a2 & 1) != 0 )
    LOWORD(v7[0].y) = 2;
  v5 = v4 != 0 ? 2 : 0;
  if ( (a2 & 2) != 0 )
  {
    v5 = v4 != 0 ? 10 : 8;
    LOWORD(v7[0].y) = v5;
  }
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Why was this API called. There are no buttons to release");
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v8, (__int64)v7, 3, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v8, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
}
