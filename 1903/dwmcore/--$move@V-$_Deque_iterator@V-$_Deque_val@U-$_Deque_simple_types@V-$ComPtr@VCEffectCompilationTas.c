/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1800199CC
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800197E0 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??$_Move_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x180019AA0 (--$_Move_unchecked1@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@.c)
 */

_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD **v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v16[8]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]

  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
    v4 = (_QWORD *)*v4;
  v15[0] = v4;
  v15[1] = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD **)a3;
  if ( *(_QWORD *)a3 )
    v7 = (_QWORD *)*v7;
  v14[0] = v7;
  v14[1] = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD **)a4;
  if ( *(_QWORD *)a4 )
    v8 = (_QWORD *)*v8;
  v13[0] = v8;
  v13[1] = *(_QWORD *)(a4 + 16);
  std::_Move_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
    v16,
    v15,
    v14,
    v13);
  v9 = *(_QWORD ***)a4;
  *a1 = 0LL;
  a1[1] = 0LL;
  v10 = v17;
  *(_QWORD *)(a4 + 16) = v17;
  if ( v9 )
  {
    v11 = *v9;
    if ( v11 )
      *a1 = *v11;
  }
  a1[2] = v10;
  return a1;
}
