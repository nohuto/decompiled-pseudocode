/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_ @ 0x180160110
 * Callers:
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180166F58 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003FA9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____::CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625____(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1 + 6);
  a1[7] = a2[1];
  *a1 = off_1804565F0;
  a1[1] = off_180456618;
  return a1;
}
