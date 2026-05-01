/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_f5241c58406c3c804da063fdf7490d44___ @ 0x18025C210
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_d87caed06550b1d9f51495b75369296b__&_ @ 0x18025C5D4 (CreationThreadDispatcher--RunSync__lambda_d87caed06550b1d9f51495b75369296b__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180019A14 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_f5241c58406c3c804da063fdf7490d44_(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v4 = v6;
    v6[6] = *a2;
    *v6 = off_180447CC8;
    v6[1] = off_180436360;
  }
  result = a1;
  *a1 = v4;
  return result;
}
