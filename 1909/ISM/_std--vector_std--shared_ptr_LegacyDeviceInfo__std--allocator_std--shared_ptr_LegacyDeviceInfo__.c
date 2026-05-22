/*
 * XREFs of _std::vector_std::shared_ptr_LegacyDeviceInfo__std::allocator_std::shared_ptr_LegacyDeviceInfo_____::_Emplace_reallocate_std::shared_ptr_LegacyDeviceInfo__const_&__::_1_::catch$34 @ 0x18009390F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@2@0@Z @ 0x180094D18 (-_Destroy@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegacyDevi.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_LegacyDeviceInfo__std::allocator_std::shared_ptr_LegacyDeviceInfo_____::_Emplace_reallocate_std::shared_ptr_LegacyDeviceInfo__const____::_1_::catch_34(
        __int64 a1,
        __int64 a2)
{
  std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Destroy(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 104));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
