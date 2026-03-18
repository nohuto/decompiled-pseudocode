/*
 * XREFs of ?Create@CSurfaceShaderComposer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800D7640
 * Callers:
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800D960C (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@@PEAUID3DDeviceContextState@@PEAVCD3DDeviceLevel1@@@Z @ 0x1800D7A1C (--0CSurfaceShaderComposer@@IEAA@PEAUID3D11VertexShader@@PEAUID3D11InputLayout@@PEAUID3D11Buffer@.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 */

__int64 __fastcall CSurfaceShaderComposer::Create(struct CD3DDeviceLevel1 *a1, struct CSurfaceShaderComposer **a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  CSurfaceShaderComposer *v9; // rax
  __int64 v10; // rcx
  struct CSurfaceShaderComposer *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-E0h]
  struct ID3DDeviceContextState *v14; // [rsp+50h] [rbp-B0h] BYREF
  struct ID3D11Buffer *v15; // [rsp+58h] [rbp-A8h] BYREF
  struct ID3D11InputLayout *v16; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D11VertexShader *v17; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v19[2]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h] BYREF
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  const char *v24; // [rsp+B0h] [rbp-50h] BYREF
  int v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+BCh] [rbp-44h]
  int v27; // [rsp+C4h] [rbp-3Ch]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  const char *v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  __int64 v31; // [rsp+DCh] [rbp-24h]
  int v32; // [rsp+E4h] [rbp-1Ch]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  const char *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+FCh] [rbp-4h]
  int v37; // [rsp+104h] [rbp+4h]
  __int64 v38; // [rsp+108h] [rbp+8h]

  v2 = *((_QWORD *)a1 + 79);
  v3 = *((_QWORD *)a1 + 80);
  v24 = "POSITION";
  v17 = 0LL;
  v16 = 0LL;
  v29 = "TEXCOORD";
  v34 = "TEXCOORD";
  v15 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v19[0] = 37632;
  v19[1] = 40960;
  v25 = 0;
  v26 = 16LL;
  v27 = -1;
  v28 = 0LL;
  v30 = 0;
  v31 = 16LL;
  v32 = -1;
  v33 = 0LL;
  v35 = 1;
  v36 = 16LL;
  v37 = -1;
  v38 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, struct ID3D11VertexShader **))(*(_QWORD *)v2 + 96LL))(
         v2,
         &unk_1802811C0,
         832LL,
         0LL,
         &v17);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = 134;
    goto LABEL_19;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
  v6 = (*(__int64 (__fastcall **)(__int64, const char **, __int64, void *, __int64, struct ID3D11InputLayout **))(*(_QWORD *)v2 + 88LL))(
         v2,
         &v24,
         3LL,
         &unk_1802811C0,
         832LL,
         &v16);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = 143;
    goto LABEL_19;
  }
  v21 = 0x200000090LL;
  v20[0] = &unk_180281520;
  v22 = 0x1000000000001LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, struct ID3D11Buffer **))(*(_QWORD *)v2 + 24LL))(
         v2,
         &v21,
         v20,
         &v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = 156;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v14);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 376LL))(v2, 1LL, v19);
  v8 = v6;
  if ( v6 < 0 )
  {
    v13 = 166;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v13);
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v18);
  (*(void (__fastcall **)(__int64, struct ID3DDeviceContextState *, __int64 *))(*(_QWORD *)v3 + 1048LL))(v3, v14, &v18);
  (*(void (__fastcall **)(__int64, struct ID3D11InputLayout *))(*(_QWORD *)v3 + 136LL))(v3, v16);
  (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **, void *, int *))(*(_QWORD *)v3 + 144LL))(
    v3,
    0LL,
    1LL,
    &v15,
    &unk_18028150C,
    &`CVisual::SetVisualDesktopId'::`2'::sc_defaultValue);
  (*(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v3 + 88LL))(
    v3,
    v17,
    0LL,
    0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 344LL))(v3, *((_QWORD *)a1 + 220));
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 288LL))(v3, *((_QWORD *)a1 + 221), 0LL);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 192LL))(v3, 4LL);
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 1048LL))(v3, v18, 0LL);
  v9 = (CSurfaceShaderComposer *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
  if ( v9 )
    v11 = CSurfaceShaderComposer::CSurfaceShaderComposer(v9, v17, v16, v15, v14, a1);
  else
    v11 = 0LL;
  *a2 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xCFu);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  return v8;
}
