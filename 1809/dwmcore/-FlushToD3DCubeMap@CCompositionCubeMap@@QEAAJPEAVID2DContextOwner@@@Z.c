/*
 * XREFs of ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18018E598
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018E7DC (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x18007EE40 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180192178 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801FB744 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  unsigned int v2; // ebx
  int ExistingDevice; // eax
  __int64 v6; // rcx
  char v7; // al
  unsigned int v8; // r15d
  struct CD3DDeviceLevel1 *v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rsi
  int D2DBitmapRealizationForContextOwner; // eax
  __int64 v13; // rcx
  struct ID2D1Bitmap1 *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r8d
  const struct tagPOINT *v21; // [rsp+30h] [rbp-20h]
  bool v22; // [rsp+38h] [rbp-18h]
  struct CD3DDeviceLevel1 *v23[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v24; // [rsp+90h] [rbp+40h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+A0h] [rbp+50h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, struct ID3D11Texture2D **); // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  v23[0] = 0LL;
  if ( *((int *)this + 28) < 0 || !*((_BYTE *)this + 144) )
    goto LABEL_23;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice(
                     (CD3DDeviceManager *)&g_D3DDeviceManager,
                     *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(32LL * *((unsigned int *)this + 28)
                                                             + *((_QWORD *)this + 10)
                                                             + 8)
                                                 + 88LL)
                                     + 168LL),
                     v23);
  v2 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ExistingDevice, 0x180u);
    goto LABEL_23;
  }
  v7 = *((_BYTE *)this + 160);
  v8 = 6;
  if ( !v7 )
    v8 = *((_DWORD *)this + 26);
  v9 = v23[0];
  v10 = 0;
  if ( !v8 )
  {
LABEL_15:
    if ( v7 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v9 + 80) + 432LL))(
        *((_QWORD *)v9 + 80),
        *((_QWORD *)this + 17));
    *((_BYTE *)this + 144) = 0;
    goto LABEL_23;
  }
  v11 = 0LL;
  while ( 1 )
  {
    if ( !*(_QWORD *)(v11 + *((_QWORD *)this + 10) + 8) )
      goto LABEL_13;
    v26 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            *(CCompositionSurfaceBitmap **)(v11 + *((_QWORD *)this + 10) + 8),
                                            a2,
                                            &v24);
    v2 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
      break;
    v14 = v24;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
    v15 = (*(__int64 (__fastcall **)(struct ID2D1Bitmap1 *, __int64 (__fastcall ****)(_QWORD, GUID *, struct ID3D11Texture2D **)))(*(_QWORD *)v14 + 104LL))(
            v14,
            &v26);
    v2 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x18Du);
      goto LABEL_21;
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25);
    v17 = (**v26)(v26, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v25);
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x18Fu);
      goto LABEL_21;
    }
    CD3DDeviceLevel1::CopyTextureRect(
      v9,
      v25,
      v19,
      (const struct tagRECT *)(32LL * v10 + *((_QWORD *)this + 10) + 16LL),
      *((struct ID3D11Texture2D **)this + 16),
      v10,
      v21,
      v22);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
LABEL_13:
    ++v10;
    v11 += 32LL;
    if ( v10 >= v8 )
    {
      v7 = *((_BYTE *)this + 160);
      goto LABEL_15;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x18Bu);
LABEL_21:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
LABEL_23:
  ReleaseInterface<CD3DDeviceLevel1>((__int64 *)v23);
  return v2;
}
