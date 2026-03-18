/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C007A9A0
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0152C48 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C007AAD0 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void (*v5)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v8[56]; // [rsp+38h] [rbp-50h] BYREF

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  *((_DWORD *)this + 278) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *((_DWORD *)this + 279) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v8, &v7);
  result = CRIMBase::CreateHandles(
             this,
             (const enum CRIMBase::DispatcherHandleName *const)v8,
             (unsigned int)v7,
             v5,
             this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
