/*
 * XREFs of PopGetSettingValue @ 0x1406A0DB8
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     PsGetProcessSessionIdEx @ 0x1400F17F0 (PsGetProcessSessionIdEx.c)
 *     PopFindPowerSettingConfiguration @ 0x14069E2BC (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x1406A0F68 (PopMarshalSettingValues.c)
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
