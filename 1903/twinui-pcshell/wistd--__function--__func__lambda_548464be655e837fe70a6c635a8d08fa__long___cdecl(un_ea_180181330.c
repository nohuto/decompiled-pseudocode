/*
 * XREFs of wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl(unsigned_int_unsigned___int64___int64)_::__clone @ 0x180181330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl_unsigned_int_unsigned___int64___int64__::__clone(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a2 = &off_18042D158;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = result;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
