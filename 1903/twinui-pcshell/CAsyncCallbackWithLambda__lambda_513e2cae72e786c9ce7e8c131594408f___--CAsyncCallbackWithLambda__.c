/*
 * XREFs of CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x180154500
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___ @ 0x18015322C (CreateAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180019A14 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___::CAsyncCallbackWithLambda__lambda_513e2cae72e786c9ce7e8c131594408f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 72) = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 236));
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_180436938;
  *(_QWORD *)(a1 + 8) = off_180436360;
  return a1;
}
