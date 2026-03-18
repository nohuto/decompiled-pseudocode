/*
 * XREFs of ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C003EDB0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002D60 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C003F590 (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C0063E50 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     NtDCompositionCreateSynchronizationObject @ 0x1C01A22F0 (NtDCompositionCreateSynchronizationObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01A2A10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01A2B20 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C003E5C4 (OpenDwmHandle.c)
 */

__int64 __fastcall CompositionObject::OpenDwmHandle(CompositionObject *this, void **a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-18h]

  return OpenDwmHandle(this, ExCompositionObjectType, 3u, a4, v5, a2);
}
