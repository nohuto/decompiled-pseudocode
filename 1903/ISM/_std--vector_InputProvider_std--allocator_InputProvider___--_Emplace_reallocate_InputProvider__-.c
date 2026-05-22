/*
 * XREFs of _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$59 @ 0x18003C7D7
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXPEAUInputProvider@@0@Z @ 0x1800528B0 (-_Destroy@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXPEAUInputProvid.c)
 */

void __fastcall __noreturn std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch_59(
        __int64 a1,
        __int64 a2)
{
  std::vector<InputProvider>::_Destroy(a1, *(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(24LL * *(_QWORD *)(a2 + 136)));
  throw;
}
