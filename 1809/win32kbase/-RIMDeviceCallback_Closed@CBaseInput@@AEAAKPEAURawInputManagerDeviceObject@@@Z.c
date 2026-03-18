/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00954C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(
        CBaseInput *this,
        struct RawInputManagerDeviceObject *a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)this + 132);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)this + 132);
  }
  *((_QWORD *)this + 132) = v3 - 1;
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 88);
}
