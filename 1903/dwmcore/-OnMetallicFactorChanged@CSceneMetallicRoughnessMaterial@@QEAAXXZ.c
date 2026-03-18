/*
 * XREFs of ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801F8B30
 * Callers:
 *     ?SetMetallicFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x1801A2078 (-SetMetallicFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@.c)
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2A00 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 *     ?SetRoughnessFactor@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@QEAAJM@Z @ 0x1801A2D7C (-SetRoughnessFactor@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::OnMetallicFactorChanged(CSceneMetallicRoughnessMaterial *this)
{
  _QWORD *i; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD *j; // rax

  for ( i = (_QWORD *)**((_QWORD **)this + 8); i != *((_QWORD **)this + 8); i = j )
  {
    v3 = i[5];
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
      (*(void (__fastcall **)(CSceneMetallicRoughnessMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(
        this,
        0LL,
        0LL);
    }
    v4 = i[2];
    if ( *(_BYTE *)(v4 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v4);
    }
  }
}
