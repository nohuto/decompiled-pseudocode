/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x1C001F050
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011A80 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B5C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001B830 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001BEC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001DFE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002CBA0 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x1C004E8A0 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C004F1A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C004F260 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C004F500 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x1C004F590 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C004F690 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C004F790 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004F850 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004F9F0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004FBB0 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004FDF0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004FF90 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x1C0060040 (ACPIWakeRestoreEnablesCompletion.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C640 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  char v6; // r10
  void *v7; // rdx
  void *v8; // r8
  __int64 v10; // rcx
  KIRQL v11; // bl
  int v12; // edx
  __int64 v13; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD **)(a4 + 40);
  v6 = 0;
  v7 = &unk_1C006E28A;
  v8 = &unk_1C006E28A;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)v4[70];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (void *)v4[71];
    }
  }
  v13 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    10,
    14,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a2,
    v6,
    v13,
    (__int64)v8);
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 < 0 )
  {
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), 2);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v12 = AcpiPowerDpcFlags | 2;
    AcpiPowerDpcFlags = v12;
    if ( (v12 & 1) == 0 )
    {
      AcpiPowerDpcFlags = v12 | 1;
      KeInsertQueueDpc(&AcpiPowerDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v11);
  }
}
