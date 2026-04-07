/*
 * XREFs of ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180010D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSWRInvalidated(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CVisual::SetDirtyFlags((CTopLevelWindow3D *)((char *)this - 280), 0x80u);
}
