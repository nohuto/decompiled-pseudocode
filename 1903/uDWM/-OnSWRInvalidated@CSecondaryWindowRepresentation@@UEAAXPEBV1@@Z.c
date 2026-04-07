/*
 * XREFs of ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x18008B380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSecondaryWindowRepresentation::OnSWRInvalidated(
        CSecondaryWindowRepresentation *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CSecondaryWindowRepresentation::SetDirtyFlags((CSecondaryWindowRepresentation *)((char *)this - 16), 1);
}
