/*
 * XREFs of _std::vector__tagpropertykey_std::allocator__tagpropertykey___::_Emplace_reallocate__tagpropertykey_const_&__::_1_::catch$29 @ 0x18011C654
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006B8EB (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector__tagpropertykey_std::allocator__tagpropertykey___::_Emplace_reallocate__tagpropertykey_const____::_1_::catch_29(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(20LL * *(_QWORD *)(a2 + 96)));
  throw;
}
