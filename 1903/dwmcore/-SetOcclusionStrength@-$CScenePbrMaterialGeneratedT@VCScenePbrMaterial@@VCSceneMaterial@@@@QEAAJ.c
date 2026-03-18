/*
 * XREFs of ?SetOcclusionStrength@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x1801A22F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F93F4 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetOcclusionStrength(
        float *a1,
        float a2)
{
  if ( a2 != a1[27] )
  {
    a1[27] = a2;
    CScenePbrMaterial::OnOcclusionStrengthChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
