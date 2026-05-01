/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x18030C790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180304BF0 (-RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall CMultitaskingViewFrameElement::RemoveAllDescendants(CMultitaskingViewFrameElement *this)
{
  CMultitaskingViewElementBase::RemoveAllDescendants(this);
  if ( *((_QWORD *)this + 70) )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 70);
}
