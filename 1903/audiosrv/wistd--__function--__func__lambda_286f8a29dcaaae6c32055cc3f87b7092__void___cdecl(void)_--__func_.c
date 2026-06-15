/*
 * XREFs of wistd::__function::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_ @ 0x180069FA4
 * Callers:
 *     wistd::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_286f8a29dcaaae6c32055cc3f87b7092__void_ @ 0x1800697D0 (wistd--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_286f8a29dcaaae6c32055c.c)
 *     wistd::__function::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_::__move @ 0x18006B6D0 (wistd--__function--__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl(void)_--__move.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl_void__::__func__lambda_286f8a29dcaaae6c32055cc3f87b7092__void___cdecl_void__(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = &off_180153A00;
  a1[1] = 0LL;
  if ( a1 + 1 != a2 )
  {
    a1[1] = *a2;
    *a2 = 0LL;
  }
  a1[2] = a2[1];
  return a1;
}
