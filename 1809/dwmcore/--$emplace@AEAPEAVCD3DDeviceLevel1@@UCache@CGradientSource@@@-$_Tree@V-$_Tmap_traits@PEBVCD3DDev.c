/*
 * XREFs of ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180005A18
 * Callers:
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x1800058C0 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@1@1@Z @ 0x180005B0C (--$_Insert_at@AEAU-$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAU-$_Tree_node@U-.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::emplace<CD3DDeviceLevel1 * &,CGradientSource::Cache>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  int v9; // r8d
  _QWORD *v10; // rcx
  __int64 *v11; // r9
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 **v14; // rax
  __int64 *v16; // rax
  __int64 *i; // rax
  __int64 v18; // rcx
  char v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v8 = *a1;
  *(_QWORD *)(v8 + 8) = *a1;
  *(_QWORD *)(v8 + 16) = *a1;
  *(_WORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = *a3;
  *(_QWORD *)(v8 + 40) = 0LL;
  if ( (_QWORD *)(v8 + 40) != a4 )
  {
    *(_QWORD *)(v8 + 40) = *a4;
    *a4 = 0LL;
  }
  v10 = a4 + 1;
  *(_QWORD *)(v8 + 48) = 0LL;
  if ( (_QWORD *)(v8 + 48) != a4 + 1 )
  {
    *(_QWORD *)(v8 + 48) = *v10;
    *v10 = 0LL;
  }
  LOBYTE(v9) = 1;
  v11 = *a1;
  v12 = (__int64 *)(*a1)[1];
  while ( !*((_BYTE *)v12 + 25) )
  {
    v11 = v12;
    if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)v12[4] )
    {
      v12 = (__int64 *)v12[2];
      LOBYTE(v9) = 0;
    }
    else
    {
      v12 = (__int64 *)*v12;
      LOBYTE(v9) = 1;
    }
  }
  v13 = v11;
  if ( (_BYTE)v9 )
  {
    if ( v11 == (__int64 *)**a1 )
    {
      LOBYTE(v9) = 1;
LABEL_9:
      v14 = (__int64 **)std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Insert_at<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>,void *> *>(
                          (_DWORD)a1,
                          (unsigned int)&v19,
                          v9,
                          (_DWORD)v11);
      *(_BYTE *)(a2 + 8) = 1;
      v13 = *v14;
      goto LABEL_10;
    }
    if ( *((_BYTE *)v11 + 25) )
    {
      v13 = (__int64 *)v11[2];
    }
    else
    {
      v16 = (__int64 *)*v11;
      if ( *(_BYTE *)(*v11 + 25) )
      {
        for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
          v13 = i;
        if ( !*((_BYTE *)v13 + 25) )
          v13 = i;
      }
      else
      {
        do
        {
          v13 = v16;
          v16 = (__int64 *)v16[2];
        }
        while ( !*((_BYTE *)v16 + 25) );
      }
    }
  }
  if ( (unsigned __int64)v13[4] < *(_QWORD *)(v8 + 32) )
    goto LABEL_9;
  v18 = *(_QWORD *)(v8 + 48);
  if ( v18 )
  {
    *(_QWORD *)(v8 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v8 + 40);
  std::_Deallocate<16,0>(v8, 56LL);
  *(_BYTE *)(a2 + 8) = 0;
LABEL_10:
  *(_QWORD *)a2 = v13;
  return a2;
}
