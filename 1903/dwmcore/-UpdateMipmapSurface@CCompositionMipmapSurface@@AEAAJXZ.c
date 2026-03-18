/*
 * XREFs of ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D1CB4
 * Callers:
 *     ?OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801D1840 (-OnSceneFrameTick@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18002AA20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003F394 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x18015C188 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CFCCC (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UID.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D0340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::UpdateMipmapSurface(CCompositionMipmapSurface *this)
{
  unsigned int v2; // ebx
  signed int ExistingDevice; // eax
  __int64 v4; // rcx
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdi
  signed int CurrentRenderingRealization; // eax
  __int64 v10; // rcx
  struct IBitmapRealization *v11; // rbx
  __int64 (__fastcall *v12)(struct IBitmapRealization *, __int64 *, __int64, _QWORD, __int64 *); // rdi
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct ID3D11Texture2D *v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF
  int v25; // [rsp+50h] [rbp-10h]
  __int64 v26; // [rsp+54h] [rbp-Ch]
  struct CD3DDeviceLevel1 *v27; // [rsp+A0h] [rbp+40h] BYREF
  struct IBitmapRealization *v28; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)this + 152) )
    return v2;
  *((_BYTE *)this + 152) = 0;
  if ( !*((_QWORD *)this + 20) )
    return v2;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v27);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     *(struct _LUID *)((char *)this + 112),
                     &v27);
  v2 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, ExistingDevice, 0x16Eu, 0LL);
    goto LABEL_22;
  }
  v5 = 0;
  if ( !*((_DWORD *)this + 32) )
  {
LABEL_13:
    (*(void (__fastcall **)(CCompositionMipmapSurface *, _QWORD, CCompositionMipmapSurface *))(*(_QWORD *)this + 64LL))(
      this,
      0LL,
      this);
    goto LABEL_22;
  }
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 11);
    v7 = 32LL * v5;
    v8 = *(_QWORD *)(v7 + v6);
    if ( !v8 || !*(_BYTE *)(v7 + v6 + 24) )
      goto LABEL_12;
    v28 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                    (CCompositionSurfaceBitmap *)(v8 + 64),
                                    &v28);
    v2 = CurrentRenderingRealization;
    if ( CurrentRenderingRealization < 0 )
      break;
    v11 = v28;
    v29 = 0LL;
    v26 = 0LL;
    v24 = *((_QWORD *)this + 14);
    v25 = (int)DisplayId::None;
    v12 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64 *, __int64, _QWORD, __int64 *))(*(_QWORD *)v28 + 136LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
    v13 = v12(v11, &v24, v7 + *((_QWORD *)this + 11) + 8LL, 0LL, &v29);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x17Cu, 0LL);
      goto LABEL_16;
    }
    v15 = v29;
    v30 = 0LL;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v29
                                                                                                  + 104LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
    v17 = v16(v15, &v30);
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x17Fu, 0LL);
LABEL_15:
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
LABEL_16:
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
      goto LABEL_17;
    }
    v23 = 0LL;
    v19 = Microsoft::WRL::ComPtr<IDXGISurface>::As<ID3D11Texture2D>(&v30, (__int64 *)&v23);
    v2 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x182u, 0LL);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
      goto LABEL_15;
    }
    CD3DDeviceLevel1::CopyTextureRect(
      v27,
      (struct ID3D11Resource *)v23,
      v21,
      (const struct tagRECT *)(v7 + *((_QWORD *)this + 11) + 8LL),
      *(struct ID3D11Resource **)(*((_QWORD *)this + 20) + 128LL),
      v5);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v30);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
LABEL_12:
    if ( ++v5 >= *((_DWORD *)this + 32) )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CurrentRenderingRealization, 0x175u, 0LL);
LABEL_17:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v28);
LABEL_22:
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v27);
  return v2;
}
