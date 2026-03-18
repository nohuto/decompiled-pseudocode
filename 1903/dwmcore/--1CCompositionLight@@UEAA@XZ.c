/*
 * XREFs of ??1CCompositionLight@@UEAA@XZ @ 0x18002EB40
 * Callers:
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180016110 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x18002EB00 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x1801C7110 (--_GCCompositionLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x1801D0780 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x1801D2040 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionEnvironmentLight@@UEAAPEAXI@Z @ 0x18020F3E0 (--_GCCompositionEnvironmentLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x18002EBD4 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C4D0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_BYTE *)this + 244) == 0;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 9) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( !v1 )
    CSceneResourceManager::UnregisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
      (CCompositionLight *)((char *)this + 72));
  CCompositionLight::RemoveAllTargets(this, 0LL);
  CCompositionLight::RemoveAllTargets(this, 1LL);
  v3 = *((_QWORD *)this + 21);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 80);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
