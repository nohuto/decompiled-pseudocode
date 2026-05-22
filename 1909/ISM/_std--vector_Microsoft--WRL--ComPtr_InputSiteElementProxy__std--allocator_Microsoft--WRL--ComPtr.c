/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_InputSiteElementProxy__std::allocator_Microsoft::WRL::ComPtr_InputSiteElementProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSiteElementProxy____::_1_::catch$57 @ 0x18003D4CB
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@0@Z @ 0x180066434 (-_Destroy@-$vector@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V-$allocato.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_InputSiteElementProxy__std::allocator_Microsoft::WRL::ComPtr_InputSiteElementProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_InputSiteElementProxy____::_1_::catch_57(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 128),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 136)));
  throw;
}
