/*
 * XREFs of ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x1801A2058
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F91E0 (-OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetIsDoubleSided(
        CScenePbrMaterial *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 100) )
  {
    *((_BYTE *)a1 + 100) = a2;
    CScenePbrMaterial::OnIsDoubleSidedChanged(a1);
  }
  return 0LL;
}
