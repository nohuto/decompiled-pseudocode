/*
 * XREFs of ACPIBuildDiscoverDeviceCompletion @ 0x1C004AF40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0005F5C (WPP_RECORDER_SF_sqqDqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // r8
  const char *v7; // rax
  const char *v8; // rdx
  signed __int32 v9; // edx

  v4 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v4 + 896) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 0x4000000uLL);
    v6 = *(_QWORD *)(v4 + 8);
    v7 = (const char *)&unk_1C006FE7D;
    v8 = (const char *)&unk_1C006FE7D;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v4 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v4 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v8,
        (__int64)&WPP_RECORDER_INITIALIZED,
        0x5Au,
        (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
        "ACPIBuildDiscoverDeviceCompletion",
        v4,
        *(_QWORD *)(v4 + 896),
        a2,
        v4,
        v7,
        v8);
  }
  v9 = *(_DWORD *)(a1 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
}
