/*
 * XREFs of ??1?$ComPtr@VXamlAltTabViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D79B0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlAltTabViewHost_IUnknown__::_1_::dtor$2 @ 0x1802D6BD5 (_Microsoft--WRL--Details--MakeAndInitialize_XamlAltTabViewHost_IUnknown__--_1_--dtor$2.c)
 *     __lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb__::_1_::dtor$0 @ 0x1802D7045 (__lambda_fac65b3379140ccb2da51a4d302d8ccb_--_lambda_fac65b3379140ccb2da51a4d302d8ccb__--_1_--dto.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$13 @ 0x1802DA58F (_XamlAltTabViewHost--Show_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<XamlAltTabViewHost>::~ComPtr<XamlAltTabViewHost>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(a1);
}
