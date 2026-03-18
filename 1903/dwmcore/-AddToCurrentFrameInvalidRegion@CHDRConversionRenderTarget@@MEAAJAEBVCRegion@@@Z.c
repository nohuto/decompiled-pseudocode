/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHDRConversionRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x180168600
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::AddToCurrentFrameInvalidRegion(
        void **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = FastRegion::CRegion::Union(this + 67, a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x19Eu, 0LL);
  return v4;
}
