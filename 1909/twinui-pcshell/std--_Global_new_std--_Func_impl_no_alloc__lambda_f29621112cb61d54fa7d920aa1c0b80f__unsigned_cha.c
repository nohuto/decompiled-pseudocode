/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f___ @ 0x18030B0C0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Copy @ 0x18030D560 (std--_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Co_ea_18030D560.c)
 *     ?_Perform@?$_Continuation_func_transformer@V?$task@_N@Concurrency@@X@Concurrency@@SA?AV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@@Z @ 0x18030DF68 (-_Perform@-$_Continuation_func_transformer@V-$task@_N@Concurrency@@X@Concurrency@@SA-AV-$functio.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18030BAE4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *std::_Global_new_std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f___()
{
  _QWORD *v0; // rbx
  _QWORD *result; // rax

  v0 = operator new(0x48uLL);
  *v0 = off_1805B85F8;
  try
  {
    std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(v0 + 1);
    result = v0;
  }
  catch ( ... )
  {
    operator delete(v0, (const struct std::nothrow_t *)0x48);
    throw;
  }
  return result;
}
