/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801010BC
 * Callers:
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18010142C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@PEAV1@QEAV1@1AEAV?$allocator@VEdge@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180101370 (--$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x180102644 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 */

__int64 __fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  size_t v11; // rcx
  _QWORD *v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+90h] [rbp+8h]

  v5 = (a2 - *a1) / 104;
  v6 = (a1[1] - *a1) / 104;
  if ( v6 == 0x276276276276276LL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) / 104;
  v9 = v8 >> 1;
  if ( v8 <= 0x276276276276276LL - (v8 >> 1) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v7;
  }
  else
  {
    v10 = v7;
  }
  v11 = 104 * v10;
  if ( v10 > 0x276276276276276LL )
    v11 = -1LL;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  v20 = 104 * v5;
  v13 = &v12[13 * v5];
  try
  {
    *v13 = *(_QWORD *)a3;
    std::wstring::wstring((__int64)(v13 + 1));
    v14 = *(_QWORD *)(a3 + 40);
    v13[5] = v14;
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 24));
    *((_DWORD *)v13 + 12) = *(_DWORD *)(a3 + 48);
    *(_OWORD *)((char *)v13 + 52) = *(_OWORD *)(a3 + 52);
    *(_OWORD *)((char *)v13 + 68) = *(_OWORD *)(a3 + 68);
    *(_QWORD *)((char *)v13 + 84) = *(_QWORD *)(a3 + 84);
    *((_DWORD *)v13 + 23) = *(_DWORD *)(a3 + 92);
    *((_DWORD *)v13 + 24) = *(_DWORD *)(a3 + 96);
    v21 = (__int64)v13;
    v15 = a1[1];
    v16 = v12;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(v17, a2, v12);
      v21 = (__int64)v12;
      v16 = v13 + 13;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(v17, v15, v16);
  }
  catch ( ... )
  {
    std::vector<Edge>::_Destroy(v18, v21, (__int64)(v13 + 13));
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(104 * v10));
    throw;
  }
  std::vector<Edge>::_Change_array(a1, v12, v7, v10);
  return v20 + *a1;
}
