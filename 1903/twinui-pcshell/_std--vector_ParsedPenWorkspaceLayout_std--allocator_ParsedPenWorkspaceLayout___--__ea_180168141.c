/*
 * XREFs of _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::catch$30 @ 0x180168141
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXPEAUParsedPenWorkspaceLayout@@0@Z @ 0x18016A2A0 (-_Destroy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std.c)
 */

void __fastcall __noreturn std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::vector<ParsedPenWorkspaceLayout>::_Destroy(a1, *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 56));
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)(136LL * *(_QWORD *)(a2 + 184)));
  throw;
}
