/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00806AC
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0002D60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00095E0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C008922C (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     CreateSharedResourceObject @ 0x1C008941C (CreateSharedResourceObject.c)
 *     NtDCompositionSetMaterialProperty @ 0x1C008E410 (NtDCompositionSetMaterialProperty.c)
 *     CreateSharedSystemVisualObject @ 0x1C009A530 (CreateSharedSystemVisualObject.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01A2A10 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C01A2B20 (NtDCompositionSetChildRootVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0080730 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct DirectComposition::ResourceObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 1LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
