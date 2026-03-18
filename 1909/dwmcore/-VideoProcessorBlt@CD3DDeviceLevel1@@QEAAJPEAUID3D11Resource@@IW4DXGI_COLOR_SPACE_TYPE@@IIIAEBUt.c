/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@W4_D3DDDI_ROTATION@@0II2@Z @ 0x18015CD24
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@W4_D3DDDI_ROTATION@@3@Z @ 0x180162440 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x18015B738 (-EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        unsigned int a11,
        unsigned int a12,
        __int64 a13)
{
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64, _QWORD, __int64 *, __int64 *); // rbx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64, _QWORD, _QWORD *, __int64 *); // rbx
  signed int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v28)(_QWORD, GUID *, __int64 *); // rbx
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // r9d
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v40[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v41[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v46; // [rsp+D8h] [rbp-28h]
  unsigned int v47; // [rsp+DCh] [rbp-24h]
  _QWORD v48[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v49; // [rsp+F8h] [rbp-8h]

  v37 = a13;
  v39 = 0LL;
  v38 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v40[0] = 0LL;
  v40[1] = 0LL;
  memset_0(v41, 0, 0x48uLL);
  v46 = a11;
  v47 = a12;
  v45 = 0LL;
  v17 = CD3DDeviceLevel1::EnsureVideoProcessor((CD3DDeviceLevel1 *)a1, a5, a6, a11, a12);
  v19 = v17;
  if ( v17 < 0 )
  {
    v36 = 2619;
    goto LABEL_23;
  }
  HIDWORD(v44) = a3;
  v20 = *(_QWORD *)(a1 + 648);
  HIDWORD(v43) = 1;
  v21 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v20 + 64LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v39);
  v17 = v21(v20, a2, *(_QWORD *)(a1 + 664), &v43, &v39);
  v19 = v17;
  if ( v17 < 0 )
  {
    v36 = 2627;
    goto LABEL_23;
  }
  v22 = *(_QWORD *)(a1 + 648);
  LODWORD(v40[0]) = 1;
  v23 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *, __int64 *))(*(_QWORD *)v22 + 72LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v38);
  v24 = v23(v22, a10, *(_QWORD *)(a1 + 664), v40, &v38);
  v19 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xA4Au, 0LL);
    goto LABEL_25;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 656) + 240LL))(
    *(_QWORD *)(a1 + 656),
    *(_QWORD *)(a1 + 672),
    0LL,
    1LL,
    a8);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 656) + 248LL))(
    *(_QWORD *)(a1 + 656),
    *(_QWORD *)(a1 + 672),
    0LL,
    1LL,
    v37);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 656) + 104LL))(
    *(_QWORD *)(a1 + 656),
    *(_QWORD *)(a1 + 672),
    1LL,
    &v45);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 656) + 592LL))(
    *(_QWORD *)(a1 + 656),
    *(_QWORD *)(a1 + 672),
    0LL,
    a4);
  v18 = a9;
  if ( a9 != 1 )
  {
    if ( (*(_BYTE *)(a1 + 788) & 0x40) == 0 )
    {
      v19 = -2003292287;
      v34 = -2003292287;
      v36 = 2665;
LABEL_24:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v34, v36, 0LL);
      goto LABEL_25;
    }
    v26 = 0;
    switch ( a9 )
    {
      case 2u:
        v26 = 1;
        break;
      case 3u:
        v26 = 2;
        break;
      case 4u:
        v26 = 3;
        break;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(**(_QWORD **)(a1 + 656) + 504LL))(
      *(_QWORD *)(a1 + 656),
      *(_QWORD *)(a1 + 672),
      0LL,
      1LL,
      v26);
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 656) + 296LL))(
    *(_QWORD *)(a1 + 656),
    *(_QWORD *)(a1 + 672),
    0LL,
    0LL);
  if ( a7 )
  {
    v27 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 656);
    v37 = 0LL;
    v28 = **v27;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
    v29 = v28(v27, &GUID_c4e7374c_6243_4d1b_ae87_52b4f740e261, &v37);
    v19 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xA74u, 0LL);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
      goto LABEL_25;
    }
    v31 = *(_QWORD *)(a1 + 672);
    v48[0] = 0LL;
    v48[1] = 0LL;
    v48[2] = 1000LL;
    v49 = 13108200;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(*(_QWORD *)v37 + 648LL))(
      v37,
      v31,
      0LL,
      1LL,
      28,
      v48);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v37);
  }
  v32 = *(_QWORD *)(a1 + 656);
  v42 = v39;
  v33 = *(_QWORD *)(a1 + 672);
  v41[0] = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v32 + 424LL))(
          v32,
          v33,
          v38,
          0LL,
          1,
          v41);
  v19 = v17;
  if ( v17 < 0 )
  {
    v36 = 2696;
LABEL_23:
    v34 = v17;
    goto LABEL_24;
  }
LABEL_25:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v39);
  return v19;
}
