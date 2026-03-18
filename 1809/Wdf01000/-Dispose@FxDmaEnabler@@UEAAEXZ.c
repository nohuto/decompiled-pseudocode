/*
 * XREFs of ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x1C0033B40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C003436C (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDmaEnabler::Dispose(FxDmaEnabler *this)
{
  FxDmaEnabler::ReleaseResources(this);
  if ( (*((_BYTE *)this + 380) & 1) != 0 )
    this->m_DeviceBase->RemoveDmaEnabler(this->m_DeviceBase, this);
  return 1;
}
