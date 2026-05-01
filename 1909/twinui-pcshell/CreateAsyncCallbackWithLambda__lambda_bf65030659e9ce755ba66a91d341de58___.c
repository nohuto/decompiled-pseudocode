/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___ @ 0x180350534
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x1803510C0 (CreationThreadDispatcher--RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003FA9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58_(_QWORD *a1, __int64 a2)
{
  _OWORD *v4; // rdi
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  __int64 v7; // xmm1_8
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v4 = v6;
    v6[3] = *(_OWORD *)a2;
    v7 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v6 = off_180473680;
    *((_QWORD *)v6 + 1) = off_180456618;
    *((_QWORD *)v6 + 8) = v7;
  }
  result = a1;
  *a1 = v4;
  return result;
}
