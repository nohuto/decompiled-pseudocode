/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00486E0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002E10 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0047B80 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00484F8 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01662B0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C0166870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0166980 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C004870C (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, v3, a2);
}
