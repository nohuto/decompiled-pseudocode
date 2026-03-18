/*
 * XREFs of ?SetNormalScale@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x1801A098C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7BF8 (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetNormalScale(float *a1, float a2)
{
  if ( a2 != a1[26] )
  {
    a1[26] = a2;
    CScenePbrMaterial::OnNormalScaleChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
