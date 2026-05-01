/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___ @ 0x180290BD0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180290D2C (CreationThreadDispatcher--RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002947C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x180290E28 (_lambda_f100e3a3eb499b75a430141e91e776cf_--_lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3_(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_f100e3a3eb499b75a430141e91e776cf_::_lambda_f100e3a3eb499b75a430141e91e776cf_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_18050C040;
    v6[1] = off_18050BFF8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
