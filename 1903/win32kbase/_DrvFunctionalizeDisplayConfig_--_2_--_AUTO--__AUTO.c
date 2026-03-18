/*
 * XREFs of _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0128E18
 * Callers:
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::_scalar_deleting_destructor_ @ 0x1C0128F50 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--_scalar_deleting_destructor_.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C012DD34 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0051134 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C0051BEC (--1AUTO_TGO@@MEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(struct D3DKMT_GETPATHSMODALITY **this)
{
  __int64 v2; // r8
  struct D3DKMT_GETPATHSMODALITY *v3; // rcx
  __int64 v4; // rcx

  *this = (struct D3DKMT_GETPATHSMODALITY *)&off_1C01D3F20;
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
