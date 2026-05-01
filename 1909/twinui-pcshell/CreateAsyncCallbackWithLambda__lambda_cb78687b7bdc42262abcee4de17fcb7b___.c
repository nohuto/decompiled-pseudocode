/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b___ @ 0x1802FD6F8
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1802FE9B4 (CreationThreadDispatcher--RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003FA9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_cb78687b7bdc42262abcee4de17fcb7b_(_QWORD *a1, __int64 a2)
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
    v6[6] = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    v4 = v6;
    *((_BYTE *)v6 + 56) = *(_BYTE *)(a2 + 8);
    *v6 = off_1805BD358;
    v6[1] = off_1805BD290;
  }
  result = a1;
  *a1 = v4;
  return result;
}
