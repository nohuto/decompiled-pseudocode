/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x18007B8F8
 * Callers:
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x18007BCB8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x18001F7C0 (-_Reset_move@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x18007BCFC (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AX_N@Z@2@_K1@Z @ 0x18007C4DC (-_Change_array@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@.c)
 */

// Hidden C++ exception states: #wind=5
unsigned __int64 __fastcall std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  size_t v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  unsigned __int64 v13; // r13
  char *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r14
  _QWORD *v18; // rdi
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  void *v27; // [rsp+38h] [rbp-60h]
  _QWORD *v28; // [rsp+A0h] [rbp+8h]
  __int64 v30; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v25 = v6 + 1;
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
  v27 = v11;
  v13 = v5 & 0xFFFFFFFFFFFFFFC0uLL;
  v24 = v13;
  v14 = (char *)v11 + v13;
  v15 = (__int64)v11 + v13 + 64;
  v26 = v15;
  try
  {
    std::function<void (bool)>::function<void (bool)>((char *)v11 + v13, a3);
    v28 = v14;
    v16 = a1[1];
    v30 = v16;
    if ( v3 == v16 )
    {
      v17 = *a1;
      v18 = v12;
      while ( v17 != v16 )
      {
        std::function<void (bool)>::function<void (bool)>(v18, v17);
        v18 += 8;
        v17 += 64LL;
        v16 = v30;
      }
    }
    else
    {
      v19 = *a1;
      v20 = (__int64)v12;
      while ( v19 != v3 )
      {
        *(_QWORD *)(v20 + 56) = 0LL;
        std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v20, v19);
        v20 += 64LL;
        v19 += 64LL;
      }
      v28 = v12;
      v21 = a1[1];
      while ( v3 != v21 )
      {
        *(_QWORD *)(v15 + 56) = 0LL;
        std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Reset_move(v15, v3);
        v15 += 64LL;
        v3 += 64LL;
      }
      v13 = v24;
    }
    std::vector<std::function<void (bool)>>::_Change_array(a1, v12, v25, v9);
    result = v13 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::function<void (bool)>>::_Destroy(v22, v28, v26);
    std::_Deallocate<16,0>(v27, (const struct std::nothrow_t *)(v9 << 6));
    throw;
  }
  return result;
}
