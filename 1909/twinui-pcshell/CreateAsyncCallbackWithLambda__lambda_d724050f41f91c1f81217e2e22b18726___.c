/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_d724050f41f91c1f81217e2e22b18726___ @ 0x18030A9A0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_b572b7b401bca0583e7d35bf745a8e03___ @ 0x18030AEAC (CreationThreadDispatcher--RunSync__lambda_b572b7b401bca0583e7d35bf745a8e03___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003FA9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_ @ 0x1802E0A08 (_lambda_b572b7b401bca0583e7d35bf745a8e03_--_lambda_b572b7b401bca0583e7d35bf745a8e03_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_d724050f41f91c1f81217e2e22b18726_(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_b572b7b401bca0583e7d35bf745a8e03_::_lambda_b572b7b401bca0583e7d35bf745a8e03_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_1805BE710;
    v6[1] = off_1805BE6C8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
