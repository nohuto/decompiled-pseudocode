/*
 * XREFs of ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJXZ @ 0x180025690
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800267AC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckD3D11Caps(CD3DDeviceLevel1 *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-48h] BYREF
  int v16; // [rsp+50h] [rbp-38h]

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 79);
  v13 = 0LL;
  v3 = **v1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v13);
  v4 = v3(v1, &GUID_26c5dc23_e49c_4b0a_8f79_e7b1ac804d32, &v13);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3D1u, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 79) + 264LL))(
           *((_QWORD *)this + 79),
           5LL,
           v15);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3D4u, 0LL);
    }
    else
    {
      if ( v16 )
        *((_BYTE *)this + 776) = 1;
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 79) + 264LL))(
             *((_QWORD *)this + 79),
             6LL,
             &v14);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3DBu, 0LL);
      }
      else if ( v14 )
      {
        v12 = v13;
        *((_BYTE *)this + 777) = 1;
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 88LL))(v12) & 1) == 0 )
          *((_BYTE *)this + 778) = 1;
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v13);
  return v6;
}
