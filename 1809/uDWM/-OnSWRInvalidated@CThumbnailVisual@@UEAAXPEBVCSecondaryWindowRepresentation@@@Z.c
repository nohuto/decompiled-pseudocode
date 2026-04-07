/*
 * XREFs of ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180008C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnSWRInvalidated(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)((char *)this - 360), 0x80u);
}
