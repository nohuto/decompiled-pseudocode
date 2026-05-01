/*
 * XREFs of _std::vector_ActivationHints::Hint_std::allocator_ActivationHints::Hint___::_Emplace_reallocate_ActivationHints::Hint__::_1_::catch$128 @ 0x18032B19D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXPEAUHint@ActivationHints@@0@Z @ 0x18032C0B4 (-_Destroy@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXP.c)
 */

void __fastcall __noreturn std::vector_ActivationHints::Hint_std::allocator_ActivationHints::Hint___::_Emplace_reallocate_ActivationHints::Hint__::_1_::catch_128(
        __int64 a1,
        __int64 a2)
{
  std::vector<ActivationHints::Hint>::_Destroy(a1, *(_QWORD *)(a2 + 112), *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(80LL * *(_QWORD *)(a2 + 120)));
  throw;
}
