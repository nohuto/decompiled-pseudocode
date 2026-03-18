/*
 * XREFs of ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18018FF30
 * Callers:
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180191CE0 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x18006BAEC (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveTarget(CCompositionLight *this, struct CVisual *a2)
{
  struct CVisual *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 9, &v3);
  DynArray<CVisual *,0>::Remove((__int64 *)this + 14, &v3);
}
