/*
 * XREFs of ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263D44
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180264050 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x180264508 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802648F8 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800424C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015EF4C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x18016B75C (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::EnsureVidMemOnlyTexture(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDeviceLevel1 *v1; // r14
  CMILPoolResource *v2; // rsi
  unsigned int v3; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int D3DDevice; // eax
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  signed int v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-60h]
  struct CD3DDeviceLevel1 *v17; // [rsp+30h] [rbp-50h] BYREF
  CMILPoolResource *v18; // [rsp+38h] [rbp-48h] BYREF
  struct D3D11_TEXTURE2D_DESC v19; // [rsp+40h] [rbp-40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_QWORD *)this + 53) )
    return v3;
  if ( *((_DWORD *)this + 74) )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004005, 0x1BDu, 0LL);
    goto LABEL_20;
  }
  v5 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(
         (unsigned int)this,
         *((_QWORD *)this + 36),
         *((_DWORD *)this + 108));
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1A5u, 0LL);
    return v3;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *(struct _LUID *)((char *)this + 288),
                &v17);
  v3 = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v1 = v17;
    v9 = CD3DVidMemOnlyTexture::OpenSharedTexture(
           &v19,
           v17,
           *((struct D3D11_SUBRESOURCE_DATA **)this + 35),
           1,
           v16,
           &v18);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1AFu, 0LL);
      v2 = v18;
    }
    else
    {
      v2 = v18;
      v17 = (CDxHandleYUVBitmapRealization *)((char *)this + 24);
      v11 = *((_DWORD *)v18 + 24);
      v12 = v11 + 1;
      if ( v11 + 1 >= v11 )
      {
        if ( v12 <= *((_DWORD *)v18 + 23) )
        {
          v3 = 0;
          *(_QWORD *)(*((_QWORD *)v18 + 9) + 8LL * *((unsigned int *)v18 + 24)) = v17;
          *((_DWORD *)v2 + 24) = v12;
          goto LABEL_13;
        }
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18 + 72, 8, 1, &v17);
        v3 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0xC3u, 0LL);
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( (v3 & 0x80000000) == 0 )
      {
LABEL_13:
        *((_QWORD *)this + 53) = v2;
        if ( (*((_DWORD *)v2 + 42) & 0x80000) != 0 )
          CD3DDeviceManager::AddHwProtectedEntity((__int64)&g_D3DDeviceManager, *(struct _LUID *)((char *)this + 288));
        goto LABEL_22;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0x1B1u, 0LL);
    }
LABEL_20:
    if ( v2 )
      CMILPoolResource::Release(v2);
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, D3DDevice, 0x1A8u, 0LL);
  v1 = v17;
LABEL_22:
  if ( v1 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v1 + 496));
  return v3;
}
