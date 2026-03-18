/*
 * XREFs of ACPIBuildProcessThermalZonePep @ 0x1C0030CE0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00101E0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZonePep(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rsi
  int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v8; // rax
  void *v9; // rdx
  void *v10; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v2 = &unk_1C006FE7D;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), (__int64)ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v8 = *(_QWORD *)(v1 + 8);
      v9 = &unk_1C006FE7D;
      v10 = &unk_1C006FE7D;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v9 = *(void **)(v1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v10 = *(void **)(v1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x49u,
          (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
          v4,
          v1,
          (__int64)v9,
          (__int64)v10);
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C006FE7D;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x4Au,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v4,
      v1,
      (__int64)v2,
      (__int64)v6);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return (unsigned int)v4;
}
