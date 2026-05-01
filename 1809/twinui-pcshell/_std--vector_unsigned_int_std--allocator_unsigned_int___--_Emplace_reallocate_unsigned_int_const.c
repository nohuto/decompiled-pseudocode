/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::_Emplace_reallocate_unsigned_int_const_&___ptr64__::_1_::catch$33 @ 0x18013CEFE
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::_Emplace_reallocate_unsigned_int_const_____ptr64__::_1_::catch_33(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(4LL * *(_QWORD *)(a2 + 96)));
  throw;
}
