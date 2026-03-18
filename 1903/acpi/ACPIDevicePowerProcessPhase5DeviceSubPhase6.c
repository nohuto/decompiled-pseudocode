/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C000EB70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C000EE44 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C0017224 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase6(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rax
  char v3; // r8
  void *v5; // rdx
  __int64 v6; // rcx
  POWER_STATE v7; // ebx
  struct _DEVICE_OBJECT *v8; // rdi
  __int64 v10; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006FE7D;
  v3 = 0;
  v5 = &unk_1C006FE7D;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(void **)(v1 + 568);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (__int64)v5;
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      10,
      80,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v3,
      (__int64)v2,
      v10);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v7.SystemState = *(_SYSTEM_POWER_STATE *)(v1 + 496);
  *(POWER_STATE *)(v1 + 336) = v7;
  v8 = *(struct _DEVICE_OBJECT **)(v1 + 720);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v8 )
    PoSetPowerState(v8, DevicePowerState, v7);
  *(_DWORD *)(a1 + 256) = 0;
  ACPIDeviceCompletePhase3Common(a1 + 208, 0LL);
  return 0LL;
}
