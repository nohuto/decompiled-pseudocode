/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x18002F778
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x18002F68C (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x18002FC4C (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD **v4; // rbx
  _QWORD *v5; // rsi
  unsigned __int64 i; // r11
  _QWORD *result; // rax

  v4 = *(_QWORD ***)a2;
  if ( *(_QWORD *)a2 )
    v5 = *v4;
  else
    v5 = 0LL;
  for ( i = *(_QWORD *)(a2 + 16);
        i != *(_QWORD *)(a3 + 16)
     && *(_QWORD *)(*(_QWORD *)(v5[1] + 8 * ((v5[2] - 1LL) & (i >> 1))) + 8 * (i & 1)) != *a4;
        ++i )
  {
    ;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  *(_QWORD *)(a2 + 16) = i;
  if ( v4 && *v4 )
    *a1 = **v4;
  result = a1;
  a1[2] = i;
  return result;
}
