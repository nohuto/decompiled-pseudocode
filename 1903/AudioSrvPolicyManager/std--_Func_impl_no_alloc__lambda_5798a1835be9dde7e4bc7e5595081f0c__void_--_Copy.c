/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5798a1835be9dde7e4bc7e5595081f0c__void_::_Copy @ 0x1800161C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_5798a1835be9dde7e4bc7e5595081f0c__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_180039AE8;
  v2 = *(_QWORD *)(a1 + 8);
  a2[1] = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  return a2;
}
