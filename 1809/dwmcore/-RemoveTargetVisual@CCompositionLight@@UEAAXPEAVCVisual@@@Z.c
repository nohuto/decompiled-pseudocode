/*
 * XREFs of ?RemoveTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x1800EF110
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x18006BAEC (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveTargetVisual(CCompositionLight *this, struct CVisual *a2)
{
  struct CVisual *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  DynArray<CVisual *,0>::Remove((__int64 *)this + 9, &v2);
}
