/*
 * XREFs of ?OnNormalInputChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7B78
 * Callers:
 *     ?SetNormalInput@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCSceneMaterialInput@@@Z @ 0x1801A08E8 (-SetNormalInput@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJPEAVCS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F77A0 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CScenePbrMaterial::OnNormalInputChanged(CScenePbrMaterial *this)
{
  _QWORD *i; // rbx
  struct ISpectreMaterial *v3; // rdx
  __int64 v4; // rcx
  _QWORD *j; // rax

  for ( i = (_QWORD *)**((_QWORD **)this + 8); i != *((_QWORD **)this + 8); i = j )
  {
    v3 = (struct ISpectreMaterial *)i[5];
    if ( v3 )
    {
      CScenePbrMaterial::ApplyNormalInputToSpectreResource(this, v3);
      (*(void (__fastcall **)(CScenePbrMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
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
