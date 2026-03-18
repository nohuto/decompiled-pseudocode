/*
 * XREFs of ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2A00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2AB0 (-SetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPO.c)
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801F89B0 (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 *     ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801F8B30 (-OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a3 == 18 )
  {
    if ( a2 == 11 )
    {
      if ( *(float *)a4 != *(float *)(a1 + 152) )
      {
        *(_DWORD *)(a1 + 152) = *a4;
        CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
      }
    }
    else if ( a2 == 13 && *(float *)a4 != *(float *)(a1 + 156) )
    {
      *(_DWORD *)(a1 + 156) = *a4;
      CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    }
    return 0;
  }
  if ( a3 == 69 )
  {
    if ( a2 == 10 )
    {
      *(_OWORD *)(a1 + 136) = *(_OWORD *)a4;
      CSceneMetallicRoughnessMaterial::OnBaseColorFactorChanged((CSceneMetallicRoughnessMaterial *)a1);
    }
    return 0;
  }
  v4 = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty();
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x7A5u, 0LL);
  return v6;
}
