/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1C000F7E0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rdi
  const ULONG_PTR *v2; // rdx
  void *v3; // rbp
  int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax
  void *v11; // rdx
  void *v12; // rcx
  __int64 v13; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids;
  *(_DWORD *)(a1 + 32) = 4;
  v3 = &unk_1C006FE7D;
  v5 = 0;
  if ( (*(_DWORD *)(v1 + 952) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x2000000uLL);
    v5 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 712), (__int64)ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v5 < 0 )
    {
      v10 = *(_QWORD *)(v1 + 8);
      v11 = &unk_1C006FE7D;
      v12 = &unk_1C006FE7D;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v11 = *(void **)(v1 + 560);
        if ( (v10 & 0x400000000000LL) != 0 )
          v12 = *(void **)(v1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = (__int64)v11;
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v11,
          6,
          29,
          (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
          v5,
          v1,
          v13,
          (__int64)v12);
      }
    }
    v2 = &WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids;
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = &unk_1C006FE7D;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v3 = *(void **)(v1 + 560);
    if ( (v6 & 0x400000000000LL) != 0 )
      v7 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v2,
      6,
      30,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v5,
      v1,
      (__int64)v3,
      (__int64)v7);
  }
  if ( v5 == 259 )
  {
    return 0;
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 32);
    if ( v5 < 0 )
      *(_DWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v8);
  }
  return (unsigned int)v5;
}
