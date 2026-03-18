/*
 * XREFs of ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801CE698
 * Callers:
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801CE8E4 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D115C (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z @ 0x180027BA0 (--$ReleaseInterface@VCD3DDeviceLevel1@@@@YAXAEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x18015AAA8 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C6BB8 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 *     ??$As@UID3D11Texture2D@@@?$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801CE52C (--$As@UID3D11Texture2D@@@-$ComPtr@UIDXGISurface@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UID.c)
 */

__int64 __fastcall CCompositionCubeMap::FlushToD3DCubeMap(CCompositionCubeMap *this, struct ID2DContextOwner *a2)
{
  CCompositionSurfaceBitmap *v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed int ExistingDevice; // eax
  __int64 v7; // rcx
  char v8; // al
  unsigned int v9; // r15d
  struct CD3DDeviceLevel1 *v10; // r13
  unsigned int v11; // r14d
  __int64 v12; // r12
  signed int D2DBitmapRealizationForContextOwner; // eax
  __int64 v14; // rcx
  struct ID2D1Bitmap1 *v15; // rbx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  struct CD3DDeviceLevel1 *v22; // [rsp+40h] [rbp-18h] BYREF
  struct _LUID v23; // [rsp+48h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v24; // [rsp+A0h] [rbp+48h] BYREF
  struct ID2DContextOwner *v25; // [rsp+A8h] [rbp+50h]
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+B0h] [rbp+58h] BYREF
  struct ID3D11Texture2D *v27; // [rsp+B8h] [rbp+60h] BYREF

  v25 = a2;
  LOBYTE(v2) = 0;
  v4 = 0;
  v22 = 0LL;
  if ( *((int *)this + 28) < 0 )
    goto LABEL_23;
  v5 = *(_QWORD *)(*(_QWORD *)(32LL * *((unsigned int *)this + 28) + *((_QWORD *)this + 10) + 8) + 88LL);
  (*(void (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)v5 + 256LL))(v5, &v23);
  if ( !*((_BYTE *)this + 144) )
    goto LABEL_23;
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v23, &v22);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ExistingDevice, 0x17Eu, 0LL);
    goto LABEL_23;
  }
  v8 = *((_BYTE *)this + 160);
  v9 = 6;
  if ( !v8 )
    v9 = *((_DWORD *)this + 26);
  v10 = v22;
  v11 = 0;
  if ( !v9 )
  {
LABEL_15:
    if ( v8 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v10 + 80) + 432LL))(
        *((_QWORD *)v10 + 80),
        *((_QWORD *)this + 17));
    *((_BYTE *)this + 144) = (_BYTE)v2;
    goto LABEL_23;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v2 = *(CCompositionSurfaceBitmap **)(v12 + *((_QWORD *)this + 10) + 8);
    if ( !v2 )
      goto LABEL_13;
    v26 = 0LL;
    v27 = 0LL;
    v24 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            v2,
                                            v25,
                                            &v24);
    v4 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
      break;
    v15 = v24;
    v2 = *(CCompositionSurfaceBitmap **)(*(_QWORD *)v24 + 104LL);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
    v16 = ((__int64 (__fastcall *)(struct ID2D1Bitmap1 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))v2)(
            v15,
            &v26);
    LOBYTE(v2) = 0;
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x18Bu, 0LL);
      goto LABEL_21;
    }
    v18 = Microsoft::WRL::ComPtr<IDXGISurface>::As<ID3D11Texture2D>(&v26, (__int64 *)&v27);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x18Du, 0LL);
      goto LABEL_21;
    }
    CD3DDeviceLevel1::CopyTextureRect(
      v10,
      (struct ID3D11Resource *)v27,
      v20,
      (const struct tagRECT *)(32LL * v11 + *((_QWORD *)this + 10) + 16LL),
      *((struct ID3D11Resource **)this + 16),
      v11);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
LABEL_13:
    ++v11;
    v12 += 32LL;
    if ( v11 >= v9 )
    {
      v8 = *((_BYTE *)this + 160);
      goto LABEL_15;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x189u, 0LL);
LABEL_21:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v26);
LABEL_23:
  ReleaseInterface<CD3DDeviceLevel1>((__int64 *)&v22);
  return v4;
}
