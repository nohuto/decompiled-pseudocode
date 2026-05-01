/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_d242ae40d5210e292c90d057b5b2868e___ @ 0x180330DAC
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x180331690 (CreationThreadDispatcher--RunSync__lambda_0f869028d2211307d6500fcb06deb8db___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180019A14 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_d242ae40d5210e292c90d057b5b2868e_(_QWORD *a1, _QWORD *a2)
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
    *v6 = off_180453470;
    v6[1] = off_180436360;
  }
  result = a1;
  *a1 = v4;
  return result;
}
