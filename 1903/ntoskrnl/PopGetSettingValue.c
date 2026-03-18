/*
 * XREFs of PopGetSettingValue @ 0x1406A3430
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     PopFindPowerSettingConfiguration @ 0x1406A177C (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x1406A35E0 (PopMarshalSettingValues.c)
 */

__int64 __fastcall PopGetSettingValue(_QWORD *a1, __int64 a2, int a3)
{
  int ProcessSessionId; // eax
  __int64 *PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, ProcessSessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(PowerSettingConfiguration, a2 + 4, (unsigned int)(a3 - 4), a2);
    KeReleaseGuardedMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
