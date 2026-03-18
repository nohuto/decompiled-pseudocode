/*
 * XREFs of ??_ECCubeMapRenderingEffect@@UEAAPEAXI@Z @ 0x180256F90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

CCubeMapRenderingEffect *__fastcall CCubeMapRenderingEffect::`vector deleting destructor'(
        CCubeMapRenderingEffect *this,
        char a2)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
