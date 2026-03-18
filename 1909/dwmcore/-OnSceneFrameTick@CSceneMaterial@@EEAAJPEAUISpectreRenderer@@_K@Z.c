/*
 * XREFs of ?OnSceneFrameTick@CSceneMaterial@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801F6D30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180172124 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1801F6B68 (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 */

__int64 __fastcall CSceneMaterial::OnSceneFrameTick(CSceneMaterial *this, struct ISpectreRenderer *a2)
{
  unsigned int v4; // edi
  _QWORD *i; // rbx
  __int64 (__fastcall *v6)(struct ISpectreRenderer *, _QWORD *); // rdi
  signed int v7; // eax
  __int64 v8; // rcx
  CSceneMaterial *v9; // r15
  struct CSceneMeshRendererComponent *v10; // rdx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *j; // rax

  v4 = 0;
  for ( i = (_QWORD *)**((_QWORD **)this + 1); i != *((_QWORD **)this + 1); i = j )
  {
    if ( i[5] )
    {
      v9 = (CSceneMaterial *)((char *)this - 56);
    }
    else
    {
      v6 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, _QWORD *))(*(_QWORD *)a2 + 64LL);
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(i + 5);
      v7 = v6(a2, i + 5);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x5Eu, 0LL);
        return v4;
      }
      v9 = (CSceneMaterial *)((char *)this - 56);
      (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 7) + 192LL))((char *)this - 56, i[5]);
      (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 7) + 64LL))((char *)this - 56, 0LL, 0LL);
    }
    v10 = (struct CSceneMeshRendererComponent *)i[4];
    if ( *((_BYTE *)v10 + 104) )
    {
      v11 = CSceneMaterial::ApplyTexCoordsToSpectreResource(v9, v10);
      v4 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x65u, 0LL);
        return v4;
      }
      *(_BYTE *)(i[4] + 104LL) = 0;
    }
    v13 = i[2];
    if ( *(_BYTE *)(v13 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v13);
    }
  }
  return v4;
}
