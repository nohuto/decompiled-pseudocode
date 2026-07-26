/*
 * XREFs of ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0064A5C
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00F0F44 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C00F17A0 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     <none>
 */

_NDIS_M_DRIVER_BLOCK *__fastcall _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(_NDIS_M_DRIVER_BLOCK *this)
{
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *Myptr; // rcx

  Myptr = this->UnhookedCharacteristics._Myptr;
  if ( Myptr )
    ExFreePoolWithTag(Myptr, 0);
  return this;
}
