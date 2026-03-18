/*
 * XREFs of ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D6348
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckD3D11Caps(CD3DDeviceLevel1 *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rbx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 79);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v12);
  v3 = (**v1)(v1, &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32, &v12);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x3C3u);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 79) + 264LL))(
           *((_QWORD *)this + 79),
           5LL,
           v14);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x3C6u);
    }
    else
    {
      if ( v15 )
        *((_BYTE *)this + 776) = 1;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 79) + 264LL))(
             *((_QWORD *)this + 79),
             6LL,
             &v13);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3CDu);
      }
      else if ( v13 )
      {
        v11 = v12;
        *((_BYTE *)this + 777) = 1;
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11) & 1) == 0 )
          *((_BYTE *)this + 778) = 1;
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v12);
  return v5;
}
