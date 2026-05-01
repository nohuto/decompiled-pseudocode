/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Concurrency::task_bool_____lambda_5a1c437f17fa466aabaf7b0153a0ecc3___ @ 0x180292714
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Concurrency::task_bool___::_Copy @ 0x1802957F0 (std--_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Co_ea_1802957F0.c)
 *     ?_Perform@?$_Continuation_func_transformer@V?$task@_N@Concurrency@@X@Concurrency@@SA?AV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@@Z @ 0x180296680 (-_Perform@-$_Continuation_func_transformer@V-$task@_N@Concurrency@@X@Concurrency@@SA-AV-$functio.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@AEBV01@@Z @ 0x1802931C0 (--0-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *std::_Global_new_std::_Func_impl_no_alloc__lambda_5a1c437f17fa466aabaf7b0153a0ecc3__unsigned_char_Concurrency::task_bool_____lambda_5a1c437f17fa466aabaf7b0153a0ecc3___()
{
  _QWORD *v0; // rbx
  _QWORD *result; // rax

  v0 = operator new(0x48uLL);
  *v0 = off_1805063F8;
  try
  {
    std::function<void (Concurrency::task<bool>)>::function<void (Concurrency::task<bool>)>(v0 + 1);
    result = v0;
  }
  catch ( ... )
  {
    operator delete(v0, (const struct std::nothrow_t *)0x48);
    throw;
  }
  return result;
}
