/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800DFBB0
 * Callers:
 *     ?AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800E1264 (-AddDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJ.c)
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x1800F8C00 (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@_K1@Z @ 0x1800E60FC (-_Change_array@-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Win.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  size_t v12; // rcx
  char *v13; // r14
  __int64 v14; // r9
  char *v15; // r15
  __int64 v16; // rcx
  char *v17; // rdx
  char *v18; // rcx
  signed __int64 v19; // r9
  signed __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+80h] [rbp+8h]
  char *v24; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 8 * v6;
  v23 = 8 * v6;
  v15 = &v13[8 * v6];
  try
  {
    v16 = *a3;
    *(_QWORD *)v15 = *a3;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v14 = v23;
    }
    v24 = v15;
    v17 = a1[1];
    v18 = *a1;
    if ( v4 == v17 )
    {
      if ( v18 != v17 )
      {
        v19 = v13 - v18;
        do
        {
          *(_QWORD *)&v18[v19] = 0LL;
          if ( &v18[v19] != v18 )
          {
            *(_QWORD *)&v18[v19] = *(_QWORD *)v18;
            *(_QWORD *)v18 = 0LL;
          }
          v18 += 8;
        }
        while ( v18 != v17 );
      }
    }
    else
    {
      if ( v18 != v4 )
      {
        v20 = v13 - v18;
        do
        {
          *(_QWORD *)&v18[v20] = 0LL;
          if ( &v18[v20] != v18 )
          {
            *(_QWORD *)&v18[v20] = *(_QWORD *)v18;
            *(_QWORD *)v18 = 0LL;
          }
          v18 += 8;
        }
        while ( v18 != v4 );
        v17 = a1[1];
      }
      v24 = v13;
      if ( v4 != v17 )
      {
        v21 = (__int64)&v13[v14 - (_QWORD)v4 + 8];
        do
        {
          v18 = &v4[v21];
          *(_QWORD *)&v4[v21] = 0LL;
          if ( &v4[v21] != v4 )
          {
            *(_QWORD *)v18 = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v17 );
      }
    }
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IAttachableInputObjectSampleProxy>>::_Destroy(v18, v24, v15 + 8);
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::_Change_array(
    a1,
    v13,
    v8,
    v11);
  return (__int64)&(*a1)[v23];
}
