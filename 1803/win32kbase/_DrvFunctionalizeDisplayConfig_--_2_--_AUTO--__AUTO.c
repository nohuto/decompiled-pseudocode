/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00CB948
 * Callers:
 *     ??_E_AUTO@?1??DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAXPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00CBA10 (--_E_AUTO@-1--DrvFunctionalizeDisplayConfig@@YAJPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IPEAXP.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00D4D70 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00480E4 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C004B338 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this)
{
  int v2; // r8d
  struct D3DKMT_GETPATHSMODALITY *v3; // rcx
  __int64 v4; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C0172E68;
  FreePathsModality(this[6]);
  v3 = this[7];
  if ( v3 )
    ObfDereferenceObject(v3);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v2);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v4);
  }
  AUTO_TGO::~AUTO_TGO((AUTO_TGO *)this);
}
