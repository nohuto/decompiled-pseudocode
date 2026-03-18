/*
 * XREFs of ?SetHDRMetaData@CDWMSwapChain@@UEAAXW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x1800E7AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::SetHDRMetaData(CDWMSwapChain *this, enum DXGI_HDR_METADATA_TYPE a2, const void *a3)
{
  *((_DWORD *)this + 138) = a2;
  *((_QWORD *)this + 70) = a3;
}
