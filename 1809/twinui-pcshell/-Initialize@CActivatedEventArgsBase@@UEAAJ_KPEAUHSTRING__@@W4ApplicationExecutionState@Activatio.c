/*
 * XREFs of ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE@Z @ 0x1803BF130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1803B4090 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::Initialize(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  unsigned int v7; // ebx

  v7 = *(_BYTE *)(a1 + 85) != 0 ? 0x8000FFFF : 0;
  if ( *(_BYTE *)(a1 + 85) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    RoOriginateError(v7, 0LL);
  }
  else
  {
    *(_BYTE *)(a1 + 86) = a6;
    *(_BYTE *)(a1 + 84) = a5;
    *(_QWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 60) = a4;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16, a3, a1 + 56);
    if ( (v7 & 0x80000000) == 0 )
      *(_BYTE *)(a1 + 85) = 1;
  }
  return v7;
}
