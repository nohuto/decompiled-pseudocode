/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C006E8D0
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0186FE0 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C006D770 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void (*v5)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v8[64]; // [rsp+40h] [rbp-58h] BYREF

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  *((_DWORD *)this + 302) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *((_DWORD *)this + 303) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v8, &v7);
  result = CRIMBase::CreateHandles(this, (const enum CRIMBase::DispatcherHandleName *)v8, (unsigned int)v7, v5, this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
