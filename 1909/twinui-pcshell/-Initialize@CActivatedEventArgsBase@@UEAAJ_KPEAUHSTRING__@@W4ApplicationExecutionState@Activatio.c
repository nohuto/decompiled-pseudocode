/*
 * XREFs of ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE@Z @ 0x1804410A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180435F30 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::Initialize(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  int v7; // edi

  if ( *(_BYTE *)(a1 + 85) )
  {
    v7 = -2147418113;
    MicrosoftTelemetryAssertTriggeredNoArgs();
    RoOriginateError(2147549183LL, 0LL);
  }
  else
  {
    *(_BYTE *)(a1 + 86) = a6;
    *(_BYTE *)(a1 + 84) = a5;
    *(_QWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 60) = a4;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16, a3, a1 + 56);
    if ( v7 >= 0 )
      *(_BYTE *)(a1 + 85) = 1;
  }
  return (unsigned int)v7;
}
