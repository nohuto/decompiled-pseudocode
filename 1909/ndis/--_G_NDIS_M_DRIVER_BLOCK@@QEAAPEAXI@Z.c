/*
 * XREFs of ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C009CD78
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F60 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D9E0 (NdisLWMRegisterMiniportDriver.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0117B0C (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

_NDIS_M_DRIVER_BLOCK *__fastcall _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(_NDIS_M_DRIVER_BLOCK *this)
{
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *value; // rcx

  value = this->UnhookedCharacteristics.__ptr_.__value_;
  this->UnhookedCharacteristics.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0);
  return this;
}
