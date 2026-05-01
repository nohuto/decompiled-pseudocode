/*
 * XREFs of ??1CPropVariant@@QEAA@XZ @ 0x1801401DC
 * Callers:
 *     _CDesktopPositioner::_IsViewManaged_::_1_::dtor$5 @ 0x1800ABFE6 (_CDesktopPositioner--_IsViewManaged_--_1_--dtor$5.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetAsInt32__tagpropertykey__::_1_::dtor$0 @ 0x18013F4F2 (_CPropertyStoreHelperBase_IPropertyStore_--GetAsInt32__tagpropertykey__--_1_--dtor$0.c)
 *     _CPropertyStoreHelperBase_IPropertyStore_::GetBoolean__tagpropertykey__::_1_::dtor$0 @ 0x18013F584 (_CPropertyStoreHelperBase_IPropertyStore_--GetBoolean__tagpropertykey__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CPropVariant::~CPropVariant(PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
