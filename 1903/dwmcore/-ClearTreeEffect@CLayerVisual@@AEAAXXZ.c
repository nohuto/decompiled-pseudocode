/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180020330
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180020200 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800CF590 (--1CLayerVisual@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(CLayerVisual *this)
{
  struct CResource **v2; // rbx
  struct CResource *v3; // rcx

  v2 = (struct CResource **)(*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 224LL))(this);
  CResource::UnRegisterNotifierInternal(this, *v2);
  v3 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  operator delete(v2);
  *((_QWORD *)this + 71) = 0LL;
}
