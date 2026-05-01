/*
 * XREFs of _std::vector_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener____std::allocator_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener_______::_Emplace_reallocate_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener______::_1_::catch$110 @ 0x1801FC211
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@V?$allocator@V?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@std@@@2@@std@@AEAAXPEAV?$unique_ptr@VWindowPropertyChangedListener@@U?$default_delete@VWindowPropertyChangedListener@@@std@@@2@0@Z @ 0x18020117C (-_Destroy@-$vector@V-$unique_ptr@VWindowPropertyChangedListener@@U-$default_delete@VWindowProper.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener____std::allocator_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener_______::_Emplace_reallocate_std::unique_ptr_WindowPropertyChangedListener_std::default_delete_WindowPropertyChangedListener______::_1_::catch_110(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::unique_ptr<WindowPropertyChangedListener>>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
