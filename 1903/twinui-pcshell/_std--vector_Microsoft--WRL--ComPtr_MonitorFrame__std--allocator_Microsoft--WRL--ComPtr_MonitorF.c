/*
 * XREFs of _std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_MonitorFrame__const_&__::_1_::catch$32 @ 0x1802C0A20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@0@Z @ 0x1802D0E6C (-_Destroy@-$vector@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VMonitorFrame.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::ComPtr_MonitorFrame__std::allocator_Microsoft::WRL::ComPtr_MonitorFrame_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_MonitorFrame__const____::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::_Destroy(a1, *(_QWORD *)(a2 + 136), *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 152)));
  throw;
}
