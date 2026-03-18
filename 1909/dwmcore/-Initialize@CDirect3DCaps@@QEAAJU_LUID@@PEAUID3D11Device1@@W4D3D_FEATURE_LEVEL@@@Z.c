/*
 * XREFs of ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x18002D76C
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x18002DEEC (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirect3DCaps::Initialize(CDirect3DCaps *this, struct _LUID a2, struct ID3D11Device1 *a3, int a4)
{
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rcx
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  HRESULT (__stdcall *CreateTexture2D)(ID3D11Device1 *, const D3D11_TEXTURE2D_DESC *, const D3D11_SUBRESOURCE_DATA *, ID3D11Texture2D **); // rax
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v17[5]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+54h] [rbp-2Ch]
  int v19; // [rsp+5Ch] [rbp-24h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+68h] [rbp-18h]

  *(struct _LUID *)this = a2;
  v7 = 0;
  if ( a4 >= 37120 )
  {
    *((_QWORD *)this + 5) = 0xFFFFLL;
    *((_DWORD *)this + 2) = 2;
    *((_DWORD *)this + 3) = 2;
    *((_DWORD *)this + 6) = 8;
    *((_DWORD *)this + 8) = 2048;
    *((_DWORD *)this + 9) = 2048;
    *((_DWORD *)this + 7) = 8;
    v8 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, __int64 *, __int64))a3->lpVtbl->CheckFeatureSupport)(
           a3,
           11LL,
           &v15,
           4LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x69u, 0LL);
      return v7;
    }
    *((_BYTE *)this + 59) = (_DWORD)v15 != 0;
  }
  if ( a4 < 37632 )
  {
    v10 = *((_DWORD *)this + 8);
  }
  else
  {
    *((_DWORD *)this + 8) = 4096;
    v10 = 4096;
    *((_DWORD *)this + 9) = 4096;
    *((_QWORD *)this + 5) = 0xFFFFFLL;
    *((_BYTE *)this + 59) = 1;
  }
  if ( a4 >= 40960 )
  {
    v10 = 0x2000;
    *((_DWORD *)this + 2) = 4;
    *((_DWORD *)this + 8) = 0x2000;
    *((_DWORD *)this + 9) = 0x2000;
    *((_DWORD *)this + 3) = 4;
    *((_QWORD *)this + 5) = 1431655765LL;
  }
  if ( a4 >= 45056 )
  {
    v10 = 0x4000;
    *((_DWORD *)this + 8) = 0x4000;
    *((_DWORD *)this + 9) = 0x4000;
  }
  if ( v10 < 0x1000 )
  {
    lpVtbl = a3->lpVtbl;
    v15 = 0LL;
    v17[0] = 2100;
    v17[1] = 1;
    CreateTexture2D = lpVtbl->CreateTexture2D;
    v17[2] = 1;
    v17[3] = 1;
    v17[4] = 61;
    v18 = 1LL;
    v19 = 0;
    v20 = 8LL;
    v21 = 0;
    if ( ((int (__fastcall *)(struct ID3D11Device1 *, _DWORD *, _QWORD, __int64 *))CreateTexture2D)(a3, v17, 0LL, &v15) >= 0 )
    {
      *((_DWORD *)this + 8) = 4096;
      *((_DWORD *)this + 9) = 4096;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         &v16) >= 0 )
  {
    v11 = v16;
    *((_DWORD *)this + 8) = 0x800000;
    *((_DWORD *)this + 9) = 0x800000;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 5) = a4;
  *((_QWORD *)this + 6) = 65793LL;
  return v7;
}
