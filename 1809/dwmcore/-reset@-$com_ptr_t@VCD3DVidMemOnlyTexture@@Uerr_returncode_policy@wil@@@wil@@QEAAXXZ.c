/*
 * XREFs of ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015757C
 * Callers:
 *     ?ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ @ 0x180156FC4 (-ReleaseSpatialCompositor@CSpatialResourceManager@@AEAAXXZ.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18020073C (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 */

CD3DSurface *__fastcall wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(CD3DSurface **a1)
{
  CD3DSurface *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CD3DSurface *)CD3DSurface::Release(result);
  return result;
}
