/*
 * XREFs of ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C003436C
 * Callers:
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x1C0033B40 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0033BB0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x1C0033B7C (-FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z.c)
 */

void __fastcall FxDmaEnabler::ReleaseResources(FxDmaEnabler *this)
{
  FxDmaEnabler *v2; // rcx

  FxDmaEnabler::FreeResources(this, &this->m_SimplexAdapterInfo);
  FxDmaEnabler::FreeResources(
    v2,
    (_FxDmaDescription *)((char *)this + ((*((_BYTE *)this + 380) & 0x10) != 0 ? 280LL : 184LL)));
  *((_BYTE *)this + 380) &= ~2u;
}
