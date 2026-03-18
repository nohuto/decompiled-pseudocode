/*
 * XREFs of ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C018DEC8
 * Callers:
 *     MouseButtonAction @ 0x1C0182360 (MouseButtonAction.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C004E23C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(CMouseProcessor *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 v9; // dx
  __int16 v10; // ax
  _BYTE v11[8]; // [rsp+20h] [rbp-98h] BYREF
  struct tagPOINT v12[3]; // [rsp+28h] [rbp-90h] BYREF
  struct tagPOINT v13; // [rsp+40h] [rbp-78h] BYREF

  v4 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( *((_DWORD *)a1 + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( a3 > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (unsigned int)(v4 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  memset(v12, 0, sizeof(v12));
  v9 = 1;
  if ( v4 != 1 )
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
