/*
 * XREFs of ??$_Buynode@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@@Z @ 0x180025AA4
 * Callers:
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18002555C (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x1800258B8 (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$variant@K_NM@2@U-$less.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@XZ @ 0x180025BA0 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode<std::pair<std::wstring const,std::variant<unsigned long,bool,float>> const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  _OWORD *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // rdx
  __int64 result; // rax
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  void *v16; // [rsp+60h] [rbp+8h]

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Buynode0(a1);
  v4 = v3;
  v16 = (void *)v3;
  v5 = 0LL;
  *(_WORD *)(v3 + 24) = 0;
  v6 = v3 + 32;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = (_OWORD *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v8 = *(_OWORD **)a2;
  try
  {
    if ( v7 < 8 )
    {
      *(_OWORD *)v6 = *v8;
      *(_QWORD *)(v3 + 56) = 7LL;
    }
    else
    {
      v9 = v7 | 7;
      v10 = 0x7FFFFFFFFFFFFFFELL;
      if ( (v7 | 7) <= 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_6;
      while ( 1 )
      {
        v9 = v10;
LABEL_6:
        v11 = 2 * (v9 + 1);
        if ( (unsigned __int64)(v9 + 1) > 0x7FFFFFFFFFFFFFFFLL )
          v11 = -1LL;
        if ( v11 < 0x1000 )
          break;
        v13 = v11 + 39;
        if ( v11 + 39 < v11 )
          v13 = -1LL;
        v14 = operator new(v13);
        if ( v14 )
        {
          v5 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v5 - 1) = v14;
          goto LABEL_11;
        }
        v10 = _o__invalid_parameter_noinfo_noreturn(v15);
      }
      if ( v11 )
        v5 = operator new(v11);
LABEL_11:
      *(_QWORD *)v6 = v5;
      memcpy_0(v5, v8, 2 * v7 + 2);
      *(_QWORD *)(v6 + 24) = v9;
    }
    *(_QWORD *)(v6 + 16) = v7;
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
    result = v4;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)0x48);
    throw;
  }
  return result;
}
