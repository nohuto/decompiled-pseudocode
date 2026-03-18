/*
 * XREFs of ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00657A4
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0065220 (-UpdateUserScreen@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 * Callees:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0065814 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00658F8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 */

void __fastcall CInputConfig::OnDisplayStateChange(CInputConfig *this)
{
  CInputConfig *v1; // rbx
  CInputConfig *v2; // rcx

  v1 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  if ( *((_BYTE *)v1 + 1248) )
    CInputConfig::_CreateLegacyInputSpace(v1);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v2);
}
