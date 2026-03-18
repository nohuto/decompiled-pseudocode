/*
 * XREFs of ?CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z @ 0x1801FBCE0
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@AEAAJXZ @ 0x1801581E0 (-EnsureResources@CCaptureRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSupportedFence(
        CD3DDeviceLevel1 *this,
        struct ID3D11Fence *a2,
        struct ID3D11Fence **a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct ID3D11Fence *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_QWORD *)this + 87);
  v12 = 0LL;
  if ( *(_BYTE *)(v3 + 344) )
  {
    v5 = *((_QWORD *)this + 79);
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, struct ID3D11Fence **))(*(_QWORD *)v5 + 544LL))(
           v5,
           0LL,
           0LL,
           &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
           &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v11 = 2109;
LABEL_4:
      v8 = v6;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v3 + 345) )
  {
    v9 = *((_QWORD *)this + 79);
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, struct ID3D11Fence **))(*(_QWORD *)v9 + 544LL))(
           v9,
           0LL,
           8LL,
           &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
           &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      v11 = 2117;
      goto LABEL_4;
    }
LABEL_8:
    *a3 = v12;
    return v7;
  }
  v7 = -2147467259;
  v11 = 2121;
  v8 = -2147467259;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v8, v11);
  if ( v12 )
    ((void (__fastcall *)(struct ID3D11Fence *))v12->lpVtbl->Release)(v12);
  return v7;
}
