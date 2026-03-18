/*
 * XREFs of ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x1800E5858
 * Callers:
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800E57AC (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800E5B18 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Initialize(CCustomBlur *this, struct ID2D1DeviceContext *a2)
{
  __int64 *v2; // r14
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct ID2D1Effect **v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  struct ID2D1Effect *v12; // rcx
  ID2D1Effect **v13; // r14
  int v14; // r9d
  ID2D1Effect *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  ID2D1Effect *v18; // rcx
  ID2D1Effect **v19; // r15
  int v20; // r9d
  ID2D1Effect *v21; // rcx
  ID2D1Effect **v22; // r14
  int v23; // r9d
  ID2D1Effect *v24; // rcx
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-10h]
  int v28; // [rsp+60h] [rbp+30h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 5);
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, __int64 *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1Scale,
         v2);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 56;
    goto LABEL_27;
  }
  v8 = *v2;
  v28 = 1;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v8 + 72LL))(v8, 3LL, 0LL, &v28, 4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 57;
    goto LABEL_27;
  }
  v9 = (struct ID2D1Effect **)((char *)this + 24);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 3);
  v10 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
          a2,
          &CLSID_D2D1Crop,
          (char *)this + 24);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x3Bu);
    return v7;
  }
  v12 = *v9;
  v28 = 1;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v12 + 72LL))(
         v12,
         1LL,
         0LL,
         &v28,
         4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 60;
    goto LABEL_27;
  }
  v13 = (ID2D1Effect **)((char *)this + 32);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 4);
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1Border,
         (char *)this + 32);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 62;
    goto LABEL_27;
  }
  ID2D1Effect::SetInputEffect(*v13, 0, *v9, v14);
  v15 = *v13;
  v28 = 2;
  v16 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, int *, int))(*(_QWORD *)v15 + 72LL))(
          v15,
          0LL,
          0LL,
          &v28,
          4);
  v7 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x40u);
    return v7;
  }
  v18 = *v13;
  v28 = 2;
  v5 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v18 + 72LL))(
         v18,
         1LL,
         0LL,
         &v28,
         4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 65;
    goto LABEL_27;
  }
  v19 = (ID2D1Effect **)((char *)this + 48);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 6);
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1DirectionalBlurKernel,
         (char *)this + 48);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 67;
    goto LABEL_27;
  }
  ID2D1Effect::SetInputEffect(*v19, 0, *v13, v20);
  v21 = *v19;
  v28 = 0;
  v5 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v21 + 72LL))(
         v21,
         1LL,
         0LL,
         &v28,
         4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 71;
    goto LABEL_27;
  }
  v22 = (ID2D1Effect **)((char *)this + 56);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 7);
  v5 = (*(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL))(
         a2,
         &CLSID_D2D1DirectionalBlurKernel,
         (char *)this + 56);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 73;
    goto LABEL_27;
  }
  ID2D1Effect::SetInputEffect(*v22, 0, *v19, v23);
  v24 = *v22;
  v28 = 1;
  v5 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v24 + 72LL))(
         v24,
         1LL,
         0LL,
         &v28,
         4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v27 = 77;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v27);
    return v7;
  }
  if ( *((struct ID2D1DeviceContext **)this + 2) != a2 )
  {
    (*(void (__fastcall **)(struct ID2D1DeviceContext *))(*(_QWORD *)a2 + 8LL))(a2);
    v25 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v7;
}
