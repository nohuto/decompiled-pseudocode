/*
 * XREFs of _std::vector_IAudioStreamInfo_____ptr64_std::allocator_IAudioStreamInfo_____ptr64___::_Emplace_reallocate_IAudioStreamInfo_____ptr64_const_&___ptr64__::_1_::catch$58 @ 0x18006A330
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18006888B (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IAudioStreamInfo_____ptr64_std::allocator_IAudioStreamInfo_____ptr64___::_Emplace_reallocate_IAudioStreamInfo_____ptr64_const_____ptr64__::_1_::catch_58(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 96)));
  throw;
}
