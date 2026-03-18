/*
 * XREFs of ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C0190260
 * Callers:
 *     ReleaseMouseButton @ 0x1C01845D0 (ReleaseMouseButton.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0032110 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C00428FC (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::AccessibilityReleaseMouseButton(CMouseProcessor *a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  _BYTE v8[8]; // [rsp+20h] [rbp-98h] BYREF
  struct tagPOINT v9[3]; // [rsp+28h] [rbp-90h] BYREF
  struct tagPOINT v10; // [rsp+40h] [rbp-78h] BYREF

  v2 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( *((_DWORD *)a1 + 2) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  memset(v9, 0, sizeof(v9));
  v7 = v2 & 1;
  if ( (v2 & 1) != 0 )
    LOWORD(v9[0].y) = 2;
  LOWORD(v5) = (_DWORD)v7 != 0 ? 2 : 0;
  if ( (v2 & 2) != 0 )
  {
    v7 = (unsigned int)-(int)v7;
    LOWORD(v5) = (_DWORD)v7 != 0 ? 10 : 8;
    LOWORD(v9[0].y) = v5;
  }
  if ( !(_WORD)v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, 2LL);
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v10, (__int64)v9, 3, 0x100u);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v10, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
}
