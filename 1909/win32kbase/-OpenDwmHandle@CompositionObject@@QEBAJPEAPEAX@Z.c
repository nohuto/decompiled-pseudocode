/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003F550
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002D60 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C003E8D0 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F4C0 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01A0040 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01A0760 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01A0870 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C003F610 (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
