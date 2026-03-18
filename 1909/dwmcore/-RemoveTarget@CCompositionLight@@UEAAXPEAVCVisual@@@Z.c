/*
 * XREFs of ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x1800C1310
 * Callers:
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1800C12E0 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C1348 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveTarget(CCompositionLight *this, struct CVisual *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  struct CVisual *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  DynArray<CVisual *,0>::Remove((char *)this + 80, &v7, a3, a4);
  DynArray<CVisual *,0>::Remove((char *)this + 120, &v7, v5, v6);
}
