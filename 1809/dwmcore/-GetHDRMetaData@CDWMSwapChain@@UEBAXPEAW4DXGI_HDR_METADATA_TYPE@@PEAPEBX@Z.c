/*
 * XREFs of ?GetHDRMetaData@CDWMSwapChain@@UEBAXPEAW4DXGI_HDR_METADATA_TYPE@@PEAPEBX@Z @ 0x1800E7A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::GetHDRMetaData(
        enum DXGI_HDR_METADATA_TYPE *this,
        enum DXGI_HDR_METADATA_TYPE *a2,
        const void **a3)
{
  *a2 = this[138];
  *a3 = (const void *)*((_QWORD *)this + 70);
}
