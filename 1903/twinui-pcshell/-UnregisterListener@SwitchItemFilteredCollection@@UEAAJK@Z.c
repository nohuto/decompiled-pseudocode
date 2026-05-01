/*
 * XREFs of ?UnregisterListener@SwitchItemFilteredCollection@@UEAAJK@Z @ 0x180356920
 * Callers:
 *     ?UnregisterListener@SwitchItemFilteredCollection@@WKI@EAAJK@Z @ 0x1800BF570 (-UnregisterListener@SwitchItemFilteredCollection@@WKI@EAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall SwitchItemFilteredCollection::UnregisterListener(SwitchItemFilteredCollection *this, unsigned int a2)
{
  return ObservableObjectArray::UnregisterListener(this, a2);
}
