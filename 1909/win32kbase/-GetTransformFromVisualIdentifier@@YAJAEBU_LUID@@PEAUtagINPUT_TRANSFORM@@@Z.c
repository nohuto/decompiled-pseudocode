/*
 * XREFs of ?GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011C7C0
 * Callers:
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C011C9D0 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0036AEC (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z @ 0x1C01C63F8 (-ResolveInputObject@InputObjectMap@@SAJU_LUID@@PEAPEBUCompositionInputObject@@@Z.c)
 */

__int64 __fastcall GetTransformFromVisualIdentifier(const struct _LUID *a1, struct tagINPUT_TRANSFORM *a2)
{
  int Transform; // ebx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Transform = InputObjectMap::ResolveInputObject(*a1, (const struct CompositionInputObject **)&Object);
  if ( Transform >= 0 )
  {
    Transform = CompositionInputObject::QueryTransform((CompositionInputObject *)Object, a2);
    ObfDereferenceObject(Object);
  }
  return (unsigned int)Transform;
}
