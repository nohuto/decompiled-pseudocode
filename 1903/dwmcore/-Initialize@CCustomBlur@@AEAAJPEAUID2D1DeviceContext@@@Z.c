/*
 * XREFs of ?Initialize@CCustomBlur@@AEAAJPEAUID2D1DeviceContext@@@Z @ 0x1800D7438
 * Callers:
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800D7394 (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18003B9EC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCustomBlur::Initialize(CCustomBlur *this, struct ID2D1DeviceContext *a2)
{
  __int64 *v2; // r14
  __int64 (__fastcall *v5)(struct ID2D1DeviceContext *, GUID *, __int64 *); // rbx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  struct ID2D1Effect **v10; // r15
  __int64 (__fastcall *v11)(struct ID2D1DeviceContext *, GUID *, char *); // rbx
  signed int v12; // eax
  __int64 v13; // rcx
  struct ID2D1Effect *v14; // rcx
  ID2D1Effect **v15; // r14
  __int64 (__fastcall *v16)(struct ID2D1DeviceContext *, GUID *, char *); // rbx
  ID2D1Effect *v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  ID2D1Effect *v20; // rcx
  ID2D1Effect **v21; // r15
  __int64 (__fastcall *v22)(struct ID2D1DeviceContext *, GUID *, char *); // rbx
  ID2D1Effect *v23; // rcx
  ID2D1Effect **v24; // r14
  __int64 (__fastcall *v25)(struct ID2D1DeviceContext *, GUID *, char *); // rbx
  ID2D1Effect *v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-10h]
  int v30; // [rsp+60h] [rbp+30h] BYREF

  v2 = (__int64 *)((char *)this + 40);
  v5 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, __int64 *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 5);
  v6 = v5(a2, &CLSID_D2D1Scale, v2);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 54;
    goto LABEL_27;
  }
  v9 = *v2;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v9 + 72LL))(v9, 3LL, 0LL, &v30, 4);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 55;
    goto LABEL_27;
  }
  v10 = (struct ID2D1Effect **)((char *)this + 24);
  v11 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 3);
  v12 = v11(a2, &CLSID_D2D1Crop, (char *)this + 24);
  v8 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x39u, 0LL);
    return v8;
  }
  v14 = *v10;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v14 + 72LL))(
         v14,
         1LL,
         0LL,
         &v30,
         4);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 58;
    goto LABEL_27;
  }
  v15 = (ID2D1Effect **)((char *)this + 32);
  v16 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 4);
  v6 = v16(a2, &CLSID_D2D1Border, (char *)this + 32);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 60;
    goto LABEL_27;
  }
  ID2D1Effect::SetInputEffect(*v15, 0, *v10);
  v17 = *v15;
  v30 = 2;
  v18 = (*(__int64 (__fastcall **)(ID2D1Effect *, _QWORD, _QWORD, int *, int))(*(_QWORD *)v17 + 72LL))(
          v17,
          0LL,
          0LL,
          &v30,
          4);
  v8 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3Eu, 0LL);
    return v8;
  }
  v20 = *v15;
  v30 = 2;
  v6 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v20 + 72LL))(
         v20,
         1LL,
         0LL,
         &v30,
         4);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 63;
    goto LABEL_27;
  }
  v21 = (ID2D1Effect **)((char *)this + 48);
  v22 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 6);
  v6 = v22(a2, &CLSID_D2D1DirectionalBlurKernel, (char *)this + 48);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 65;
    goto LABEL_27;
  }
  ID2D1Effect::SetInputEffect(*v21, 0, *v15);
  v23 = *v21;
  v30 = 0;
  v6 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v23 + 72LL))(
         v23,
         1LL,
         0LL,
         &v30,
         4);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 69;
    goto LABEL_27;
  }
  v24 = (ID2D1Effect **)((char *)this + 56);
  v25 = *(__int64 (__fastcall **)(struct ID2D1DeviceContext *, GUID *, char *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 7);
  v6 = v25(a2, &CLSID_D2D1DirectionalBlurKernel, (char *)this + 56);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 71;
    goto LABEL_27;
  }
  ID2D1Effect::SetInputEffect(*v24, 0, *v21);
  v26 = *v24;
  v30 = 1;
  v6 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, int *, int))(*(_QWORD *)v26 + 72LL))(
         v26,
         1LL,
         0LL,
         &v30,
         4);
  v8 = v6;
  if ( v6 < 0 )
  {
    v29 = 75;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v29, 0LL);
    return v8;
  }
  if ( *((struct ID2D1DeviceContext **)this + 2) != a2 )
  {
    (*(void (__fastcall **)(struct ID2D1DeviceContext *))(*(_QWORD *)a2 + 8LL))(a2);
    v27 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v8;
}
