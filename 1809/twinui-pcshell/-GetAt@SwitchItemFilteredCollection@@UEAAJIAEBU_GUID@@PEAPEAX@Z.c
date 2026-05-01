/*
 * XREFs of ?GetAt@SwitchItemFilteredCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1802F4FE0
 * Callers:
 *     ?GetAt@SwitchItemFilteredCollection@@WKI@EAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800A8690 (-GetAt@SwitchItemFilteredCollection@@WKI@EAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall SwitchItemFilteredCollection::GetAt(
        SwitchItemFilteredCollection *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  return ObservableObjectArray::GetAt(this, a2, a3, a4);
}
