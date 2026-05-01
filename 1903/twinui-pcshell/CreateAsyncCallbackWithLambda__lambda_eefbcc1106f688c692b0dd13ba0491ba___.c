/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_eefbcc1106f688c692b0dd13ba0491ba___ @ 0x1802DE3A0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_22e0521af8107b5e6397e610f3471390___ @ 0x1802DF0DC (CreationThreadDispatcher--RunSync__lambda_22e0521af8107b5e6397e610f3471390___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180019A14 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_eefbcc1106f688c692b0dd13ba0491ba_(_QWORD *a1, _QWORD *a2)
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
    v6[6] = *a2;
    *a2 = 0LL;
    v4 = v6;
    *v6 = off_180594E68;
    v6[1] = off_180594E90;
  }
  result = a1;
  *a1 = v4;
  return result;
}
