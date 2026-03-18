/*
 * XREFs of ?OnChanged@CScenePbrMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F9030
 * Callers:
 *     ?OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F8AB0 (-OnChanged@CSceneMetallicRoughnessMaterial@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180173874 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8D5C (-ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8E90 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801F8ED4 (-ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

__int64 __fastcall CScenePbrMaterial::OnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *i; // rbx
  struct ISpectreMaterial *v6; // rdx
  __int64 v7; // rcx
  _QWORD *j; // rax

  for ( i = **(_QWORD ***)(a1 + 64); i != *(_QWORD **)(a1 + 64); i = j )
  {
    v6 = (struct ISpectreMaterial *)i[5];
    if ( !v6 )
      return 0LL;
    if ( a3 )
    {
      if ( a3 == *(_QWORD *)(a1 + 112) )
      {
        CScenePbrMaterial::ApplyEmissiveInputToSpectreResource((CScenePbrMaterial *)a1, v6);
      }
      else if ( a3 == *(_QWORD *)(a1 + 120) )
      {
        CScenePbrMaterial::ApplyNormalInputToSpectreResource((CScenePbrMaterial *)a1, v6);
      }
      else if ( a3 == *(_QWORD *)(a1 + 128) )
      {
        CScenePbrMaterial::ApplyOcclusionInputToSpectreResource((CScenePbrMaterial *)a1, v6);
      }
    }
    v7 = i[2];
    if ( *(_BYTE *)(v7 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v7);
    }
  }
  return 1LL;
}
