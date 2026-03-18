/*
 * XREFs of ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180264508
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180263B18 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180263C10 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800B277C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263D44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::Initialize(
        struct _LUID *this,
        struct CDxHandleYUVBitmapRealization *a2)
{
  CMILPoolResource *v2; // rdi
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int D3DDevice; // eax
  __int64 v9; // rcx
  struct CD3DDeviceLevel1 *v10; // r14
  struct ID3D11Texture2D *v11; // rbx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  signed int v19; // eax
  CMILPoolResource *v21; // [rsp+58h] [rbp+10h] BYREF
  struct CD3DDeviceLevel1 *v22; // [rsp+60h] [rbp+18h] BYREF

  v22 = 0LL;
  v2 = 0LL;
  v21 = 0LL;
  if ( !a2 )
  {
    v5 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleYUVBitmapRealization *)this);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x43u, 0LL);
    return v7;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[36], &v22);
  v10 = v22;
  v7 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, D3DDevice, 0x4Au, 0LL);
    goto LABEL_20;
  }
  v11 = 0LL;
  v12 = CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(a2);
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1E0u, 0LL);
  else
    v11 = *(struct ID3D11Texture2D **)(*((_QWORD *)a2 + 53) + 120LL);
  v14 = CD3DVidMemOnlyTexture::CreateFromTexture(v11, this[37].LowPart, 1, v10, &v21);
  v7 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x50u, 0LL);
    v2 = v21;
    goto LABEL_20;
  }
  v2 = v21;
  v21 = (CMILPoolResource *)&this[3];
  v16 = *((_DWORD *)v2 + 24);
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80070216, 0xB8u, 0LL);
LABEL_15:
    if ( (v7 & 0x80000000) == 0 )
      goto LABEL_16;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v7, 0x52u, 0LL);
LABEL_20:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_22;
  }
  if ( v17 > *((_DWORD *)v2 + 23) )
  {
    v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2 + 72, 8, 1, &v21);
    v7 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0xC3u, 0LL);
    goto LABEL_15;
  }
  v7 = 0;
  *(_QWORD *)(*((_QWORD *)v2 + 9) + 8LL * *((unsigned int *)v2 + 24)) = v21;
  *((_DWORD *)v2 + 24) = v17;
LABEL_16:
  this[53] = (struct _LUID)v2;
LABEL_22:
  if ( v10 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 496));
  return v7;
}
