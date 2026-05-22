/*
 * XREFs of _std::vector_std::pair_unsigned_long_InputRedirectionTarget_____ptr64__std::allocator_std::pair_unsigned_long_InputRedirectionTarget_____ptr64_____::_Emplace_reallocate_int_&___ptr64_InputRedirectionTarget_____ptr64__::_1_::catch$0 @ 0x1801307D8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x18001FE20 (-deallocate@-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMappin.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_InputRedirectionTarget_____ptr64__std::allocator_std::pair_unsigned_long_InputRedirectionTarget_____ptr64_____::_Emplace_reallocate_int_____ptr64_InputRedirectionTarget_____ptr64__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(a1, *(void **)(a2 + 96), *(_QWORD *)(a2 + 104));
  throw;
}
