/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E9E08
 * Callers:
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800ED0D4 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K1@Z @ 0x180066394 (-_Change_array@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice> const &>(
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
  size_t v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 *v15; // r15
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // [rsp+20h] [rbp-58h]
  void *v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp+8h]
  __int64 *v27; // [rsp+88h] [rbp+10h]

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
  v14 = (__int64)v13;
  v25 = v13;
  v26 = 8 * v6;
  v15 = &v13[v6];
  v24 = v15 + 1;
  try
  {
    *v15 = *a3;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v15);
    v27 = v15;
    v16 = (_QWORD *)a1[1];
    v17 = (_QWORD *)*a1;
    if ( v4 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v14 - (_QWORD)v17;
        do
        {
          *(_QWORD *)((char *)v17 + v18) = 0LL;
          if ( (_QWORD *)((char *)v17 + v18) != v17 )
          {
            *(_QWORD *)((char *)v17 + v18) = *v17;
            *v17 = 0LL;
          }
          ++v17;
        }
        while ( v17 != v16 );
      }
    }
    else
    {
      if ( v17 != v4 )
      {
        v22 = v14 - (_QWORD)v17;
        do
        {
          *(_QWORD *)((char *)v17 + v22) = 0LL;
          if ( (_QWORD *)((char *)v17 + v22) != v17 )
          {
            *(_QWORD *)((char *)v17 + v22) = *v17;
            *v17 = 0LL;
          }
          ++v17;
        }
        while ( v17 != v4 );
        v16 = (_QWORD *)a1[1];
      }
      v27 = (__int64 *)v14;
      if ( v4 != v16 )
      {
        v19 = v26;
        v23 = v14 + v26 - (_QWORD)v4 + 8;
        do
        {
          *(_QWORD *)((char *)v4 + v23) = 0LL;
          if ( (_QWORD *)((char *)v4 + v23) != v4 )
          {
            *(_QWORD *)((char *)v4 + v23) = *v4;
            *v4 = 0LL;
          }
          ++v4;
        }
        while ( v4 != v16 );
        goto LABEL_17;
      }
    }
    v19 = v26;
LABEL_17:
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Change_array((__int64)a1, v14, v8, v11);
    result = v19 + *a1;
  }
  catch ( ... )
  {
    std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Destroy(v20, v27, v24);
    std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)(8 * v11));
    throw;
  }
  return result;
}
