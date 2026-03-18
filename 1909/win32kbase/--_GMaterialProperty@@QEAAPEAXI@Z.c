/*
 * XREFs of ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C00B4D84
 * Callers:
 *     FindOrCreateMaterialProperty @ 0x1C008A0C8 (FindOrCreateMaterialProperty.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
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
