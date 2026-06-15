/*
 * XREFs of _std::vector_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient_______::_Emplace_reallocate_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient______::_1_::catch$98 @ 0x1800FC529
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006C94B (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@2@0@Z @ 0x1800FDA58 (-_Destroy@-$vector@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient_______::_Emplace_reallocate_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient______::_1_::catch_98(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::unique_ptr<CAppSubmixClient>>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 104)));
  throw;
}
