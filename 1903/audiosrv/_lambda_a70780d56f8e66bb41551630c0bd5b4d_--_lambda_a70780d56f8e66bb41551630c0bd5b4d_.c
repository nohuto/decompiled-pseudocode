/*
 * XREFs of _lambda_a70780d56f8e66bb41551630c0bd5b4d_::_lambda_a70780d56f8e66bb41551630c0bd5b4d_ @ 0x180069DDC
 * Callers:
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x1800510D8 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_a70780d56f8e66bb41551630c0bd5b4d_::_lambda_a70780d56f8e66bb41551630c0bd5b4d_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  return a1;
}
