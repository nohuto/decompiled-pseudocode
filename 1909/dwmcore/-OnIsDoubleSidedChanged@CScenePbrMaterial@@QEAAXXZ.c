/*
 * XREFs of ?OnIsDoubleSidedChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801F7AF0
 * Callers:
 *     ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x1801A0798 (-SetIsDoubleSided@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 */

void __fastcall CScenePbrMaterial::OnIsDoubleSidedChanged(CScenePbrMaterial *this, __int64 a2)
{
  _QWORD *i; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *j; // rax

  for ( i = (_QWORD *)**((_QWORD **)this + 8); i != *((_QWORD **)this + 8); i = j )
  {
    v4 = i[5];
    if ( v4 )
    {
      LOBYTE(a2) = *((_BYTE *)this + 100);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 56LL))(v4, a2);
      (*(void (__fastcall **)(CScenePbrMaterial *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    }
    v5 = i[2];
    if ( *(_BYTE *)(v5 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v5);
    }
  }
}
