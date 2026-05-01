/*
 * XREFs of _std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::catch$30 @ 0x18013D10D
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@AEAAXPEAUParsedPenWorkspaceLayout@@0@Z @ 0x18013ED40 (-_Destroy@-$vector@UParsedPenWorkspaceLayout@@V-$allocator@UParsedPenWorkspaceLayout@@@std@@@std.c)
 */

void __fastcall __noreturn std::vector_ParsedPenWorkspaceLayout_std::allocator_ParsedPenWorkspaceLayout___::_Emplace_reallocate_ParsedPenWorkspaceLayout__::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  std::vector<ParsedPenWorkspaceLayout>::_Destroy(a1, *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 56));
  std::_Deallocate<16,0>(*(void **)(a2 + 64), (const struct std::nothrow_t *)(104LL * *(_QWORD *)(a2 + 184)));
  throw;
}
