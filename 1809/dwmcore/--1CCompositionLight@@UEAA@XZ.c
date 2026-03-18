/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x180066640
 * Callers:
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1800664F0 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x1800665D0 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x18018EE90 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x18018F210 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x180190070 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800666A8 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  *(_QWORD *)this = &CCompositionLight::`vftable';
  CCompositionLight::RemoveAllTargets(this, 0LL);
  CCompositionLight::RemoveAllTargets(this, 1LL);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 112);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 72);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
