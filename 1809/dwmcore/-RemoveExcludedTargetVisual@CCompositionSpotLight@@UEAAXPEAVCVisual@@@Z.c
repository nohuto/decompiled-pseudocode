/*
 * XREFs of ?RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1800EF140
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x18006BAEC (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionSpotLight::RemoveExcludedTargetVisual(CCompositionSpotLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+30h] [rbp+8h] BYREF
  struct CVisual *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 14, &v3);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 21, &v4);
}
