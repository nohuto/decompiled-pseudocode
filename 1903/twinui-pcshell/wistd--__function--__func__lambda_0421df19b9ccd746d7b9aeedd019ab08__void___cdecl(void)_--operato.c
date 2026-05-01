/*
 * XREFs of wistd::__function::__func__lambda_0421df19b9ccd746d7b9aeedd019ab08__void___cdecl(void)_::operator() @ 0x1800A1CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wistd::__function::__func__lambda_0421df19b9ccd746d7b9aeedd019ab08__void___cdecl_void__::operator()(
        __int64 a1)
{
  void *v1; // rcx

  v1 = (void *)(*(_QWORD *)(a1 + 8) + 56LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 )
    WakeByAddressSingle(v1);
}
