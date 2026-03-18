/*
 * XREFs of ??1?$CSceneModelTransformGeneratedT@VCSceneModelTransform@@VCCompositionTransform@@@@MEAA@XZ @ 0x18019DFDC
 * Callers:
 *     ??_ECSceneModelTransform@@UEAAPEAXI@Z @ 0x18019FAA0 (--_ECSceneModelTransform@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>::~CSceneModelTransformGeneratedT<CSceneModelTransform,CCompositionTransform>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  this[7] = 0LL;
  CResource::~CResource((CResource *)this);
}
