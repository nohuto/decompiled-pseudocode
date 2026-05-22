/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x1800CE594
 * Callers:
 *     ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x1800CFE70 (-DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV-$function@$$A6AXAEAV-$ComPtr@VDataProvider.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AD54 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE834 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@_K1@Z @ 0x1800D2290 (-_Change_array@-$vector@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=5
unsigned __int64 __fastcall std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  size_t v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  unsigned __int64 v13; // r15
  char *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // r15
  _QWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 result; // rax
  __int64 v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+28h] [rbp-70h]
  void *v30; // [rsp+30h] [rbp-68h]
  _QWORD *v31; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v33; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v28 = v6 + 1;
  v7 = (a1[2] - *a1) >> 6;
  v8 = v7 >> 1;
  if ( v7 <= 0x3FFFFFFFFFFFFFFLL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 < v6 + 1 )
      v9 = v6 + 1;
  }
  else
  {
    v9 = v6 + 1;
  }
  v10 = v9 << 6;
  if ( v9 > 0x3FFFFFFFFFFFFFFLL )
    v10 = -1LL;
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v12 = v11;
  v30 = v11;
  v13 = v5 & 0xFFFFFFFFFFFFFFC0uLL;
  v33 = v13;
  v14 = (char *)v11 + v13;
  v15 = (__int64)v11 + v13 + 64;
  v29 = v15;
  try
  {
    std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
      (char *)v11 + v13,
      a3);
    v31 = v14;
    v16 = a1[1];
    if ( v3 == v16 )
    {
      v17 = *a1;
      v18 = v12;
      while ( v17 != v16 )
      {
        std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
          v18,
          v17);
        v18 += 8;
        v17 += 64LL;
      }
    }
    else
    {
      v19 = *a1;
      v20 = v12;
      while ( v19 != v3 )
      {
        v20[7] = 0LL;
        v21 = *(_QWORD *)(v19 + 56);
        if ( v21 )
        {
          if ( v21 == v19 )
          {
            v20[7] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 8LL))(v21, v20);
            std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v19, v22);
          }
          else
          {
            v20[7] = v21;
            *(_QWORD *)(v19 + 56) = 0LL;
          }
        }
        v20 += 8;
        v19 += 64LL;
      }
      v31 = v12;
      v23 = a1[1];
      while ( v3 != v23 )
      {
        *(_QWORD *)(v15 + 56) = 0LL;
        v24 = *(_QWORD *)(v3 + 56);
        if ( v24 )
        {
          if ( v24 == v3 )
          {
            *(_QWORD *)(v15 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 8LL))(v24, v15);
            std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v3, v25);
          }
          else
          {
            *(_QWORD *)(v15 + 56) = v24;
            *(_QWORD *)(v3 + 56) = 0LL;
          }
        }
        v15 += 64LL;
        v3 += 64LL;
      }
      v13 = v33;
    }
    std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Change_array(a1, v12, v28, v9);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Destroy(v26, v31, v29);
    std::_Deallocate<16,0>(v30, (const struct std::nothrow_t *)(v9 << 6));
    throw;
  }
  return result;
}
