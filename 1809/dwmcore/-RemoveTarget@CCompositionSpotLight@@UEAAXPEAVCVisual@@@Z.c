/*
 * XREFs of ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180191CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x18006BAEC (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18018FF30 (-RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionSpotLight::RemoveTarget(CCompositionSpotLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  CCompositionLight::RemoveTarget(this, a2);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 21, &v3);
}
