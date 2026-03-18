/*
 * XREFs of ACPIBuildProcessThermalZoneHid @ 0x1C004A600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneHid(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // rdx
  char v4; // r10
  void *v5; // r8
  __int64 v6; // rcx
  signed __int32 v7; // edx

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  *(_DWORD *)(a1 + 32) = 0;
  v3 = &unk_1C006E28A;
  v4 = 0;
  v5 = &unk_1C006E28A;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v3 = *(void **)(v1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(void **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x51u,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    0,
    v4,
    (__int64)v3,
    (__int64)v5);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  return 0LL;
}
