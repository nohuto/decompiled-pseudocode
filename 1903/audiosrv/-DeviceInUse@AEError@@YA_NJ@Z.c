/*
 * XREFs of ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180007A64
 * Callers:
 *     ?ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800078A8 (-ConfirmDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115934 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011ADFC (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AEError::DeviceInUse(AEError *this)
{
  return (_DWORD)this == -2005139389 || (int)this <= -2005139360 && (int)this > -2005139365;
}
