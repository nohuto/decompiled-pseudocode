/*
 * XREFs of ?GetHDRMetaData@CDWMSwapChain@@UEBAXPEAW4DXGI_HDR_METADATA_TYPE@@PEAPEBX@Z @ 0x1800DA9D0
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
  *a2 = this[140];
  *a3 = (const void *)*((_QWORD *)this + 71);
}
