/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C015735C
 * Callers:
 *     MouseButtonAction @ 0x1C0151460 (MouseButtonAction.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0032110 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 v9; // dx
  __int16 v10; // ax
  _BYTE v11[8]; // [rsp+20h] [rbp-88h] BYREF
  struct tagPOINT v12[3]; // [rsp+28h] [rbp-80h] BYREF
  struct tagPOINT v13; // [rsp+40h] [rbp-68h] BYREF

  if ( (PVOID)PsGetCurrentProcess(a1) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredMsgKM("Caller is not expected");
  if ( *((_DWORD *)a1 + 4) != 1 )
    MicrosoftTelemetryAssertTriggeredMsgKM("This should be desktop only");
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)(a2 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  memset(v12, 0, sizeof(v12));
  v9 = 1;
  if ( a2 != 1 )
    v9 = 4;
  v10 = 2 * v9;
  if ( a3 != 1 )
    v10 = v9;
  LOWORD(v12[0].y) = v10;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v13, (__int64)v12, 2, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v13, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
}
