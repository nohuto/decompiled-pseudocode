/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___::CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___ @ 0x180154568
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___ @ 0x180153284 (CreateAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180019A14 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___::CAsyncCallbackWithLambda__lambda_ad49911410aee6c70adeeb780ccd34e3___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 72) = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 236));
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_180436910;
  *(_QWORD *)(a1 + 8) = off_180436360;
  return a1;
}
