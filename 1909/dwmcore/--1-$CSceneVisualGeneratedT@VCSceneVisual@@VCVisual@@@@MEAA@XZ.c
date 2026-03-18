/*
 * XREFs of ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801C565C
 * Callers:
 *     ??_GCSceneVisual@@UEAAPEAXI@Z @ 0x1801C5690 (--_GCSceneVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneVisualGeneratedT<CSceneVisual,CVisual>::~CSceneVisualGeneratedT<CSceneVisual,CVisual>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[70]);
  this[70] = 0LL;
  CVisual::~CVisual((CVisual *)this);
}
