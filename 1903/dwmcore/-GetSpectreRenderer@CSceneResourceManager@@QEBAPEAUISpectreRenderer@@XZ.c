/*
 * XREFs of ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x18017C254
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016E244 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderTarget@@@Z @ 0x18017C0E0 (-GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderT.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C308 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18017C370 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017C4D0 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 * Callees:
 *     <none>
 */

struct ISpectreRenderer *__fastcall CSceneResourceManager::GetSpectreRenderer(CSceneResourceManager *this)
{
  struct ISpectreRenderer *result; // rax

  result = (struct ISpectreRenderer *)*((_QWORD *)this + 3);
  if ( result )
    return (struct ISpectreRenderer *)*((_QWORD *)result + 15);
  return result;
}
