/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0019DB0
 * Callers:
 *     ?PowerWakingDmaEnable@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010900 (-PowerWakingDmaEnable@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ @ 0x1C0012AE0 (-PowerGotoDxIoStopped@FxPkgPnp@@IEAAEXZ.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C00545E8 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00642D4 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007D6A0 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C007DB80 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z @ 0x1C008000C (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEE@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0083BB4 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008B084 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C008B178 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C008DFA8 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ @ 0x1C008E028 (-PowerDmaPowerUp@FxPkgPnp@@IEAAEXZ.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0093640 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C0093670 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
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
