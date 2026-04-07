/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800127B0
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013130 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x180014C98 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180025A50 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z @ 0x1800B3C30 (-SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 3); i && (*(_BYTE *)(i + 80) & 1) == 0; i = *(_QWORD *)(i + 24) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
}
