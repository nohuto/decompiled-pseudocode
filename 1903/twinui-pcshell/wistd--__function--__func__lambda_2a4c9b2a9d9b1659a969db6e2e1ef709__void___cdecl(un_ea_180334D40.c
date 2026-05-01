/*
 * XREFs of wistd::__function::__func__lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void___cdecl(unsigned_long_const_&)_::__move @ 0x180334D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void___cdecl_unsigned_long_const____::__move(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 (__fastcall ***v3)(void *); // rcx
  __int64 (__fastcall ***v4)(void *); // rdx

  result = &off_18042F158;
  v3 = (__int64 (__fastcall ***)(void *))(a1 + 8);
  *a2 = &off_18042F158;
  v4 = (__int64 (__fastcall ***)(void *))(a2 + 1);
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  return result;
}
