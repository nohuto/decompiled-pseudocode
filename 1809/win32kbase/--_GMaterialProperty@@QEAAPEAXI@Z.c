/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C005CD5C
 * Callers:
 *     DCompositionSessionUninitialize @ 0x1C0059620 (DCompositionSessionUninitialize.c)
 *     FindOrCreateMaterialProperty @ 0x1C008B638 (FindOrCreateMaterialProperty.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

MaterialProperty *__fastcall MaterialProperty::`scalar deleting destructor'(MaterialProperty *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  Win32FreePool((__int64)this);
  return this;
}
