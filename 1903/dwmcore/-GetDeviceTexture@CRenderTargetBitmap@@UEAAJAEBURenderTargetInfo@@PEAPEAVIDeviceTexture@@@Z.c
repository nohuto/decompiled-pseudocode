/*
 * XREFs of ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B2DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Validate@CRenderTargetBitmap@@IEBAJXZ @ 0x1800B2EEC (-Validate@CRenderTargetBitmap@@IEBAJXZ.c)
 *     ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800B2F28 (-CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B2FD4 (-GetDeviceTextureInternal@CD2DBitmapCache@@QEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetDeviceTexture(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // r14
  int DeviceTextureInternal; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rbx
  struct IDeviceTexture *v11; // rbx
  struct IDeviceTexture *v12; // rax
  unsigned int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-10h]
  struct IDeviceTexture *v16; // [rsp+60h] [rbp+30h] BYREF
  struct IDeviceTexture *v17; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v3 = (CRenderTargetBitmap *)((char *)this - 144);
  DeviceTextureInternal = CRenderTargetBitmap::Validate((CRenderTargetBitmap *)((char *)this - 144));
  v9 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
  {
    v15 = 214;
    goto LABEL_17;
  }
  if ( !*((_BYTE *)this + 32) )
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
    DeviceTextureInternal = CD2DBitmapCache::GetDeviceTextureInternal(v3, a2, &v16);
    v9 = DeviceTextureInternal;
    if ( DeviceTextureInternal >= 0 )
      goto LABEL_7;
    v15 = 219;
LABEL_17:
    v14 = DeviceTextureInternal;
    goto LABEL_18;
  }
  DeviceTextureInternal = CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(
                            v3,
                            *(_QWORD *)a2,
                            *((unsigned int *)a2 + 2));
  v9 = DeviceTextureInternal;
  if ( DeviceTextureInternal < 0 )
  {
    v15 = 224;
    goto LABEL_17;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1))
    && !*((_BYTE *)a2 + 16) )
  {
    v9 = -2147024891;
    v15 = 229;
LABEL_14:
    v14 = v9;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v14, v15, 0LL);
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10) )
  {
    v9 = -2003304307;
    v15 = 235;
    goto LABEL_14;
  }
  v11 = (struct IDeviceTexture *)(v10 + 120);
  v17 = v11;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v17);
  v17 = v16;
  v16 = v11;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v17);
LABEL_7:
  v12 = v16;
  v16 = 0LL;
  *a3 = v12;
LABEL_8:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  return v9;
}
