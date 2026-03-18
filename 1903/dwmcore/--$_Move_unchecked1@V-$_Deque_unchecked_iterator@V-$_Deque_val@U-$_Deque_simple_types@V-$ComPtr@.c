/*
 * XREFs of ??$_Move_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x180019AA0
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1800199CC (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180019B60 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_OWORD *__fastcall std::_Move_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rsi
  _OWORD *result; // rax
  unsigned __int64 v10; // rbx

  v4 = *(_QWORD *)(a3 + 8);
  for ( i = a2[1]; i != v4; a2[1] = i )
  {
    v10 = a4[1];
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((v10 >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL))) + 8 * (v10 & 1),
      *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((i >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL))) + 8 * (i & 1));
    ++i;
    a4[1] = v10 + 1;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
