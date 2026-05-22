/*
 * XREFs of ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180111560
 * Callers:
 *     ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x180111DE4 (-AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologr.c)
 * Callees:
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x18007C358 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _OWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  *(_QWORD *)a1 = &Windows::Internal::Holographic::V2PropertyRequest::`vftable';
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 5997616;
  *(_DWORD *)(a1 + 52) = a4;
  v8 = (_DWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 56) = a1 + 128;
  *(_QWORD *)(a1 + 64) = 24LL;
  *(_QWORD *)(a1 + 72) = a1 + 144;
  std::vector<unsigned char>::vector<unsigned char>((char **)(a1 + 80), 0xCuLL);
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = a6;
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &Windows::Internal::Holographic::V2DevicePropertyRequest::`vftable';
  *v8 = 0;
  *(_QWORD *)(a1 + 132) = 0LL;
  *(_QWORD *)(a1 + 140) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 208) = 0LL;
  v9 = *(_QWORD *)(a7 + 56);
  if ( v9 )
  {
    if ( v9 != a7 )
    {
      *(_QWORD *)(a1 + 208) = v9;
      goto LABEL_6;
    }
    *(_QWORD *)(a1 + 208) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1 + 152);
    v11 = *(_QWORD *)(a7 + 56);
    if ( v11 )
    {
      LOBYTE(v10) = v11 != a7;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
LABEL_6:
      *(_QWORD *)(a7 + 56) = 0LL;
    }
  }
  *(_OWORD *)v8 = *a5;
  return a1;
}
