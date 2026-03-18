/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0100598
 * Callers:
 *     ??_E_AUTO@?1??DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAXPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C0100680 (--_E_AUTO@-1--DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAXP.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0104C14 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004D354 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C004D4D8 (--1AUTO_TGO@@MEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this)
{
  __int64 v2; // r8
  struct D3DKMT_GETPATHSMODALITY *v3; // rcx
  __int64 v4; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C018EB70;
  FreePathsModality(this[6]);
  v3 = this[7];
  if ( v3 )
    ObfDereferenceObject(v3);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v2);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v4);
  }
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
