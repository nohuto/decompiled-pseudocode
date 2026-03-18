/*
 * XREFs of ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1800D66A8
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801FBB68 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedHandleFence(
        CD3DDeviceLevel1 *this,
        const struct CResourceTag *a2,
        struct ID3D11Fence *a3,
        struct ID3D11Fence **a4,
        void **a5,
        enum D3D11_FENCE_FLAG a6)
{
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx
  struct ID3D11Fence *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v6 = *((_QWORD *)this + 79);
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, struct ID3D11Fence **))(*(_QWORD *)v6 + 544LL))(
         v6,
         0LL,
         a6 | 2u,
         &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
         &v14);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x85Eu);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(struct ID3D11Fence *, _QWORD, __int64, _QWORD, void **))v14->lpVtbl->CreateSharedHandle)(
            v14,
            0LL,
            0x10000000LL,
            0LL,
            a5);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *a4 = v14;
      return v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x85Fu);
  }
  if ( v14 )
    ((void (__fastcall *)(struct ID3D11Fence *))v14->lpVtbl->Release)(v14);
  return v10;
}
