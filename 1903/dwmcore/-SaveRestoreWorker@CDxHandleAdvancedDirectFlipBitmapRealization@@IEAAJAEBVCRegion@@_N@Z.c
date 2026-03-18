/*
 * XREFs of ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x180262D68
 * Callers:
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802624E4 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262B3C (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180262C38 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800B277C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D6B40 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18015C1E8 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x18016AC50 (-GetDXGIResource@CD2DBitmap@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SaveRestoreWorker(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        FastRegion::Internal::CRgnData **a2,
        char a3)
{
  struct _LUID v4; // rdx
  CMILPoolResource *v7; // rdi
  signed int D3DDevice; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  struct CD3DTexture *v18; // r14
  struct CD3DTexture *v19; // r12
  LONG v20; // r8d
  __int64 v21; // rcx
  LONG v22; // edx
  FastRegion::Internal::CRgnData *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-60h]
  struct IDXGIResource *v26; // [rsp+30h] [rbp-50h] BYREF
  struct ID3D11Texture2D *v27; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT v28; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-28h]
  LONG *v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+68h] [rbp-18h]
  int v33; // [rsp+70h] [rbp-10h]
  struct tagPOINT v34; // [rsp+C0h] [rbp+40h] BYREF
  struct CD3DTexture *v35; // [rsp+D8h] [rbp+58h] BYREF

  v4 = (struct _LUID)*((_QWORD *)this + 36);
  *(_QWORD *)&v28.left = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                v4,
                (struct CD3DDeviceLevel1 **)&v28);
  v10 = *(_QWORD *)&v28.left;
  v11 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v25 = 398;
    goto LABEL_20;
  }
  D3DDevice = CD2DBitmap::GetDXGIResource(*((CD2DBitmap **)this + 52), &v26);
  v11 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    v25 = 401;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, D3DDevice, v25, 0LL);
    goto LABEL_21;
  }
  v12 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, struct ID3D11Texture2D **))v26->lpVtbl->QueryInterface)(
          v26,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v27);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x192u, 0LL);
    goto LABEL_21;
  }
  v14 = CD3DVidMemOnlyTexture::CreateFromTexture(
          v27,
          0,
          0,
          (struct CD3DDeviceLevel1 *)v10,
          (struct CD3DVidMemOnlyTexture **)&v34);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x198u, 0LL);
    goto LABEL_16;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 55) + 232LL))(
          *((_QWORD *)this + 55),
          &v35);
  v11 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x19Au, 0LL);
LABEL_16:
    v7 = (CMILPoolResource *)v34;
    goto LABEL_21;
  }
  v7 = (CMILPoolResource *)v34;
  if ( a3 )
  {
    v18 = v35;
    v19 = (struct CD3DTexture *)v34;
  }
  else
  {
    v19 = v35;
    v18 = (struct CD3DTexture *)v34;
  }
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v29);
  while ( (unsigned __int64)v31 < v30 )
  {
    v20 = *v31;
    v28.bottom = v31[2];
    v28.top = v20;
    v21 = 2 * v33;
    v34.y = v20;
    v22 = *(_DWORD *)(v32 + 4 * v21);
    v28.right = *(_DWORD *)(v32 + 4 * v21 + 4);
    v28.left = v22;
    v34.x = v22;
    CD3DDeviceLevel1::CopyTextureRect((CD3DDeviceLevel1 *)v10, v18, &v28, v19, &v34);
    FastRegion::Internal::CRgnData::StepIterator(v23, (struct FastRegion::CRegion::Iterator *)v29);
  }
  if ( a3 )
    CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v10);
LABEL_21:
  if ( v10 )
    CMILPoolResource::Release((CMILPoolResource *)(v10 + 496));
  if ( v7 )
    CMILPoolResource::Release(v7);
  if ( v35 )
    (*(void (__fastcall **)(struct CD3DTexture *))(*(_QWORD *)v35 + 8LL))(v35);
  if ( v26 )
    ((void (__fastcall *)(struct IDXGIResource *))v26->lpVtbl->Release)(v26);
  if ( v27 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v27->lpVtbl->Release)(v27);
  return v11;
}
