/*
 * XREFs of ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002EA64
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180030490 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDeviceLevel1@@@Z @ 0x18002EE44 (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDeviceLevel1 *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 (__fastcall *v6)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **); // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi
  __int64 (__fastcall *v10)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **); // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *, _QWORD *, struct ID3D11Buffer **); // rbx
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *); // rbx
  void (__fastcall *v13)(__int64, struct ID3DDeviceContextState *, __int64 *); // rbx
  CSurfaceShaderComposer *v14; // rax
  unsigned int v15; // ecx
  struct CSurfaceShaderComposer *v16; // rax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v19; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v20; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v21; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v22; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v24[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  const char *v29; // [rsp+B0h] [rbp-50h] BYREF
  int v30; // [rsp+B8h] [rbp-48h]
  __int64 v31; // [rsp+BCh] [rbp-44h]
  int v32; // [rsp+C4h] [rbp-3Ch]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  const char *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+DCh] [rbp-24h]
  int v37; // [rsp+E4h] [rbp-1Ch]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  const char *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+104h] [rbp+4h]
  __int64 v43; // [rsp+108h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 79);
  v3 = *((_QWORD *)a1 + 80);
  v29 = "POSITION";
  v22 = 0LL;
  v21 = 0LL;
  v34 = "TEXCOORD";
  v39 = "TEXCOORD";
  v20 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  v24[0] = 37632;
  v24[1] = 40960;
  v30 = 0;
  v31 = 16LL;
  v32 = -1;
  v33 = 0LL;
  v35 = 0;
  v36 = 16LL;
  v37 = -1;
  v38 = 0LL;
  v40 = 1;
  v41 = 16LL;
  v42 = -1;
  v43 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v25[0] = 0LL;
  v25[1] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
  v6 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v22);
  v7 = v6(v2, &unk_180280DB0, 832LL, 0LL, &v22);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 134;
    goto LABEL_19;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  v10 = *(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
  v7 = v10(v2, &v29, 3LL, &unk_180280DB0, 832LL, &v21);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 143;
    goto LABEL_19;
  }
  v26 = 0x200000090LL;
  v25[0] = &unk_180281120;
  v27 = 0x1000000000001LL;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
  v7 = v11(v2, &v26, v25, &v20);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 156;
    goto LABEL_19;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 376LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  v7 = v12(v2, 1LL, v24);
  v9 = v7;
  if ( v7 < 0 )
  {
    v18 = 166;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v18, 0LL);
    goto LABEL_13;
  }
  v13 = *(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v23);
  v13(v3, v19, &v23);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v21);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, int *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v20,
    &unk_1802810FC,
    &`CVisual::SetVisualDesktopId'::`2'::sc_defaultValue);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v22,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 240));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 241), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v23, 0LL);
  v14 = (CSurfaceShaderComposer *)DefaultHeap::Alloc(0x68uLL);
  if ( v14 )
    v16 = CSurfaceShaderComposer::CSurfaceShaderComposer(v14, v22, v21, v20, v19, a1);
  else
    v16 = 0LL;
  *a2 = v16;
  if ( !v16 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0xCFu, 0LL);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v22);
  return v9;
}
