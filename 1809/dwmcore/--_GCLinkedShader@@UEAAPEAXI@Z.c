/*
 * XREFs of ??_GCLinkedShader@@UEAAPEAXI@Z @ 0x1801C0770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1801C06FC (--1-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 */

CLinkedShader *__fastcall CLinkedShader::`scalar deleting destructor'(CLinkedShader *this, char a2)
{
  CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>((__int64)this + 32);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
