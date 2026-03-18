/*
 * XREFs of ?SetBaseColorFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJUD2D_VECTOR_4F@@@Z @ 0x1801A037C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801F72C0 (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetBaseColorFactor(
        __int64 a1,
        _OWORD *a2)
{
  *(_OWORD *)(a1 + 136) = *a2;
  CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
  return 0LL;
}
