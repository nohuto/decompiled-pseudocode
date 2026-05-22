/*
 * XREFs of ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1800F9A64
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800FA280 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1800BA7C4 (--0-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_comp_ea_1800BA7C4.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1800FB518 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r15
  size_t v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r13
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // r14
  __int64 *v21; // rsi
  _QWORD *v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 *v25; // r12
  _QWORD *v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 *v29; // r14
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 result; // rax
  __int64 v34; // [rsp+20h] [rbp-78h]
  _QWORD *v35; // [rsp+28h] [rbp-70h]
  void *v36; // [rsp+30h] [rbp-68h]
  _QWORD *v37; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  v6 = ((char *)a2 - (char *)*a1) / 80;
  v7 = (__int64)((unsigned __int128)(((char *)a1[1] - (char *)*a1) * (__int128)0x6666666666666667LL) >> 64) >> 5;
  v8 = (v7 >> 63) + v7;
  v38 = v8;
  if ( v8 == 0x333333333333333LL )
    std::_Xlength_error("vector<T> too long");
  v9 = v8 + 1;
  v10 = ((char *)a1[2] - (char *)*a1) / 80;
  v11 = v10 >> 1;
  if ( v10 <= 0x333333333333333LL - (v10 >> 1) )
  {
    v12 = v11 + v10;
    if ( v11 + v10 < v9 )
      v12 = v9;
  }
  else
  {
    v12 = v9;
  }
  v13 = 80 * v12;
  if ( v12 > 0x333333333333333LL )
    v13 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
  v15 = v14;
  v36 = v14;
  v34 = 10 * v6;
  v16 = &v14[10 * v6];
  v17 = v16 + 10;
  v35 = v16 + 10;
  try
  {
    v18 = *a3;
    *a3 = 0LL;
    *v16 = v18;
    v19 = a3 + 1;
    v16[1] = 0LL;
    if ( v16 + 1 != a3 + 1 )
    {
      v16[1] = *v19;
      *v19 = 0LL;
    }
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
      (__int64)(v16 + 2),
      (__int64)(a3 + 2));
    v37 = v16;
    v20 = a1[1];
    if ( v4 == v20 )
    {
      v21 = *a1;
      v22 = v15;
      while ( v21 != v20 )
      {
        v23 = *v21;
        *v21 = 0LL;
        *v22 = v23;
        v24 = v21 + 1;
        v22[1] = 0LL;
        if ( v22 + 1 != v21 + 1 )
        {
          v22[1] = *v24;
          *v24 = 0LL;
        }
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
          (__int64)(v22 + 2),
          (__int64)(v21 + 2));
        v22 += 10;
        v21 += 10;
      }
    }
    else
    {
      v25 = *a1;
      v26 = v15;
      while ( v25 != v4 )
      {
        v27 = *v25;
        *v25 = 0LL;
        *v26 = v27;
        v28 = v25 + 1;
        v26[1] = 0LL;
        if ( v26 + 1 != v25 + 1 )
        {
          v26[1] = *v28;
          *v28 = 0LL;
        }
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
          (__int64)(v26 + 2),
          (__int64)(v25 + 2));
        v26 += 10;
        v25 += 10;
      }
      v37 = v15;
      v29 = a1[1];
      while ( v4 != v29 )
      {
        v30 = *v4;
        *v4 = 0LL;
        *v17 = v30;
        v31 = v4 + 1;
        v17[1] = 0LL;
        if ( v17 + 1 != v4 + 1 )
        {
          v17[1] = *v31;
          *v31 = 0LL;
        }
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
          (__int64)(v17 + 2),
          (__int64)(v4 + 2));
        v17 += 10;
        v4 += 10;
      }
    }
    std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v15, v38 + 1, v12);
    result = (__int64)&(*a1)[v34];
  }
  catch ( ... )
  {
    std::vector<ContextualProcessorBuffer::InputSample>::_Destroy(v32, v37, v35);
    std::_Deallocate<16,0>(v36, (const struct std::nothrow_t *)(80 * v12));
    throw;
  }
  return result;
}
