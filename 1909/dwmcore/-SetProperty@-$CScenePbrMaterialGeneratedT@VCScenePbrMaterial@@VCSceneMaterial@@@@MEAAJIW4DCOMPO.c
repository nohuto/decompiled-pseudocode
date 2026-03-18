/*
 * XREFs of ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A11F0
 * Callers:
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A1140 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7828 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F79F0 (-OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7BF8 (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7D04 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx

  if ( a3 == 18 )
  {
    if ( a2 )
    {
      if ( a2 == 6 )
      {
        if ( *(float *)a4 != *(float *)(a1 + 104) )
        {
          *(_DWORD *)(a1 + 104) = *a4;
          CScenePbrMaterial::OnNormalScaleChanged((CScenePbrMaterial *)a1);
        }
      }
      else if ( a2 == 8 && *(float *)a4 != *(float *)(a1 + 108) )
      {
        *(_DWORD *)(a1 + 108) = *a4;
        CScenePbrMaterial::OnOcclusionStrengthChanged((CScenePbrMaterial *)a1);
      }
    }
    else if ( *(float *)a4 != *(float *)(a1 + 80) )
    {
      *(_DWORD *)(a1 + 80) = *a4;
      CScenePbrMaterial::OnAlphaCutoffChanged((CScenePbrMaterial *)a1);
    }
    return 0;
  }
  if ( a3 == 52 )
  {
    if ( a2 == 3 )
    {
      *(_QWORD *)(a1 + 88) = *(_QWORD *)a4;
      *(_DWORD *)(a1 + 96) = a4[2];
      CScenePbrMaterial::OnEmissiveFactorChanged((CScenePbrMaterial *)a1);
    }
    return 0;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x683u, 0LL);
  return v4;
}
