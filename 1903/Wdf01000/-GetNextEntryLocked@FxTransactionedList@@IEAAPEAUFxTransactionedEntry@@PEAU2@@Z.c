/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019AA0
 * Callers:
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C000EE60 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010EF0 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C0054008 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0064968 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007E050 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C007E530 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C0080BCC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0084C44 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008C680 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C008C774 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008F758 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008F7D8 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0095950 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C0095980 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
 * Callees:
 *     <none>
 */

FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *result; // rax
  FxTransactionedEntry *p_m_ListHead; // rcx

  if ( !Entry )
    Entry = (FxTransactionedEntry *)&this->m_ListHead;
  result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  while ( result != p_m_ListHead )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
    result = (FxTransactionedEntry *)result->m_ListLink.Flink;
  }
  return 0LL;
}
