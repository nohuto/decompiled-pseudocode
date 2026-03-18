/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800D60A8
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008A208 (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z @ 0x1800D5D40 (--0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800D74F0 (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x1800E8F90 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        struct CDXGIAdapterLimited *a1,
        struct IMILPoolManager *a2,
        struct CD3DDeviceLevel1 **a3)
{
  volatile signed __int32 *v4; // rdi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  CD3DDeviceLevel1 *v10; // rax
  CD3DDeviceLevel1 *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  enum D3D_FEATURE_LEVEL v17; // [rsp+60h] [rbp+18h] BYREF
  struct ID3D11Device1 *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v18);
  v7 = CD3DDeviceLevel1::CreateD3DDevice(a1, &v18, &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18024C878, 1u, v7, 0x182u);
  }
  else
  {
    v10 = (CD3DDeviceLevel1 *)WPF::ProcessHeapImpl::AllocClear(0x710uLL);
    if ( !v10 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v11 = CD3DDeviceLevel1::CD3DDeviceLevel1(v10, a2);
    v4 = (volatile signed __int32 *)v11;
    if ( !v11 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_18024C878, 1u, -2147024882, 0x185u);
      goto LABEL_7;
    }
    v13 = CD3DDeviceLevel1::Init(v11, v18, v17, a1);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_18024C878, 1u, v13, 0x189u);
    }
    else
    {
      _InterlockedIncrement(v4 + 126);
      *a3 = (struct CD3DDeviceLevel1 *)v4;
      v4 = 0LL;
    }
  }
  if ( v9 < 0 && v4 )
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v4, 1u);
LABEL_7:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v9;
}
