/*
 * XREFs of _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$8 @ 0x18012EB11
 * Callers:
 *     <none>
 * Callees:
 *     ?_Destroy@?$vector@UAttachedInputObjectEntry@InputSite@@V?$allocator@UAttachedInputObjectEntry@InputSite@@@std@@@std@@AEAAXPEAUAttachedInputObjectEntry@InputSite@@0@Z @ 0x18001FDD0 (-_Destroy@-$vector@UAttachedInputObjectEntry@InputSite@@V-$allocator@UAttachedInputObjectEntry@I.c)
 *     ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x18001FE20 (-deallocate@-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMappin.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch_8(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::vector<InputSite::AttachedInputObjectEntry>::_Destroy(a1, *(__int64 **)(a2 + 120), *(__int64 **)(a2 + 40));
  std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v3, *(void **)(a2 + 112), *(_QWORD *)(a2 + 136));
  throw;
}
