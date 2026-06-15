/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800ECE40
 * Callers:
 *     _lambda_3ea8e7556f72cf8b3f162dbd37187d30_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800EC9E0 (_lambda_3ea8e7556f72cf8b3f162dbd37187d30_--operator()_Microsoft--WRL--WeakRef_const__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009E8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800D80F0 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 *v16; // r15
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 *v25; // [rsp+20h] [rbp-58h]
  void *v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+80h] [rbp+8h]
  __int64 *v28; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
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
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  try
  {
    v14 = (__int64)v13;
    v26 = v13;
    v15 = 8 * v6;
    v27 = 8 * v6;
    v16 = &v13[v6];
    v25 = v16 + 1;
    v17 = *a3;
    *v16 = *a3;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v15 = v27;
    }
    v28 = v16;
    v18 = (_QWORD *)a1[1];
    v19 = (_QWORD *)*a1;
    if ( v4 == v18 )
    {
      if ( v19 != v18 )
      {
        v20 = v14 - (_QWORD)v19;
        do
        {
          *(_QWORD *)((char *)v19 + v20) = 0LL;
          if ( (_QWORD *)((char *)v19 + v20) != v19 )
          {
            *(_QWORD *)((char *)v19 + v20) = *v19;
            *v19 = 0LL;
          }
          ++v19;
        }
        while ( v19 != v18 );
      }
    }
    else
    {
      if ( v19 != v4 )
      {
        v21 = v14 - (_QWORD)v19;
        do
        {
          *(_QWORD *)((char *)v19 + v21) = 0LL;
          if ( (_QWORD *)((char *)v19 + v21) != v19 )
          {
            *(_QWORD *)((char *)v19 + v21) = *v19;
            *v19 = 0LL;
          }
          ++v19;
        }
        while ( v19 != v4 );
        v18 = (_QWORD *)a1[1];
      }
      v28 = (__int64 *)v14;
      if ( v4 != v18 )
      {
        v22 = v15 - (_QWORD)v4 + v14 + 8;
        do
        {
          *(_QWORD *)((char *)v4 + v22) = 0LL;
          if ( (_QWORD *)((char *)v4 + v22) != v4 )
          {
            *(_QWORD *)((char *)v4 + v22) = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v18 );
      }
    }
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Change_array((__int64)a1, v14, v8, v11);
    result = v27 + *a1;
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v23, v28, v25);
    std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
