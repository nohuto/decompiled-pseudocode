/*
 * XREFs of ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x18012D2C8
 * Callers:
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18012CCD4 (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18000A1A8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x18012D248 (-SetEndpointLevel@@YAJPEAUIMMEndpointInternal@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetEndpointLevels(struct IUnknown *a1)
{
  struct IUnknown *v2; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
    ATL::AtlComQIPtrAssign(&v2, a1, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
  return 2147942487LL;
}
