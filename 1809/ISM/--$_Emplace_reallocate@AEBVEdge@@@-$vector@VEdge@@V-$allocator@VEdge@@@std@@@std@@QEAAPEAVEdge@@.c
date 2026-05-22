/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1800CC564
 * Callers:
 *     ?push_back@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEBVEdge@@@Z @ 0x1800CC0B4 (-push_back@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAXAEBVEdge@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B594 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1800CC768 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 *     ??$_Uninitialized_move@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1800CC864 (--$_Uninitialized_move@PEAVEdge@@PEAV1@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  size_t v11; // rax
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 *v26; // [rsp+80h] [rbp+8h]

  v5 = (a2 - *a1) / 104;
  v6 = (a1[1] - *a1) / 104;
  if ( v6 == 0x276276276276276LL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
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
  if ( v11 < 0x1000 )
  {
    if ( v11 )
      v16 = (__int64 *)operator new(v11);
    else
      v16 = 0LL;
  }
  else
  {
    v12 = v11 + 39;
    if ( v11 + 39 < v11 )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
    {
      _o__invalid_parameter_noinfo_noreturn(v15, v14);
      __debugbreak();
    }
    v16 = (__int64 *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v16 - 1) = (__int64)v13;
  }
  v25 = 104 * v5;
  v17 = &v16[13 * v5];
  try
  {
    *v17 = *(_QWORD *)a3;
    std::wstring::wstring(v17 + 1, a3 + 8);
    v18 = *(_QWORD *)(a3 + 40);
    v17[5] = v18;
    if ( v18 )
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 24));
    *((_DWORD *)v17 + 12) = *(_DWORD *)(a3 + 48);
    *(_OWORD *)((char *)v17 + 52) = *(_OWORD *)(a3 + 52);
    *(_OWORD *)((char *)v17 + 68) = *(_OWORD *)(a3 + 68);
    *(__int64 *)((char *)v17 + 84) = *(_QWORD *)(a3 + 84);
    *((_DWORD *)v17 + 23) = *(_DWORD *)(a3 + 92);
    *((_DWORD *)v17 + 24) = *(_DWORD *)(a3 + 96);
    v26 = v17;
    v19 = a1[1];
    v20 = v16;
    v21 = *a1;
    if ( a2 != v19 )
    {
      std::_Uninitialized_move<Edge *,Edge *,std::allocator<Edge>>(v21, a2, v16);
      v26 = v16;
      v20 = v17 + 13;
      v19 = a1[1];
      v21 = a2;
    }
    std::_Uninitialized_move<Edge *,Edge *,std::allocator<Edge>>(v21, v19, v20);
  }
  catch ( ... )
  {
    std::vector<Edge>::_Destroy(v22, v26, v17 + 13);
    std::allocator<Edge>::deallocate(v24, v16, v10);
    throw;
  }
  std::vector<Edge>::_Change_array(a1, v16, v7, v10, v10);
  return v25 + *a1;
}
