/*
 * XREFs of ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800271D4
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180025400 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180020B6C (-IsOOM@@YA_NJ@Z.c)
 *     ?CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ @ 0x1800277B8 (-CurrentProcessHasIncreasedPriorityPrivileges@@YA_NXZ.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x180027898 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateD3DDevice(
        IDXGIAdapter **a1,
        struct ID3D11Device1 **a2,
        enum D3D_FEATURE_LEVEL *a3)
{
  int MaxFeatureLevel; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  UINT v9; // esi
  bool v10; // zf
  D3D_FEATURE_LEVEL *v11; // rax
  __int64 v12; // rbx
  HRESULT v13; // eax
  unsigned int v14; // ecx
  D3D_FEATURE_LEVEL v16; // eax
  __int64 v17; // r8
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-49h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-19h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-11h] BYREF
  _OWORD v21[2]; // [rsp+60h] [rbp-9h] BYREF
  int v22; // [rsp+80h] [rbp+17h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  ppDevice = 0LL;
  v21[0] = _mm_load_si128((const __m128i *)&_xmm);
  v22 = 37120;
  v21[1] = _mm_load_si128((const __m128i *)&_xmm);
  MaxFeatureLevel = CDXGIAdapterLimited::GetMaxFeatureLevel((CDXGIAdapterLimited *)a1, &pFeatureLevel);
  v8 = MaxFeatureLevel;
  if ( MaxFeatureLevel < 0 )
  {
    pFeatureLevels = 178;
    goto LABEL_24;
  }
  if ( (int)CCommonRegistryData::m_dwMaxD3DFeatureLevel >= 37120 )
  {
    v16 = pFeatureLevel;
    if ( (int)CCommonRegistryData::m_dwMaxD3DFeatureLevel < pFeatureLevel )
      v16 = CCommonRegistryData::m_dwMaxD3DFeatureLevel;
    pFeatureLevel = v16;
  }
  v9 = 169;
  v10 = !CurrentProcessHasIncreasedPriorityPrivileges();
  v11 = (D3D_FEATURE_LEVEL *)v21;
  if ( !v10 )
    v9 = 4265;
  v12 = 0LL;
  do
  {
    if ( *v11 <= pFeatureLevel )
      break;
    v12 = (unsigned int)(v12 + 1);
    ++v11;
  }
  while ( (unsigned int)v12 < 9 );
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&ppDevice);
  v13 = D3D11CreateDevice(
          a1[3],
          D3D_DRIVER_TYPE_UNKNOWN,
          0LL,
          v9,
          (const D3D_FEATURE_LEVEL *)v21 + v12,
          9 - v12,
          7u,
          &ppDevice,
          &pFeatureLevel,
          0LL);
  v8 = v13;
  if ( v13 >= 0 )
  {
    MaxFeatureLevel = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))ppDevice->lpVtbl->QueryInterface)(
                        ppDevice,
                        &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
                        a2);
    v8 = MaxFeatureLevel;
    if ( MaxFeatureLevel >= 0 )
    {
      *a3 = pFeatureLevel;
      goto LABEL_10;
    }
    pFeatureLevels = 298;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, MaxFeatureLevel, pFeatureLevels, 0LL);
    goto LABEL_10;
  }
  if ( v13 != -2147467262 && v13 != -2005270524 && IsOOM(v13) && *((_DWORD *)a1 + 74) == 4318 )
    ModuleFailFastForHRESULT(2291662989LL, retaddr, v17);
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v8, 0x145u, 0LL);
LABEL_10:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&ppDevice);
  return v8;
}
