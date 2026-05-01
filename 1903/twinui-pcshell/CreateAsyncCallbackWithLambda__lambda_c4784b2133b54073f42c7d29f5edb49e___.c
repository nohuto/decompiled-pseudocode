/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_c4784b2133b54073f42c7d29f5edb49e___ @ 0x1801BA1B8
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_23fac776ba4fa664bf014b45da4dfe94___ @ 0x1801BAAD4 (CreationThreadDispatcher--RunSync__lambda_23fac776ba4fa664bf014b45da4dfe94___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180019A14 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_c4784b2133b54073f42c7d29f5edb49e_(_QWORD *a1, __int128 *a2)
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
    *v6 = off_18043D198;
    v6[1] = off_180436360;
    *((_OWORD *)v6 + 3) = v7;
  }
  result = a1;
  *a1 = v4;
  return result;
}
