/*
 * XREFs of ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00B4308
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C010D520 (NdisOpenAdapterEx.c)
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
 * Callees:
 *     <none>
 */

struct NDIS_BIND_LINK_BASE *__fastcall Ndis::BindEngine::GetCurrentLink(Ndis::BindEngine *this)
{
  return this->m_currentOperation;
}
