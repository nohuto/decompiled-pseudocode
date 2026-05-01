/*
 * XREFs of wistd::__function::__func__lambda_a95af7086c80fda5bbb6272344ecf907__long___cdecl(unsigned_long)_::destroy @ 0x18018D910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_a95af7086c80fda5bbb6272344ecf907__long___cdecl_unsigned_long__::destroy(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
