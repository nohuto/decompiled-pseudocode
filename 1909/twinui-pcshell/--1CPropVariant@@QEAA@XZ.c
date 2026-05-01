/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x18018ACE8
 * Callers:
 *     _CDesktopPositioner::_IsViewManaged_::_1_::dtor$5 @ 0x1800E6276 (_CDesktopPositioner--_IsViewManaged_--_1_--dtor$5.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsInt32__tagpropertykey__::_1_::dtor$0 @ 0x180189FF2 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetBoolean__tagpropertykey__::_1_::dtor$0 @ 0x18018A084 (_CPropertyStoreHelperBase_IPropertyStore_--GetBoolean__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
