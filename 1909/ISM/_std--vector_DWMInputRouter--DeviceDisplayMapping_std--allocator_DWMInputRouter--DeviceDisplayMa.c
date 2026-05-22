/*
 * XREFs of _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::_Emplace_reallocate_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$39 @ 0x1800C1DBC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@AEAAXPEAUDeviceDisplayMapping@DWMInputRouter@@0@Z @ 0x1800C5698 (-_Destroy@-$vector@UDeviceDisplayMapping@DWMInputRouter@@V-$allocator@UDeviceDisplayMapping@DWMI.c)
 */

void __fastcall __noreturn std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::_Emplace_reallocate_DWMInputRouter::DeviceDisplayMapping__::_1_::catch_39(
        __int64 a1,
        __int64 a2)
{
  std::vector<DWMInputRouter::DeviceDisplayMapping>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 104)));
  throw;
}
