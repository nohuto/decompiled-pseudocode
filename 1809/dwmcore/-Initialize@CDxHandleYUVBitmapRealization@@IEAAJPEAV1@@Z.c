/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1802292D8
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228918 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228A00 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180093A88 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180228B14 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        struct _LUID *this,
        struct CDxHandleYUVBitmapRealization *a2)
{
  CD3DSurface *v2; // rdi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int D3DDevice; // eax
  __int64 v9; // rcx
  struct CD3DDeviceLevel1 *v10; // r14
  struct ID3D11Texture2D *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  CD3DSurface *v21; // [rsp+58h] [rbp+10h] BYREF
  struct CD3DDeviceLevel1 *v22; // [rsp+60h] [rbp+18h] BYREF

  v22 = 0LL;
  v2 = 0LL;
  v21 = 0LL;
  if ( !a2 )
  {
    v5 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)this);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x46u);
    return (unsigned int)v7;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[36], &v22);
  v10 = v22;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, D3DDevice, 0x4Du);
LABEL_20:
    if ( v2 )
      CD3DSurface::Release(v2);
    goto LABEL_22;
  }
  v11 = 0LL;
  v12 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(a2);
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1D6u);
  else
    v11 = *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 53) + 120LL);
  v14 = CD3DVidMemOnlyTexture::CreateFromTexture(v11, this[37].LowPart, 1, v10, &v21);
  v7 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x53u);
    v2 = v21;
    goto LABEL_20;
  }
  v2 = v21;
  v22 = (struct CD3DDeviceLevel1 *)&this[3];
  v16 = *((_DWORD *)v21 + 24);
  v17 = v16 + 1;
  v7 = v16 + 1 < v16 ? 0x80070216 : 0;
  if ( v16 + 1 < v16 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v7, 0xB5u);
  }
  else if ( v17 > *((_DWORD *)v21 + 23) )
  {
    v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v21 + 72, 8, 1, &v22);
    v7 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0xC0u);
  }
  else
  {
    v18 = v16;
    *(_QWORD *)(*((_QWORD *)v21 + 9) + 8LL * v16) = v22;
    *((_DWORD *)v2 + 24) = v17;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v7, 0x55u);
    goto LABEL_20;
  }
  this[53] = (struct _LUID)v2;
LABEL_22:
  if ( v10 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 496));
  return (unsigned int)v7;
}
