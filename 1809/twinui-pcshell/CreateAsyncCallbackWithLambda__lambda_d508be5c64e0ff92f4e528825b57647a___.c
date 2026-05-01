/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_d508be5c64e0ff92f4e528825b57647a___ @ 0x1802038E0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_37719fec74321e5ebed3721a062c5e83__&___ptr64_ @ 0x180203B44 (CreationThreadDispatcher--RunSync__lambda_37719fec74321e5ebed3721a062c5e83__-___ptr64_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18002947C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_d508be5c64e0ff92f4e528825b57647a_(_QWORD *a1, __int128 *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int128 v7; // xmm0
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v7 = *a2;
    v4 = v6;
    *v6 = off_1803DF830;
    v6[1] = off_1803D0F10;
    *((_OWORD *)v6 + 3) = v7;
  }
  result = a1;
  *a1 = v4;
  return result;
}
