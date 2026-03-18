/*
 * XREFs of ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x1800058C0
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800057D4 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIImageSource@@PEAV-$TMilRect.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180199F6C (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x1800059C4 (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@$$QEAUCache@CGradientSource@@@Z @ 0x180005A18 (--$emplace@AEAPEAVCD3DDeviceLevel1@@UCache@CGradientSource@@@-$_Tree@V-$_Tmap_traits@PEBVCD3DDev.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D62C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTrea.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGradientSource::FindExistingGradient(
        CGradientSource *this,
        struct CD3DDeviceLevel1 *a2,
        char a3,
        const struct CGradientSource::RetrievalParams *a4)
{
  char v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r11
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int128 v20; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+70h] [rbp+30h] BYREF
  struct CD3DDeviceLevel1 *v23; // [rsp+78h] [rbp+38h] BYREF

  v23 = a2;
  v6 = 1;
  if ( a3 )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 1);
    v8 = (_QWORD *)*v7;
    v22 = (_QWORD *)*v7;
    while ( v8 != v7 )
    {
      v16 = v8[5];
      if ( v16 )
      {
        *(_QWORD *)(v16 + 40) = 0LL;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v8 + 5);
      }
      v17 = v8[6];
      if ( v17 )
      {
        v8[6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>,std::_Iterator_base0>::operator++(&v22);
      v8 = v22;
    }
  }
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (char *)this + 8,
    &v22,
    &v23);
  v10 = v22;
  if ( v22 == (_QWORD *)*v9 )
  {
    v20 = 0LL;
    ((void (__fastcall *)(_QWORD *, _QWORD **, struct CD3DDeviceLevel1 **, __int128 *))std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::emplace<CD3DDeviceLevel1 * &,CGradientSource::Cache>)(
      v9,
      &v21,
      &v23,
      &v20);
    v11 = *((_QWORD *)&v20 + 1);
    if ( *((_QWORD *)&v20 + 1) )
    {
      v18 = **((_QWORD **)&v20 + 1);
      *((_QWORD *)&v20 + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(v18 + 16))(v11);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v20);
    v10 = v21;
  }
  if ( *(_QWORD *)a4 )
  {
    v12 = v10[5];
    if ( v12 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 16) + 88LL))(v12 + 16) )
    {
      v22 = (_QWORD *)v10[5];
      v14 = v22;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v22);
      v15 = *(_QWORD **)a4;
      v22 = 0LL;
      *v15 = v14;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v22);
    }
    else
    {
      v6 = 0;
    }
  }
  if ( *((_QWORD *)a4 + 1) )
  {
    v19 = v10[6];
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      **((_QWORD **)a4 + 1) = v19;
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
