/*
 * XREFs of ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@0II2@Z @ 0x1801FD56C
 * Callers:
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@3@Z @ 0x180203470 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x1801FC0F8 (-EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::VideoProcessorBlt(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        const struct tagRECT *a8,
        struct ID3D11Resource *a9,
        unsigned int a10,
        unsigned int a11,
        const struct tagRECT *a12)
{
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  const struct tagRECT *v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v33[3]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v34[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  _QWORD v36[3]; // [rsp+C0h] [rbp-40h] BYREF
  int v37; // [rsp+D8h] [rbp-28h]
  __int64 v38; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v41; // [rsp+F8h] [rbp-8h]
  unsigned int v42; // [rsp+FCh] [rbp-4h]

  v30 = a12;
  v32 = 0LL;
  v31 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  memset_0(v34, 0, 0x48uLL);
  v41 = a10;
  v42 = a11;
  v40 = 0LL;
  v16 = CD3DDeviceLevel1::EnsureVideoProcessor(this, a5, a6, a10, a11);
  v18 = v16;
  if ( v16 < 0 )
  {
    v29 = 2615;
    goto LABEL_13;
  }
  v19 = *((_QWORD *)this + 81);
  HIDWORD(v38) = 1;
  HIDWORD(v39) = a3;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v32);
  v16 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, __int64 *, __int64 *))(*(_QWORD *)v19 + 64LL))(
          v19,
          a2,
          *((_QWORD *)this + 83),
          &v38,
          &v32);
  v18 = v16;
  if ( v16 < 0 )
  {
    v29 = 2623;
    goto LABEL_13;
  }
  v20 = *((_QWORD *)this + 81);
  LODWORD(v33[0]) = 1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v31);
  v21 = (*(__int64 (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _QWORD *, __int64 *))(*(_QWORD *)v20 + 72LL))(
          v20,
          a9,
          *((_QWORD *)this + 83),
          v33,
          &v31);
  v18 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xA46u);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 82) + 240LL))(
    *((_QWORD *)this + 82),
    *((_QWORD *)this + 84),
    0LL,
    1LL,
    a8);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, const struct tagRECT *))(**((_QWORD **)this + 82) + 248LL))(
    *((_QWORD *)this + 82),
    *((_QWORD *)this + 84),
    0LL,
    1LL,
    v30);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 82) + 104LL))(
    *((_QWORD *)this + 82),
    *((_QWORD *)this + 84),
    1LL,
    &v40);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 82) + 592LL))(
    *((_QWORD *)this + 82),
    *((_QWORD *)this + 84),
    0LL,
    a4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 82) + 296LL))(
    *((_QWORD *)this + 82),
    *((_QWORD *)this + 84),
    0LL,
    0LL);
  if ( a7 )
  {
    v30 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
    v23 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, const struct tagRECT **))this + 82))(
            *((_QWORD *)this + 82),
            &GUID_c4e7374c_6243_4d1b_ae87_52b4f740e261,
            &v30);
    v18 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xA61u);
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
      goto LABEL_14;
    }
    v25 = *((_QWORD *)this + 84);
    v36[0] = 0LL;
    v36[1] = 0LL;
    v36[2] = 1000LL;
    v37 = 13108200;
    (*(void (__fastcall **)(const struct tagRECT *, __int64, _QWORD, __int64, int, _QWORD *))(*(_QWORD *)&v30->left
                                                                                            + 648LL))(
      v30,
      v25,
      0LL,
      1LL,
      28,
      v36);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
  }
  v26 = *((_QWORD *)this + 82);
  v35 = v32;
  v27 = *((_QWORD *)this + 84);
  v34[0] = 1;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD *))(*(_QWORD *)v26 + 424LL))(
          v26,
          v27,
          v31,
          0LL,
          1,
          v34);
  v18 = v16;
  if ( v16 < 0 )
  {
    v29 = 2677;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v29);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v31);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v32);
  return v18;
}
