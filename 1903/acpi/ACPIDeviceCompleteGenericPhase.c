/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C0016610
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C00147D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C0028140 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0028240 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00283C0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0028F10 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0029070 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00296B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0029800 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0029AC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0029BB0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C00501D0 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0050A30 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050B00 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C0050DE0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C0050E80 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0050F90 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00510A0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051170 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051310 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C00514E0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051740 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00518F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C0061FC0 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C000EE44 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  void *v5; // r8
  char v6; // cl
  int v8; // edi
  void *v9; // r10
  KIRQL v10; // bl
  int v11; // edx

  v4 = *(_QWORD **)(a4 + 40);
  v5 = &unk_1C006FE7D;
  v6 = 0;
  v8 = a2;
  v9 = &unk_1C006FE7D;
  if ( v4 )
  {
    a2 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (a2 & 0x200000000000LL) != 0 )
    {
      v5 = (void *)v4[70];
      if ( (a2 & 0x400000000000LL) != 0 )
        v9 = (void *)v4[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      14,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      v8,
      v6,
      (__int64)v5,
      (__int64)v9);
  }
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( v8 < 0 )
  {
    *(_DWORD *)(a4 + 256) = v8;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), 2);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v11 = AcpiPowerDpcFlags | 2;
    AcpiPowerDpcFlags = v11;
    if ( (v11 & 1) == 0 )
    {
      AcpiPowerDpcFlags = v11 | 1;
      KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v10);
  }
}
