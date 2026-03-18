/*
 * XREFs of ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180025400
 * Callers:
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180024F2C (-CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180024240 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ??0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z @ 0x1800250A8 (--0CD3DDeviceLevel1@@AEAA@PEAVIMILPoolManager@@@Z.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800267AC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800271D4 (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Create(
        struct CDXGIAdapterLimited *a1,
        struct IMILPoolManager *a2,
        struct CD3DDeviceLevel1 **a3)
{
  volatile signed __int32 *v4; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  CD3DDeviceLevel1 *v10; // rax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  enum D3D_FEATURE_LEVEL v15; // [rsp+60h] [rbp+18h] BYREF
  struct ID3D11Device1 *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v4 = 0LL;
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  v7 = CD3DDeviceLevel1::CreateD3DDevice(a1, &v16, &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802920EC, 1u, v7, 0x166u, 0LL);
  }
  else
  {
    v10 = (CD3DDeviceLevel1 *)DefaultHeap::AllocClear(0x7B0uLL);
    if ( v10 )
      v4 = (volatile signed __int32 *)CD3DDeviceLevel1::CD3DDeviceLevel1(v10, a2);
    if ( !v4 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802920EC, 1u, -2147024882, 0x169u, 0LL);
      goto LABEL_7;
    }
    v12 = CD3DDeviceLevel1::Init((CD3DDeviceLevel1 *)v4, v16, v15, a1);
    v9 = v12;
    if ( v12 >= 0 )
    {
      _InterlockedIncrement(v4 + 126);
      *a3 = (struct CD3DDeviceLevel1 *)v4;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_1802920EC, 1u, v12, 0x16Du, 0LL);
  }
  if ( v4 )
    CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v4, 1);
LABEL_7:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  return v9;
}
