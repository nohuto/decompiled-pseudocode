/*
 * XREFs of ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x180152E4C
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C020 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18014C2E8 (--$_Emplace_reallocate@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default.c)
 *     ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180151350 (--0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180152A7C (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 *     ?DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x180155214 (-DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest(
        char **a1,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        _OWORD *a3,
        unsigned int a4,
        int (*a5)(const void *, unsigned __int64))
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  char **v11; // rcx
  char *v12; // rdx
  __int64 v13; // rbx
  char result; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int128 v17; // [rsp+48h] [rbp-41h] BYREF
  char v18; // [rsp+58h] [rbp-31h]
  char v19; // [rsp+59h] [rbp-30h]
  __int64 v20; // [rsp+68h] [rbp-21h]
  void *v21; // [rsp+70h] [rbp-19h]
  void **v22; // [rsp+78h] [rbp-11h] BYREF
  __int128 v23; // [rsp+80h] [rbp-9h]
  char v24; // [rsp+90h] [rbp+7h]
  char v25; // [rsp+91h] [rbp+8h]
  char **v26; // [rsp+98h] [rbp+Fh]
  void ***v27; // [rsp+B0h] [rbp+27h]

  v20 = -2LL;
  v21 = operator new(0xD8uLL);
  *(_QWORD *)&v17 = Windows::Internal::Holographic::SpatialGraphDriverClient::OnDevicePropertyRequestComplete;
  DWORD2(v17) = 0;
  v22 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::`vftable';
  v23 = v17;
  v24 = v18;
  v25 = v19;
  v26 = a1;
  v27 = &v22;
  v9 = Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest(
         (__int64)v21,
         a2,
         (__int64)v21,
         a4,
         a3,
         a5,
         (__int64)&v22);
  *(_QWORD *)&v17 = v9;
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v22, v10);
  v11 = a1 + 38;
  v12 = a1[39];
  if ( a1[40] == v12 )
  {
    std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
      v11,
      v12,
      (__int64 *)&v17);
    v13 = v17;
  }
  else
  {
    v13 = 0LL;
    *(_QWORD *)v12 = v9;
    a1[39] += 8;
  }
  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)v11, (unsigned __int64)v12);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v15,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    result = HolographicDriverClientTrace::DevicePropertyRequestAdded_(v16, 1LL, a1 + 10, a3);
  }
  if ( v13 )
    return std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()(v15, v13);
  return result;
}
