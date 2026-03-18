/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C004F590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00506E4 (WPP_RECORDER_SF_qd.c)
 *     ACPIWakeRestoreEnables @ 0x1C005FFD4 (ACPIWakeRestoreEnables.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase3(__int64 a1)
{
  int v1; // edi
  int v3; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = 0;
  *(_DWORD *)(a1 + 212) = 0;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    65,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    0);
  v3 = *(_DWORD *)(a1 + 104);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v3 != 1
    || v4 != 5
    || (v1 = ACPIWakeRestoreEnables(v5, a1),
        LODWORD(v7) = v1,
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xAu,
          0x42u,
          (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
          a1,
          v7),
        result = 259LL,
        v1 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, a1);
    return 0LL;
  }
  return result;
}
