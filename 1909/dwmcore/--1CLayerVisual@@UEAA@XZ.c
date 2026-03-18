/*
 * XREFs of ??1CLayerVisual@@UEAA@XZ @ 0x1800CF780
 * Callers:
 *     ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800CF740 (--_GCLayerVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18001E3E0 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CLayerVisual::~CLayerVisual(CLayerVisual *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 71) == 0LL;
  *(_QWORD *)this = &CLayerVisual::`vftable';
  if ( !v1 )
    CLayerVisual::ClearTreeEffect(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 70));
  *((_QWORD *)this + 70) = 0LL;
  CVisual::~CVisual(this);
}
