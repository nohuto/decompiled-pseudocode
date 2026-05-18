/*
 * XREFs of ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800D6704
 * Callers:
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     sub_1800696B0 @ 0x1800696B0 (sub_1800696B0.c)
 * Callees:
 *     sub_1800698D4 @ 0x1800698D4 (sub_1800698D4.c)
 */

void **__fastcall std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(
        _QWORD *a1)
{
  void **result; // rax

  *a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  sub_1800698D4(a1 + 1);
  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  *a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
