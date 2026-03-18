/*
 * XREFs of ACPIBuildDiscoverPowerNodeCompletion @ 0x1C00499E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_sqqDqs @ 0x1C004B334 (WPP_RECORDER_SF_sqqDqs.c)
 */

void __fastcall ACPIBuildDiscoverPowerNodeCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // r9
  signed __int32 v6; // edx

  if ( a2 >= 0 && a3 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(v5 + 136) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v5 + 16), 0x8000uLL);
    WPP_RECORDER_SF_sqqDqs(WPP_GLOBAL_Control->DeviceExtension, a2, a3, v5);
  }
  v6 = *(_DWORD *)(a1 + 32);
  if ( a2 < 0 )
    *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v6);
}
