/*
 * XREFs of ?CreateSupportedFence@CD3DDeviceLevel1@@QEAAJ_KPEAPEAUID3D11Fence@@@Z @ 0x18015C794
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EBBE4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSupportedFence(
        CD3DDeviceLevel1 *this,
        struct ID3D11Fence *a2,
        struct ID3D11Fence **a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct ID3D11Fence *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *((_QWORD *)this + 87);
  v10 = 0LL;
  if ( *(_BYTE *)(v3 + 344) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, GUID *, struct ID3D11Fence **))(**((_QWORD **)this + 79)
                                                                                          + 544LL))(
           *((_QWORD *)this + 79),
           0LL,
           0LL,
           &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
           &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = 2110;
LABEL_4:
      v7 = v5;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( *(_BYTE *)(v3 + 345) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, GUID *, struct ID3D11Fence **))(**((_QWORD **)this + 79)
                                                                                           + 544LL))(
           *((_QWORD *)this + 79),
           0LL,
           8LL,
           &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80,
           &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = 2118;
      goto LABEL_4;
    }
LABEL_8:
    *a3 = v10;
    return v6;
  }
  v6 = -2147467259;
  v7 = -2147467259;
  v9 = 2122;
LABEL_10:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, v9, 0LL);
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Fence *))v10->lpVtbl->Release)(v10);
  return v6;
}
