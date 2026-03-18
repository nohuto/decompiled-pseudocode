/*
 * XREFs of ?InitializeWithD3DDevice@CHolographicFrameProcessor@@UEAAJPEAUID3D11Device1@@@Z @ 0x18024A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicFrameProcessor::InitializeWithD3DDevice(
        CHolographicFrameProcessor *this,
        struct ID3D11Device1 *a2)
{
  struct ID3D11Device1 *v2; // rax
  unsigned int v3; // ebp
  int v6; // esi
  signed int v7; // eax
  __int64 v8; // rcx
  struct ID3D11Device1 *v9; // rsi
  void (__stdcall *GetImmediateContext)(ID3D11Device1 *, ID3D11DeviceContext **); // rbx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v12)(_QWORD, GUID *, char *); // rdi
  HRESULT (__stdcall *QueryInterface)(ID3D11Device1 *, const IID *const, void **); // rbx
  __int64 v14; // rbx
  __int64 *v15; // r14
  int (__fastcall *v16)(__int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  unsigned int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  struct ID3D11Device1 *v22; // [rsp+68h] [rbp+10h] BYREF

  v2 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
  v3 = 0;
  v21 = 0LL;
  if ( !v2 )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 11);
    v7 = OpenFlipConsumer(*((_QWORD *)this + 10), (char *)this + 88, (char *)this + 40);
    v6 = v7;
    if ( v7 < 0 )
    {
      v20 = 116;
    }
    else
    {
      v9 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
      if ( v9 != a2 )
      {
        if ( a2 )
        {
          ((void (__fastcall *)(struct ID3D11Device1 *))a2->lpVtbl->AddRef)(a2);
          v9 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
        }
        v22 = v9;
        *((_QWORD *)this + 6) = a2;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v22);
        v9 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
      }
      GetImmediateContext = v9->lpVtbl->GetImmediateContext;
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 7);
      ((void (__fastcall *)(struct ID3D11Device1 *, char *))GetImmediateContext)(v9, (char *)this + 56);
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 7);
      v12 = **v11;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 8);
      v7 = v12(v11, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 64);
      v6 = v7;
      if ( v7 < 0 )
      {
        v20 = 121;
      }
      else
      {
        QueryInterface = a2->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
        v7 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))QueryInterface)(
               a2,
               &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
               &v21);
        v6 = v7;
        if ( v7 < 0 )
        {
          v20 = 123;
        }
        else
        {
          v14 = v21;
          v15 = (__int64 *)((char *)this + 96);
          v16 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v21 + 544LL);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v15);
          if ( v16(v14, 0LL, 0LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v15) >= 0 )
            goto LABEL_18;
          v17 = v21;
          v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v21 + 544LL);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v15);
          v7 = v18(v17, 0LL, 8LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v15);
          v6 = v7;
          if ( v7 >= 0 )
            goto LABEL_18;
          v20 = 132;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v20, 0LL);
LABEL_18:
    v3 = v6;
    goto LABEL_19;
  }
  if ( v2 != a2 )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x8000FFFF, 0x71u, 0LL);
    goto LABEL_18;
  }
LABEL_19:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
  return v3;
}
