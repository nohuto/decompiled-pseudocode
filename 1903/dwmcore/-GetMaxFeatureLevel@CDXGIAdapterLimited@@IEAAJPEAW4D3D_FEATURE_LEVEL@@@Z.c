/*
 * XREFs of ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x180027898
 * Callers:
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800271D4 (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetMaxFeatureLevel(CDXGIAdapterLimited *this, enum D3D_FEATURE_LEVEL *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // esi
  enum D3D_FEATURE_LEVEL v6; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 3);
  v5 = 0;
  v13 = 0;
  v6 = D3D_FEATURE_LEVEL_12_1;
  if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v3 + 72LL))(
         v3,
         &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
         &v14) < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**((_QWORD **)this + 3) + 72LL))(
           *((_QWORD *)this + 3),
           &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
           &v14);
    if ( v8 < 0 )
    {
      if ( v8 != -2005270524 )
      {
        v13 = v8;
        v5 = v8;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1B0u, 0LL);
        goto LABEL_6;
      }
      goto LABEL_7;
    }
    v10 = *((_DWORD *)this + 74) == 4318;
    v11 = v14;
    *((_QWORD *)this + 44) = v14;
    if ( v10 )
    {
      if ( v11 <= 0x7000F000B18E1LL )
        goto LABEL_7;
    }
    else
    {
      v6 = D3D_FEATURE_LEVEL_10_0;
    }
  }
  else
  {
    *((_QWORD *)this + 44) = v14;
  }
  if ( !CCommonRegistryData::m_fForce10Level9 )
  {
    if ( *((int *)this + 87) < 1105 )
    {
      v12 = v6;
      if ( !CCommonRegistryData::m_fForce10OnWDDM1_0 )
        v12 = 37632;
      v6 = v12;
    }
    goto LABEL_5;
  }
LABEL_7:
  v6 = D3D_FEATURE_LEVEL_9_3;
LABEL_5:
  *a2 = v6;
LABEL_6:
  TranslateDXGIorD3DErrorInContext(v5, 0LL, &v13);
  return v13;
}
