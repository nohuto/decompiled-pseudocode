/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___ @ 0x1800E533C
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800E5168 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??$_Unchecked@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@AEBV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x18009DA5C (--$_Unchecked@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTask@@@WRL@Micro.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18009DA80 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 */

_QWORD *__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___(
        _QWORD *a1,
        __int64 **a2)
{
  __int64 **v3; // r10
  _QWORD *v4; // r9
  __int64 v5; // r11
  unsigned __int64 i; // r10
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(v8, a2);
  std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(v9, v3);
  for ( i = v8[1];
        i != v9[1]
     && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8[0] + 8LL) + 8 * ((i >> 1) & (*(_QWORD *)(v8[0] + 16LL) - 1LL)))
                  + 8 * (i & 1)) != *v4;
        ++i )
  {
    ;
  }
  *(_QWORD *)(v5 + 16) = i;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    a1,
    v5);
  return a1;
}
