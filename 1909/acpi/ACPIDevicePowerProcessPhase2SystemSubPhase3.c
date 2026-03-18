/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0050E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0052044 (WPP_RECORDER_SF_qd.c)
 *     ACPIWakeRestoreEnables @ 0x1C0061F54 (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-28h]

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      65,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      0);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1 || v4 != 5 )
    goto LABEL_8;
  v6 = ACPIWakeRestoreEnables(v5, a1);
  v1 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v6;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x42u,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v8);
  }
  result = 259LL;
  if ( v1 != 259 )
  {
LABEL_8:
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
