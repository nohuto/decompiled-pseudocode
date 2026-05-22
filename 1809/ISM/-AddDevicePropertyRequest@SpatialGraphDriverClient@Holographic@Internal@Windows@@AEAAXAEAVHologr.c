/*
 * XREFs of ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x180111DE4
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180112554 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18010CC94 (-DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@.c)
 *     ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180111560 (--0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x18011BF14 (--$_Emplace_reallocate@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        int a4,
        __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // rdi
  void ***v11; // rdx
  __int64 *v12; // rdx
  __int64 v13; // rbx
  _DWORD *v14; // rcx
  char result; // al
  __int64 v16; // rcx
  __int128 v17; // [rsp+48h] [rbp-41h] BYREF
  __int128 v18; // [rsp+58h] [rbp-31h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  void *v20; // [rsp+70h] [rbp-19h]
  void **v21; // [rsp+78h] [rbp-11h] BYREF
  __int128 v22; // [rsp+80h] [rbp-9h]
  __int128 v23; // [rsp+90h] [rbp+7h]
  void ***v24; // [rsp+B0h] [rbp+27h]

  v19 = -2LL;
  v20 = operator new(0xD8uLL);
  *(_QWORD *)&v17 = Windows::Internal::Holographic::SpatialGraphDriverClient::OnDevicePropertyRequestComplete;
  DWORD2(v17) = 0;
  *((_QWORD *)&v18 + 1) = a1;
  v21 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::`vftable';
  v22 = v17;
  v23 = v18;
  v24 = &v21;
  v10 = Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest(
          (__int64)v20,
          a2,
          v9,
          a4,
          a3,
          a5,
          (__int64)&v21);
  *(_QWORD *)&v17 = v10;
  if ( v24 )
  {
    v11 = &v21;
    LOBYTE(v11) = v24 != &v21;
    ((void (__fastcall *)(void ***, void ***))(*v24)[4])(v24, v11);
    v24 = 0LL;
  }
  v12 = *(__int64 **)(a1 + 312);
  if ( *(__int64 **)(a1 + 320) == v12 )
  {
    std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
      a1 + 304,
      v12,
      &v17);
    v13 = v17;
  }
  else
  {
    v13 = 0LL;
    *v12 = v10;
    *(_QWORD *)(a1 + 312) += 8LL;
  }
  v14 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  result = v14 && *v14;
  if ( result )
  {
    HolographicDriverClientTrace::Instance();
    result = HolographicDriverClientTrace::DevicePropertyRequestAdded_(v16, 1, a1 + 80, (__int64)a3);
  }
  if ( v13 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, 1LL);
  return result;
}
