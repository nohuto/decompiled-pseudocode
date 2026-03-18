/*
 * XREFs of ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017B188
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18017AC70 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023E394 (-EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

CMILPoolResource *__fastcall wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(
        CMILPoolResource **a1)
{
  CMILPoolResource *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (CMILPoolResource *)CMILPoolResource::Release(result);
  return result;
}
