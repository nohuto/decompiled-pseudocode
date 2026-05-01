/*
 * XREFs of wistd::__function::__func__lambda_8628948de6cbd45305f1da24d895736c__long___cdecl(long)_::__move @ 0x180235AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_8628948de6cbd45305f1da24d895736c__long___cdecl_long__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &off_18044DCD8;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  a2[2] = result;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
