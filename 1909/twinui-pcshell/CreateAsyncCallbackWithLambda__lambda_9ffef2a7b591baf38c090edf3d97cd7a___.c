/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_9ffef2a7b591baf38c090edf3d97cd7a___ @ 0x1801CA334
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_f08a4673ec6edb9380d305cb12981f71___ @ 0x1801CAA00 (CreationThreadDispatcher--RunSync__lambda_f08a4673ec6edb9380d305cb12981f71___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003FA9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_9ffef2a7b591baf38c090edf3d97cd7a_(_QWORD *a1, _QWORD *a2)
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
    *v6 = off_18045C7A8;
    v6[1] = off_180456618;
  }
  result = a1;
  *a1 = v4;
  return result;
}
