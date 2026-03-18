/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1C001A070
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A0EC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rbp
  int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rax
  void *v10; // rdx
  void *v11; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006E28A;
  *(_DWORD *)(a1 + 32) = 4;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = &unk_1C006E28A;
      v11 = &unk_1C006E28A;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *(void **)(v1 + 560);
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(void **)(v1 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        6,
        29,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v4,
        v1,
        (__int64)v10,
        (__int64)v11);
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C006E28A;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    30,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v4,
    v1,
    (__int64)v2,
    (__int64)v6);
  if ( v4 == 259 )
  {
    return 0;
  }
  else
  {
    v7 = *(unsigned int *)(a1 + 32);
    if ( v4 < 0 )
      *(_DWORD *)(a1 + 48) = v4;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v7);
  }
  return (unsigned int)v4;
}
