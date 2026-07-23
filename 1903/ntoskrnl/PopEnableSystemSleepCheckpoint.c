/*
 * XREFs of PopEnableSystemSleepCheckpoint @ 0x14072474C
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     PopReadUlongPowerKey @ 0x140180AE4 (PopReadUlongPowerKey.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x1405ADFD4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x1408B2238 (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140912790 (NtQueryEnvironmentVariableInfoEx.c)
 */

__int64 PopEnableSystemSleepCheckpoint()
{
  char v0; // di
  NTSTATUS v1; // ebx
  __int32 v3; // eax
  __int32 v4; // eax
  LARGE_INTEGER InterruptTimePrecise; // rsi
  LONGLONG v6; // rax
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+70h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  if ( (int)PopReadUlongPowerKey(L"SleepReliabilityDetailedDiagnostics", (unsigned int *)&v8, 0, 0, 1u, 0) >= 0 )
    PopSleepReliabilityDetailedDiagnosticsReg = v8;
  PopCheckpointSystemSleepEnabled = 0;
  _InterlockedExchange(&PopSleepCheckpointStatus, 0);
  v0 = 0;
  if ( PopCheckpointSystemSleepEnabledReg )
    goto LABEL_9;
  if ( PopSleepReliabilityDetailedDiagnosticsReg )
  {
    v0 = 1;
LABEL_9:
    v3 = 4;
    goto LABEL_12;
  }
  if ( !byte_140443C14 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
    return (unsigned int)-1073741271;
  v3 = 1;
LABEL_12:
  _InterlockedExchange(&PopSleepCheckpointStatus, v3);
  if ( dword_1404324F0 != 2 )
  {
    v1 = -1073741822;
    v4 = 8;
LABEL_15:
    _InterlockedExchange(&PopSleepCheckpointStatus, v4);
LABEL_25:
    PopTraceSleepCheckpointInitFailure((unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = NtQueryEnvironmentVariableInfoEx(1LL, v7, &v9, &v11);
  if ( v1 < 0 )
    goto LABEL_22;
  if ( v9 <= 0x400 )
  {
    v1 = -1073740716;
    v4 = 9;
    goto LABEL_15;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v1 = PopCheckpointSystemSleepUnsafe(0);
  if ( v1 < 0 )
  {
LABEL_22:
    _InterlockedExchange(&PopSleepCheckpointStatus, 15);
  }
  else
  {
    v6 = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter) - InterruptTimePrecise.QuadPart;
    if ( v0 && (unsigned __int64)v6 > 0x186A0 )
    {
      v1 = 258;
      _InterlockedExchange(&PopSleepCheckpointStatus, 10);
      return (unsigned int)v1;
    }
    PopCheckpointSystemSleepEnabled = 1;
    v1 = 0;
  }
  if ( v1 < 0 )
    goto LABEL_25;
  return (unsigned int)v1;
}
