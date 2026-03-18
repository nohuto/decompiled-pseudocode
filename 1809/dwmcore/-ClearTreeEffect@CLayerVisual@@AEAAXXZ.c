/*
 * XREFs of ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18001BD00
 * Callers:
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x18001AE88 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x180072240 (--1CLayerVisual@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLayerVisual::ClearTreeEffect(CLayerVisual *this)
{
  struct CResource **v2; // rbx
  struct CResource *v3; // rcx

  v2 = (struct CResource **)(*(__int64 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 184LL))(this);
  CResource::UnRegisterNotifierInternal(this, *v2);
  v3 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  WPF::ProcessHeapImpl::Free(v2);
  *((_QWORD *)this + 71) = 0LL;
}
